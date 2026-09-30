#if defined(__APPLE__)
#include <TargetConditionals.h>
#endif
#include "host_sdl.h"
#include "host_app_icon.h"
#include "host_frame_metrics.h"
#include "host_memory_fingerprint.h"
#include "host_bink.h"
#include "host_game_evidence.h"

#include "guest_address.h"
#include "guest_call.h"
#include "host_services.h"

#include <SDL3/SDL.h>
#include <SDL3/SDL_opengl.h>
#include <pthread.h>
#include <stdatomic.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAC_SDL_HANDLE_COUNT 256
#define MAC_SDL_STRING_LIMIT 4096

enum mac_sdl_handle_type
{
	_mac_sdl_handle_free,
	_mac_sdl_handle_window,
	_mac_sdl_handle_context,
	_mac_sdl_handle_gamepad
};

struct mac_sdl_handle
{
	enum mac_sdl_handle_type type;
	void *object;
	uint32_t generation; /* gamepad tokens reject references from disconnected devices */
};

static struct mac_sdl_handle handles[MAC_SDL_HANDLE_COUNT];
static pthread_mutex_t handles_mutex = PTHREAD_MUTEX_INITIALIZER;
static int s_input_suspended = 0;

static int guest_string(uint32_t address, char *output, size_t capacity)
{
	const char *input;
	size_t available, scan, length;

	if (!address || !capacity || !(input = mac_guest_address_resolve(address, 1)))
		return -1;
	available = mac_guest_address_available(address);
	scan = available < capacity ? available : capacity;
	if (!scan)
		return -1;
	length = strnlen(input, scan);
	if (length == scan)
		return -1;
	memcpy(output, input, length + 1);
	return 0;
}

static uint32_t handle_new(enum mac_sdl_handle_type type, void *object)
{
	uint32_t index;

	if (!object)
		return 0;
	pthread_mutex_lock(&handles_mutex);
	for (index = 1; index < MAC_SDL_HANDLE_COUNT; ++index)
	{
		if (handles[index].type == type && handles[index].object == object)
		{
			uint32_t token = type == _mac_sdl_handle_gamepad ? index | (handles[index].generation << 8) : index;
			pthread_mutex_unlock(&handles_mutex);
			return token;
		}
	}
	for (index = 1; index < MAC_SDL_HANDLE_COUNT; ++index)
	{
		if (handles[index].type == _mac_sdl_handle_free)
		{
			handles[index].type = type;
			handles[index].object = object;
			if (type == _mac_sdl_handle_gamepad && !handles[index].generation)
				handles[index].generation = 1;
			uint32_t token = type == _mac_sdl_handle_gamepad ? index | (handles[index].generation << 8) : index;
			pthread_mutex_unlock(&handles_mutex);
			return token;
		}
	}
	pthread_mutex_unlock(&handles_mutex);
	mac_host_log(3, "SDL guest handle table exhausted");
	return 0;
}

static void *handle_get(uint32_t handle, enum mac_sdl_handle_type type)
{
	void *object = NULL;
	uint32_t index = handle & 255;
	if (!index || (type != _mac_sdl_handle_gamepad && handle >= MAC_SDL_HANDLE_COUNT))
		return NULL;
	pthread_mutex_lock(&handles_mutex);
	if (handles[index].type == type && (type != _mac_sdl_handle_gamepad ||
		(handle >> 8) == handles[index].generation))
		object = handles[index].object;
	pthread_mutex_unlock(&handles_mutex);
	return object;
}

static void gamepad_removed(SDL_JoystickID id)
{
	/* Close our one owning reference, not every guest lookup of that device.
	 * Keep window/context tokens unchanged; only gamepads have generations. */
	pthread_mutex_lock(&handles_mutex);
	for (unsigned i = 1; i < MAC_SDL_HANDLE_COUNT; ++i)
	{
		if (handles[i].type != _mac_sdl_handle_gamepad ||
			SDL_GetGamepadID(handles[i].object) != id)
			continue;
		SDL_CloseGamepad(handles[i].object);
		handles[i].object = NULL;
		handles[i].type = _mac_sdl_handle_free;
		handles[i].generation = (handles[i].generation + 1) & 0x00ffffff;
		if (!handles[i].generation) handles[i].generation = 1;
	}
	pthread_mutex_unlock(&handles_mutex);
}

int mac_host_sdl_init(uint32_t flags)
{
	int initialized = SDL_Init((SDL_InitFlags)flags) ? 1 : 0;
	fprintf(stderr, "[HaloSDL] mac_host_sdl_init: flags=0x%x, res=%d (SDL error: %s)\n",
		flags, initialized, SDL_GetError());
	if (initialized && (flags & SDL_INIT_VIDEO))
		mac_host_apply_app_icon();
	return initialized;
}

int mac_host_sdl_set_hint(uint32_t name_va, uint32_t value_va)
{
	char name[MAC_SDL_STRING_LIMIT];
	char value[MAC_SDL_STRING_LIMIT];

	if (guest_string(name_va, name, sizeof(name)) != 0 ||
		guest_string(value_va, value, sizeof(value)) != 0)
	{
		SDL_SetError("invalid guest string passed to SDL_SetHint");
		return 0;
	}
	return SDL_SetHint(name, value) ? 1 : 0;
}

int mac_host_sdl_get_error(uint32_t buffer_va, uint32_t size)
{
	const char *error = SDL_GetError();
	char *buffer;
	size_t length;

	if (!size)
		return 1;
	buffer = mac_guest_address_resolve(buffer_va, size);
	if (!buffer)
		return 0;
	length = strnlen(error ? error : "", size - 1);
	memcpy(buffer, error ? error : "", length);
	buffer[length] = '\0';
	return 1;
}

int64_t mac_host_sdl_ticks(void)
{
	Uint64 ticks = SDL_GetTicks();
	const char *trace = getenv("HALO_TRACE_HOST_TICKS");
	if (trace && trace[0] && strcmp(trace, "0") != 0)
	{
		static atomic_uint trace_count;
		unsigned index = atomic_fetch_add_explicit(&trace_count, 1, memory_order_relaxed);
		if (index < 12)
			fprintf(stderr, "[host-sdl-ticks] call=%u ticks_ms=%llu ticks_ns=%llu thread=%llu\n",
				index + 1, (unsigned long long)ticks,
				(unsigned long long)SDL_GetTicksNS(),
				(unsigned long long)SDL_GetCurrentThreadID());
	}
	return (int64_t)ticks;
}

int64_t mac_host_sdl_thread_id(void)
{
	return (int64_t)SDL_GetCurrentThreadID();
}

uint32_t mac_host_sdl_create_window(uint32_t title_va, int width, int height, int64_t flags)
{
	char title[MAC_SDL_STRING_LIMIT];
	SDL_Window *window;

	if (guest_string(title_va, title, sizeof(title)) != 0)
	{
		SDL_SetError("invalid guest window title");
		return 0;
	}
	if ((width == 1280 && height == 720) || (width == 1920 && height == 1080))
	{
		/* HD presets describe render pixels, not Retina points. Keep a
		   1080p request from becoming a 3840x2160 window drawable. */
		const SDL_DisplayMode *mode = SDL_GetDesktopDisplayMode(SDL_GetPrimaryDisplay());
		float density = mode && mode->pixel_density > 0 ? mode->pixel_density : 1.0f;
		int pixel_width = width, pixel_height = height;
		width = (int)(width / density + 0.5f);
		height = (int)(height / density + 0.5f);
		if (mode && (width > mode->w * 0.9f || height > mode->h * 0.9f))
		{
			float fit = mode->w * 0.9f / width;
			float fit_y = mode->h * 0.9f / height;
			if (fit_y < fit) fit = fit_y;
			width = (int)(width * fit);
			height = (int)(height * fit);
		}
		mac_host_logf(1, "HD window render=%dx%d points=%dx%d density=%.3g", pixel_width, pixel_height, width, height, (double)density);
	}
	const char *test_role = getenv("HALO_SDL_TEST_ROLE");
	if (test_role && (!strcmp(test_role, "host") || !strcmp(test_role, "client")))
	{
		const char *script = getenv("HALO_TEST_INPUT");
		const char *control = script && !strncmp(script,"move:",5) ? "movement-only automation" :
			script && !strncmp(script,"bot:",4) ? "scripted bot control" : "observer; manual input";
		snprintf(title, sizeof(title), "Halo Multiplayer Test — %s — %s", test_role, control);
	}
#if TARGET_OS_TV
	flags &= ~((int64_t)SDL_WINDOW_OPENGL);
	flags |= SDL_WINDOW_FULLSCREEN | SDL_WINDOW_HIGH_PIXEL_DENSITY;
#elif TARGET_OS_IPHONE
	flags |= SDL_WINDOW_FULLSCREEN | SDL_WINDOW_HIGH_PIXEL_DENSITY;
#endif
	window = SDL_CreateWindow(title, width, height, (SDL_WindowFlags)flags);
	/* Test-only positioning keeps two owned network engines visible independently. */
	const char *test_position = getenv("HALO_SDL_TEST_WINDOW_POSITION");
	if (window && test_position)
	{
		int x, y; char extra;
		if (sscanf(test_position, "%d,%d%c", &x, &y, &extra) == 2 &&
			x >= -10000 && x <= 10000 && y >= -10000 && y <= 10000)
		{
			bool positioned = SDL_SetWindowPosition(window, x, y);
			mac_host_logf(1, "test window position=%d,%d result=%d", x, y, positioned);
		}
	}
	if (window && !(flags & SDL_WINDOW_HIDDEN))
	{
		SDL_RaiseWindow(window);
		mac_host_activate_app();
	}
	return handle_new(_mac_sdl_handle_window, window);
}

int mac_host_sdl_window_size_in_pixels(uint32_t window, uint32_t width_va, uint32_t height_va)
{
	SDL_Window *object = handle_get(window, _mac_sdl_handle_window);
	int width = 0, height = 0;

	if (!object)
		return 0;
	if (!mac_guest_address_resolve(width_va, sizeof(uint32_t)) ||
		!mac_guest_address_resolve(height_va, sizeof(uint32_t)))
		return 0;
	SDL_GetWindowSizeInPixels(object, &width, &height);
	return mac_guest_write(width_va, &width, sizeof(width)) == 0 &&
		mac_guest_write(height_va, &height, sizeof(height)) == 0;
}

int mac_host_sdl_window_size(uint32_t window, uint32_t width_va, uint32_t height_va)
{
	SDL_Window *object = handle_get(window, _mac_sdl_handle_window);
	int width = 0, height = 0;
	if (!object || !mac_guest_address_resolve(width_va, sizeof(uint32_t)) ||
		!mac_guest_address_resolve(height_va, sizeof(uint32_t)))
		return 0;
	if (!SDL_GetWindowSize(object, &width, &height))
		return 0;
	return mac_guest_write(width_va, &width, sizeof(width)) == 0 &&
		mac_guest_write(height_va, &height, sizeof(height)) == 0;
}

int64_t mac_host_sdl_window_flags(uint32_t window)
{
	SDL_Window *object = handle_get(window, _mac_sdl_handle_window);
	return object ? (int64_t)SDL_GetWindowFlags(object) : 0;
}

int mac_host_sdl_set_window_size(uint32_t window, int width, int height)
{
	SDL_Window *object = handle_get(window, _mac_sdl_handle_window);
	return object && width > 0 && height > 0 && SDL_SetWindowSize(object, width, height);
}

int mac_host_sdl_set_window_fullscreen(uint32_t window, int enabled)
{
	SDL_Window *object = handle_get(window, _mac_sdl_handle_window);
	return object && SDL_SetWindowFullscreen(object, enabled != 0);
}

int mac_host_sdl_warp_mouse(uint32_t window, float x, float y)
{
	SDL_Window *object = handle_get(window, _mac_sdl_handle_window);
	if (!object)
		return 0;
	SDL_WarpMouseInWindow(object, x, y);
	return 1;
}

int mac_host_sdl_platform_screen_mode(uint32_t width_va, uint32_t height_va)
{
	SDL_DisplayID display = 0;
	const SDL_DisplayMode *mode;
	int width = 0, height = 0, fullscreen = 0;
	const int trace = getenv("HALO_TRACE_SCREEN_MODE") != NULL;
	if (!mac_guest_address_resolve(width_va, sizeof(uint32_t)) ||
		!mac_guest_address_resolve(height_va, sizeof(uint32_t)))
	{
		if (trace)
			mac_host_logf(1, "[screen-mode-host] invalid outputs width_va=0x%08x height_va=0x%08x",
				width_va, height_va);
		return 0;
	}
	pthread_mutex_lock(&handles_mutex);
	for (size_t index = 1; index < MAC_SDL_HANDLE_COUNT; ++index)
		if (handles[index].type == _mac_sdl_handle_window && handles[index].object)
		{
			SDL_Window *window = handles[index].object;
			SDL_WindowFlags flags = SDL_GetWindowFlags(window);
			if (flags & SDL_WINDOW_FULLSCREEN)
			{
				fullscreen = 1;
				display = SDL_GetDisplayForWindow(window);
				break;
			}
		}
	pthread_mutex_unlock(&handles_mutex);
	if (!fullscreen)
	{
		if (trace)
			mac_host_logf(1, "[screen-mode-host] fullscreen=0 output VAs 0x%08x/0x%08x left unchanged",
				width_va, height_va);
		return 0;
	}
	if (!display)
		display = SDL_GetPrimaryDisplay();
	mode = display ? SDL_GetDesktopDisplayMode(display) : NULL;
	if (!mode)
	{
		if (trace)
			mac_host_logf(1, "[screen-mode-host] fullscreen=1 display=%u mode unavailable",
				(unsigned)display);
		return 0;
	}
	width = (int)(mode->w * mode->pixel_density + 0.5f);
	height = (int)(mode->h * mode->pixel_density + 0.5f);
	const char *res_env = getenv("HALO_RESOLUTION");
	const char *scale_env = getenv("HALO_RENDER_SCALE");
	if (res_env && strcmp(res_env, "native") != 0)
	{
		if (strcmp(res_env, "1920x1080") == 0 || strcmp(res_env, "1080p") == 0) {
			width = 1920; height = 1080;
		} else if (strcmp(res_env, "1280x720") == 0 || strcmp(res_env, "720p") == 0) {
			width = 1280; height = 720;
		} else if (strcmp(res_env, "960x540") == 0 || strcmp(res_env, "540p") == 0) {
			width = 960; height = 540;
		} else if (strcmp(res_env, "640x480") == 0 || strcmp(res_env, "480p") == 0) {
			width = 640; height = 480;
		}
	}
	else if (scale_env)
	{
		float s = (float)atof(scale_env);
		if (s >= 0.25f && s < 1.0f) {
			width = (int)(width * s + 0.5f);
			height = (int)(height * s + 0.5f);
		}
	}
	int written = mac_guest_write(width_va, &width, sizeof(width)) == 0 &&
		mac_guest_write(height_va, &height, sizeof(height)) == 0;
	if (trace)
		mac_host_logf(1, "[screen-mode-host] fullscreen=1 display=%u mode=%dx%d density=%.6g -> %dx%d guest=0x%08x/0x%08x written=%d",
			(unsigned)display, mode->w, mode->h, (double)mode->pixel_density,
			width, height, width_va, height_va, written);
	return written;
}

static int input_trace_enabled(void)
{
	static int enabled = -1;
	if (enabled < 0) enabled = getenv("HALO_INPUT_TRACE") != NULL;
	return enabled;
}

int mac_host_sdl_set_relative_mouse(uint32_t window, int enabled)
{
	SDL_Window *object = handle_get(window, _mac_sdl_handle_window);
	if (object) SDL_SetWindowKeyboardGrab(object, false);
	int result = object ? (SDL_SetWindowRelativeMouseMode(object, enabled != 0) ? 1 : 0) : 0;
	if (object && input_trace_enabled())
		fprintf(stderr, "[input-capture] requested=%d relative=%d keyboard_grab=%d focus=%d result=%d\n",
			enabled != 0, SDL_GetWindowRelativeMouseMode(object), SDL_GetWindowKeyboardGrab(object),
			(SDL_GetWindowFlags(object) & SDL_WINDOW_INPUT_FOCUS) != 0, result);
	return result;
}

int mac_host_sdl_gl_set_attribute(int attribute, int value)
{
#if TARGET_OS_TV
	return 1;
#elif TARGET_OS_IPHONE
	if (attribute == SDL_GL_CONTEXT_MAJOR_VERSION) value = 3;
	else if (attribute == SDL_GL_CONTEXT_MINOR_VERSION) value = 0;
	else if (attribute == SDL_GL_CONTEXT_PROFILE_MASK) value = SDL_GL_CONTEXT_PROFILE_ES;
	return SDL_GL_SetAttribute((SDL_GLAttr)attribute, value) ? 1 : 0;
#else
	return SDL_GL_SetAttribute((SDL_GLAttr)attribute, value) ? 1 : 0;
#endif
}

#if TARGET_OS_TV
void *tvos_create_eagl_context(void);
void tvos_make_current_eagl_context(void *context);
void tvos_swap_eagl_buffers(void);
#endif

uint32_t mac_host_sdl_gl_create_context(uint32_t window)
{
#if TARGET_OS_TV
	(void)window;
	void *ctx = tvos_create_eagl_context();
	return handle_new(_mac_sdl_handle_context, ctx);
#else
	SDL_Window *object = handle_get(window, _mac_sdl_handle_window);
	SDL_GLContext context = object ? SDL_GL_CreateContext(object) : NULL;
	if (!context) {
		fprintf(stderr, "[host-sdl] SDL_GL_CreateContext failed: %s\n", SDL_GetError());
	}
	return handle_new(_mac_sdl_handle_context, context);
#endif
}

int mac_host_sdl_gl_make_current(uint32_t window, uint32_t context)
{
#if TARGET_OS_TV
	(void)window;
	tvos_make_current_eagl_context(handle_get(context, _mac_sdl_handle_context));
	return 1;
#else
	extern void gles_capture_default_fbo(void);
	int ok = SDL_GL_MakeCurrent(handle_get(window, _mac_sdl_handle_window),
		handle_get(context, _mac_sdl_handle_context)) ? 1 : 0;
	if (ok) gles_capture_default_fbo();
	return ok;
#endif
}

int mac_host_sdl_gl_set_swap_interval(int interval)
{
#if TARGET_OS_TV
	(void)interval;
	return 1;
#else
	return SDL_GL_SetSwapInterval(interval) ? 1 : 0;
#endif
}

#include <TargetConditionals.h>

#if TARGET_OS_IPHONE || TARGET_OS_TV
static void capture_presented_frame(SDL_Window *window) { (void)window; }
#else
/* Opt-in evidence capture, before presentation. No guest framebuffer is changed. */
static void capture_presented_frame(SDL_Window *window)
{
	const char *directory = getenv("HALO_CAPTURE_FRAME_DIR");
	const char *interval_text = getenv("HALO_CAPTURE_FRAME_INTERVAL_MS");
	const char *only_at_text = getenv("HALO_CAPTURE_FRAME_AT_MS");
	static unsigned frame;
	static Uint64 last_capture;
	static unsigned milestone_count;
	if (!directory || !*directory)
		return;
	++frame;
	Uint64 now = SDL_GetTicks();
	Uint64 interval = interval_text ? strtoull(interval_text, NULL, 10) : 0;
	if (only_at_text && *only_at_text)
	{
		const char *cursor = only_at_text;
		for (unsigned index = 0; index < milestone_count; ++index)
		{
			cursor = strchr(cursor, ',');
			if (!cursor) return;
			++cursor;
		}
		char *end;
		Uint64 milestone = strtoull(cursor, &end, 10);
		if (!milestone || (*end && *end != ',') || now < milestone)
			return;
		++milestone_count;
	}
	else if (frame != 1 && frame != 30 && frame != 120 &&
		(!interval || now - last_capture < interval))
		return;
	last_capture = now;
	typedef void (APIENTRYP get_integer_fn)(GLenum, GLint *);
	typedef void (APIENTRYP bind_framebuffer_fn)(GLenum, GLuint);
	typedef void (APIENTRYP bind_buffer_fn)(GLenum, GLuint);
	typedef void (APIENTRYP read_buffer_fn)(GLenum);
	typedef void (APIENTRYP pixel_store_fn)(GLenum, GLint);
	typedef void (APIENTRYP read_pixels_fn)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, void *);
	get_integer_fn get_integer = (get_integer_fn)SDL_GL_GetProcAddress("glGetIntegerv");
	bind_framebuffer_fn bind_framebuffer = (bind_framebuffer_fn)SDL_GL_GetProcAddress("glBindFramebuffer");
	bind_buffer_fn bind_buffer = (bind_buffer_fn)SDL_GL_GetProcAddress("glBindBuffer");
	read_buffer_fn read_buffer = (read_buffer_fn)SDL_GL_GetProcAddress("glReadBuffer");
	pixel_store_fn pixel_store = (pixel_store_fn)SDL_GL_GetProcAddress("glPixelStorei");
	read_pixels_fn read_pixels = (read_pixels_fn)SDL_GL_GetProcAddress("glReadPixels");
	int width = 0, height = 0;
	GLint previous_fbo = 0, previous_buffer = 0, default_buffer = 0, previous_pack = 4;
	GLint previous_pbo = 0, previous_row_length = 0, previous_skip_rows = 0, previous_skip_pixels = 0;
	if (!get_integer || !bind_framebuffer || !bind_buffer || !read_buffer || !pixel_store || !read_pixels ||
		!SDL_GetWindowSizeInPixels(window, &width, &height) || width <= 0 || height <= 0 ||
		width > 16384 || height > 16384)
		return;
	size_t row_bytes = (size_t)width * 4;
	unsigned char *pixels = malloc(row_bytes * (size_t)height);
	unsigned char *row = malloc(row_bytes);
	if (!pixels || !row)
	{
		free(pixels); free(row);
		return;
	}
	get_integer(GL_READ_FRAMEBUFFER_BINDING, &previous_fbo);
	get_integer(GL_READ_BUFFER, &previous_buffer);
	get_integer(GL_PACK_ALIGNMENT, &previous_pack);
	get_integer(GL_PIXEL_PACK_BUFFER_BINDING, &previous_pbo);
	get_integer(GL_PACK_ROW_LENGTH, &previous_row_length);
	get_integer(GL_PACK_SKIP_ROWS, &previous_skip_rows);
	get_integer(GL_PACK_SKIP_PIXELS, &previous_skip_pixels);
	bind_framebuffer(GL_READ_FRAMEBUFFER, 0);
	get_integer(GL_READ_BUFFER, &default_buffer);
	bind_buffer(GL_PIXEL_PACK_BUFFER, 0);
	read_buffer(GL_BACK);
	pixel_store(GL_PACK_ALIGNMENT, 1);
	pixel_store(GL_PACK_ROW_LENGTH, 0);
	pixel_store(GL_PACK_SKIP_ROWS, 0);
	pixel_store(GL_PACK_SKIP_PIXELS, 0);
	read_pixels(0, 0, width, height, GL_RGBA, GL_UNSIGNED_BYTE, pixels);
	pixel_store(GL_PACK_ALIGNMENT, previous_pack);
	pixel_store(GL_PACK_ROW_LENGTH, previous_row_length);
	pixel_store(GL_PACK_SKIP_ROWS, previous_skip_rows);
	pixel_store(GL_PACK_SKIP_PIXELS, previous_skip_pixels);
	bind_buffer(GL_PIXEL_PACK_BUFFER, (GLuint)previous_pbo);
	read_buffer((GLenum)default_buffer);
	bind_framebuffer(GL_READ_FRAMEBUFFER, (GLuint)previous_fbo);
	read_buffer((GLenum)previous_buffer);
	size_t nonblack = 0;
	for (size_t index = 0; index < (size_t)width * (size_t)height; ++index)
		if (pixels[index * 4] || pixels[index * 4 + 1] || pixels[index * 4 + 2])
			++nonblack;
	for (int y = 0; y < height / 2; ++y)
	{
		unsigned char *top = pixels + (size_t)y * row_bytes;
		unsigned char *bottom = pixels + (size_t)(height - 1 - y) * row_bytes;
		memcpy(row, top, row_bytes); memcpy(top, bottom, row_bytes); memcpy(bottom, row, row_bytes);
	}
	char path[4096];
	int length = snprintf(path, sizeof(path), "%s/frame-%04u.bmp", directory, frame);
	SDL_Surface *surface = SDL_CreateSurfaceFrom(width, height, SDL_PIXELFORMAT_RGBA32, pixels, (int)row_bytes);
	int saved = surface && length > 0 && (size_t)length < sizeof(path) && SDL_SaveBMP(surface, path);
	fprintf(stderr, "[frame-capture] frame=%u ticks_ms=%llu size=%dx%d nonblack=%zu saved=%d path=%s\n",
		frame, (unsigned long long)now, width, height, nonblack, saved, path);
	SDL_DestroySurface(surface);
	free(pixels); free(row);
}
#endif

int mac_host_sdl_gl_swap_window(uint32_t window)
{
#if TARGET_OS_TV
	(void)window;
	tvos_swap_eagl_buffers();
	static unsigned tv_swap_cnt = 0;
	if (++tv_swap_cnt <= 10 || tv_swap_cnt % 300 == 0) {
		fprintf(stderr, "[swap-trace-tvos] frame=%u ticks_ms=%llu\n",
			tv_swap_cnt, (unsigned long long)SDL_GetTicks());
	}
	return 1;
#else
	SDL_Window *object = handle_get(window, _mac_sdl_handle_window);
	static struct halo_frame_metrics metrics;
	static unsigned window_index;
	const char *metric_setting = getenv("HALO_FRAME_METRICS");
	int measure = metric_setting && strcmp(metric_setting, "1") == 0;
	if (!object)
		return 0;
	capture_presented_frame(object);
	const bool trace_swap = getenv("HALO_SDL_SWAP_TRACE") != NULL;
	static unsigned traced_swap;
	uint64_t begin_ns = measure || trace_swap ? SDL_GetTicksNS() : 0;
	if (!SDL_GL_SwapWindow(object)) return 0;
	uint64_t swapped_ns = measure || trace_swap ? SDL_GetTicksNS() : 0;
	if (trace_swap && (++traced_swap <= 500 || traced_swap % 300 == 0))
	{
		SDL_WindowFlags flags = SDL_GetWindowFlags(object);
		fprintf(stderr, "[swap-trace] frame=%u ticks_ms=%llu swap_ms=%.3f focus=%d occluded=%d flags=%llx\n",
			traced_swap, (unsigned long long)SDL_GetTicks(), (double)(swapped_ns - begin_ns) / 1e6,
			(flags & SDL_WINDOW_INPUT_FOCUS) != 0, (flags & SDL_WINDOW_OCCLUDED) != 0, (unsigned long long)flags);
	}
	mac_host_bink_presented();
	mac_game_evidence_presented();
	mac_host_memory_fingerprint_presented();
	if (measure)
	{
		uint64_t end_ns = SDL_GetTicksNS();
		if (halo_frame_metrics_add(&metrics, end_ns, swapped_ns - begin_ns))
		{
			fprintf(stderr, "[frame-metrics] window=%u frames=%u elapsed_ms=%.3f fps=%.3f mean_ms=%.3f p50_ms=%.3f p95_ms=%.3f p99_ms=%.3f swap_mean_ms=%.3f capture=%d\n",
				++window_index, metrics.count, (double)metrics.elapsed_ns / 1e6,
				(double)metrics.count * 1e9 / (double)metrics.elapsed_ns,
				(double)metrics.elapsed_ns / (double)metrics.count / 1e6,
				(double)halo_frame_metrics_percentile(&metrics, 50) / 1e6,
				(double)halo_frame_metrics_percentile(&metrics, 95) / 1e6,
				(double)halo_frame_metrics_percentile(&metrics, 99) / 1e6,
				(double)metrics.swap_ns / (double)metrics.count / 1e6,
				getenv("HALO_CAPTURE_FRAME_DIR") != NULL);
			halo_frame_metrics_reset_window(&metrics);
		}
	}
	return 1;
#endif
}

static int event_has_guest_safe_layout(Uint32 type)
{
	switch (type)
	{
	case SDL_EVENT_QUIT:
	case SDL_EVENT_TERMINATING:
	case SDL_EVENT_WILL_ENTER_BACKGROUND:
	case SDL_EVENT_DID_ENTER_BACKGROUND:
	case SDL_EVENT_WILL_ENTER_FOREGROUND:
	case SDL_EVENT_DID_ENTER_FOREGROUND:
	case SDL_EVENT_WINDOW_SHOWN:
	case SDL_EVENT_WINDOW_HIDDEN:
	case SDL_EVENT_WINDOW_EXPOSED:
	case SDL_EVENT_WINDOW_MOVED:
	case SDL_EVENT_WINDOW_RESIZED:
	case SDL_EVENT_WINDOW_PIXEL_SIZE_CHANGED:
	case SDL_EVENT_WINDOW_MINIMIZED:
	case SDL_EVENT_WINDOW_MAXIMIZED:
	case SDL_EVENT_WINDOW_RESTORED:
	case SDL_EVENT_WINDOW_MOUSE_ENTER:
	case SDL_EVENT_WINDOW_MOUSE_LEAVE:
	case SDL_EVENT_WINDOW_FOCUS_GAINED:
	case SDL_EVENT_WINDOW_FOCUS_LOST:
	case SDL_EVENT_WINDOW_CLOSE_REQUESTED:
	case SDL_EVENT_KEY_DOWN:
	case SDL_EVENT_KEY_UP:
	case SDL_EVENT_TEXT_INPUT:
	case SDL_EVENT_MOUSE_MOTION:
	case SDL_EVENT_MOUSE_BUTTON_DOWN:
	case SDL_EVENT_MOUSE_BUTTON_UP:
	case SDL_EVENT_MOUSE_WHEEL:
	case SDL_EVENT_GAMEPAD_AXIS_MOTION:
	case SDL_EVENT_GAMEPAD_BUTTON_DOWN:
	case SDL_EVENT_GAMEPAD_BUTTON_UP:
	case SDL_EVENT_GAMEPAD_ADDED:
	case SDL_EVENT_GAMEPAD_REMOVED:
	case SDL_EVENT_GAMEPAD_REMAPPED:
		return 1;
	default:
		return 0;
	}
}

/* Bounded opt-in input smoke through the same SDL events as real input. */
static void inject_test_input(void)
{
	static unsigned states[5], look_state, close_state, turn_state;
	const char *names[5] = {"HALO_SDL_TEST_SKIP_AT_MS", "HALO_SDL_TEST_MOVE_AT_MS",
		"HALO_SDL_TEST_USE_AT_MS", "HALO_SDL_TEST_FULLSCREEN_AT_MS", "HALO_SDL_TEST_QUIT_AT_MS"};
	const SDL_Scancode codes[5] = {SDL_SCANCODE_SPACE, SDL_SCANCODE_W,
		SDL_SCANCODE_E, SDL_SCANCODE_F11, SDL_SCANCODE_Q};
	Uint64 now = SDL_GetTicks();
	/* Explicit bounded verification only; normal app startup strips this variable. */
	static unsigned cycle_sent;
	const char *cycle_times = getenv("HALO_SDL_TEST_DISPLAY_CYCLE_AT_MS");
	if (cycle_times) for (unsigned pulse = 0; pulse < 8 && *cycle_times; ++pulse)
	{
		char *end;
		Uint64 at = strtoull(cycle_times, &end, 10);
		if (end == cycle_times || (*end && *end != ',') || !at || at > 600000) break;
		if (now >= at && !(cycle_sent & (1u << pulse)))
		{
			SDL_Event key; SDL_zero(key);
			key.type = SDL_EVENT_KEY_DOWN; key.key.down = true;
			key.key.scancode = SDL_SCANCODE_F10; key.key.key = SDLK_F10;
			key.key.timestamp = SDL_GetTicksNS();
			if (SDL_PushEvent(&key))
			{
				key.key.repeat = true; SDL_PushEvent(&key); /* Must not double-cycle. */
				key.type = SDL_EVENT_KEY_UP; key.key.down = false; key.key.repeat = false; SDL_PushEvent(&key);
				cycle_sent |= 1u << pulse;
				fprintf(stderr, "[test-input] F10 pulse=%u ticks_ms=%llu\n", pulse, (unsigned long long)now);
			}
		}
		cycle_times = *end ? end + 1 : end;
	}
	for (unsigned index = 0; index < 5; ++index)
	{
		const char *setting = getenv(names[index]);
		if (!setting || !*setting || states[index] >= 2)
			continue;
		char *end;
		Uint64 start = strtoull(setting, &end, 10);
		if (*end || !start || start > 600000)
			continue;
		bool down = states[index] == 0;
		if (now < start + (down ? 0 : 1000))
			continue;
		SDL_Event event;
		SDL_zero(event);
		event.type = down ? SDL_EVENT_KEY_DOWN : SDL_EVENT_KEY_UP;
		event.key.timestamp = SDL_GetTicksNS();
		event.key.scancode = codes[index];
		event.key.key = SDL_GetKeyFromScancode(codes[index], SDL_KMOD_NONE, false);
		event.key.down = down;
		if (index == 4) event.key.mod = SDL_KMOD_GUI;
		if (SDL_PushEvent(&event))
		{
			++states[index];
			fprintf(stderr, "[test-input] scancode=%u down=%d ticks_ms=%llu\n",
				(unsigned)codes[index], down, (unsigned long long)now);
		}
	}
	const char *look = getenv("HALO_SDL_TEST_LOOK_AT_MS");
	if (look && *look && look_state < 4)
	{
		char *end;
		Uint64 start = strtoull(look, &end, 10);
		if (!*end && start && start <= 600000 && now >= start + look_state * 1000)
		{
			SDL_Event event;
			SDL_zero(event);
			event.type = SDL_EVENT_MOUSE_MOTION;
			event.motion.timestamp = SDL_GetTicksNS();
			event.motion.x = 320; event.motion.y = 240;
			event.motion.xrel = look_state == 0 ? 300 : look_state == 1 ? -300 : 0;
			event.motion.yrel = look_state == 2 ? -150 : look_state == 3 ? 300 : 0;
			if (SDL_PushEvent(&event))
			{
				++look_state;
				fprintf(stderr, "[test-input] mouse_dx=%.0f mouse_dy=%.0f ticks_ms=%llu\n",
					event.motion.xrel, event.motion.yrel, (unsigned long long)now);
			}
		}
	}
	const char *turn = getenv("HALO_SDL_TEST_TURN_AT_MS");
	if (turn && *turn && !turn_state)
	{
		char *end;
		Uint64 start = strtoull(turn, &end, 10);
		if (!*end && start && start <= 600000 && now >= start)
		{
			SDL_Event event;
			SDL_zero(event);
			event.type = SDL_EVENT_MOUSE_MOTION;
			event.motion.timestamp = SDL_GetTicksNS();
			event.motion.x = 320; event.motion.y = 240;
			event.motion.xrel = 600;
			if (SDL_PushEvent(&event))
			{
				turn_state = 1;
				fprintf(stderr, "[test-input] turn_dx=600 ticks_ms=%llu\n", (unsigned long long)now);
			}
		}
	}
	const char *close_at = getenv("HALO_SDL_TEST_CLOSE_AT_MS");
	if (close_at && *close_at && !close_state)
	{
		char *end;
		Uint64 start = strtoull(close_at, &end, 10);
		if (!*end && start && start <= 600000 && now >= start)
		{
			SDL_Event event;
			SDL_zero(event);
			event.type = SDL_EVENT_WINDOW_CLOSE_REQUESTED;
			pthread_mutex_lock(&handles_mutex);
			for (unsigned index = 1; index < MAC_SDL_HANDLE_COUNT; ++index)
				if (handles[index].type == _mac_sdl_handle_window)
				{ event.window.windowID = SDL_GetWindowID(handles[index].object); break; }
			pthread_mutex_unlock(&handles_mutex);
			if (event.window.windowID && SDL_PushEvent(&event))
			{ close_state = 1; fprintf(stderr, "[test-input] window-close ticks_ms=%llu\n", (unsigned long long)now); }
		}
	}
}

int mac_host_sdl_poll_event(uint32_t event_va)
{
	SDL_Event event;

	if (!event_va || !mac_guest_address_resolve(event_va, sizeof(event)))
		return 0;
	inject_test_input();
	while (SDL_PollEvent(&event))
	{
		if (event.type == SDL_EVENT_FINGER_DOWN || event.type == SDL_EVENT_FINGER_UP || event.type == SDL_EVENT_FINGER_MOTION)
		{
#if TARGET_OS_IPHONE && !TARGET_OS_TV
			/* When in gameplay, HUD handles movement and aim directly.
			 * Discard raw finger events so they do not simulate left mouse button down (fire weapon).
			 * When in menus/pause, forward as mouse events for direct menu tapping. */
			if (mac_host_is_in_gameplay())
			{
				continue;
			}
#endif
			SDL_Window *win = SDL_GetWindowFromID(event.tfinger.windowID);
			int w = 640, h = 480;
			if (win) SDL_GetWindowSize(win, &w, &h);
			if (event.type == SDL_EVENT_FINGER_DOWN)
			{
				event.type = SDL_EVENT_MOUSE_BUTTON_DOWN;
				event.button.timestamp = event.tfinger.timestamp;
				event.button.windowID = event.tfinger.windowID;
				event.button.button = SDL_BUTTON_LEFT;
				event.button.down = true;
				event.button.clicks = 1;
				event.button.x = event.tfinger.x * (float)w;
				event.button.y = event.tfinger.y * (float)h;
			}
			else if (event.type == SDL_EVENT_FINGER_UP)
			{
				event.type = SDL_EVENT_MOUSE_BUTTON_UP;
				event.button.timestamp = event.tfinger.timestamp;
				event.button.windowID = event.tfinger.windowID;
				event.button.button = SDL_BUTTON_LEFT;
				event.button.down = false;
				event.button.clicks = 1;
				event.button.x = event.tfinger.x * (float)w;
				event.button.y = event.tfinger.y * (float)h;
			}
			else
			{
				event.type = SDL_EVENT_MOUSE_MOTION;
				event.motion.timestamp = event.tfinger.timestamp;
				event.motion.windowID = event.tfinger.windowID;
				event.motion.x = event.tfinger.x * (float)w;
				event.motion.y = event.tfinger.y * (float)h;
				event.motion.xrel = event.tfinger.dx * (float)w;
				event.motion.yrel = event.tfinger.dy * (float)h;
			}
		}
		if (input_trace_enabled() &&
			(event.type == SDL_EVENT_WINDOW_FOCUS_GAINED || event.type == SDL_EVENT_WINDOW_FOCUS_LOST ||
			 event.type == SDL_EVENT_KEY_DOWN || event.type == SDL_EVENT_KEY_UP ||
			 event.type == SDL_EVENT_MOUSE_BUTTON_DOWN || event.type == SDL_EVENT_MOUSE_BUTTON_UP))
			fprintf(stderr, "[input-event] type=%u scan=%u mod=%x button=%u\n", (unsigned)event.type,
				(event.type == SDL_EVENT_KEY_DOWN || event.type == SDL_EVENT_KEY_UP) ? event.key.scancode : 0,
				(event.type == SDL_EVENT_KEY_DOWN || event.type == SDL_EVENT_KEY_UP) ? event.key.mod : 0,
				(event.type == SDL_EVENT_MOUSE_BUTTON_DOWN || event.type == SDL_EVENT_MOUSE_BUTTON_UP) ? event.button.button : 0);
		if (input_trace_enabled() && (event.type == SDL_EVENT_MOUSE_BUTTON_DOWN || event.type == SDL_EVENT_MOUSE_BUTTON_UP))
			fprintf(stderr,"[input-point] window=%u x=%.3f y=%.3f down=%d\n",event.button.windowID,event.button.x,event.button.y,event.button.down);
		if (event.type == SDL_EVENT_GAMEPAD_REMOVED)
			gamepad_removed(event.gdevice.which);
		if (event.type == SDL_EVENT_WINDOW_CLOSE_REQUESTED)
		{
			/* The native app owns one SDL game window. Deliver its close button
			 * through the gameplay's existing normal quit path, without relying
			 * on SDL's optional last-window-quit policy. */
			SDL_Window *closing = SDL_GetWindowFromID(event.window.windowID);
			pthread_mutex_lock(&handles_mutex);
			for (unsigned index = 1; closing && index < MAC_SDL_HANDLE_COUNT; ++index)
				if (handles[index].type == _mac_sdl_handle_window && handles[index].object == closing)
				{ event.type = SDL_EVENT_QUIT; break; }
			pthread_mutex_unlock(&handles_mutex);
		}
		/* SDL drop/user events can contain host pointers; do not leak them into
		 * the 32-bit guest event buffer. Unsupported event types are discarded. */
		if (!event_has_guest_safe_layout(event.type))
			continue;
		if (s_input_suspended)
		{
			if (event.type == SDL_EVENT_KEY_DOWN || event.type == SDL_EVENT_KEY_UP ||
				event.type == SDL_EVENT_MOUSE_MOTION || event.type == SDL_EVENT_MOUSE_BUTTON_DOWN ||
				event.type == SDL_EVENT_MOUSE_BUTTON_UP || event.type == SDL_EVENT_MOUSE_WHEEL ||
				event.type == SDL_EVENT_GAMEPAD_AXIS_MOTION || event.type == SDL_EVENT_GAMEPAD_BUTTON_DOWN ||
				event.type == SDL_EVENT_GAMEPAD_BUTTON_UP)
			{
				continue;
			}
		}
		return mac_guest_write(event_va, &event, sizeof(event)) == 0;
	}
	return 0;
}

static char s_last_invite_link[512] = {0};
static char s_pending_join_invite[512] = {0};

void mac_host_queue_join_invite(const char *link)
{
	if (link && strstr(link, "halo://join/")) {
		snprintf(s_pending_join_invite, sizeof(s_pending_join_invite), "%s", link);
		SDL_SetClipboardText(link);
	}
}

const char *mac_host_get_active_invite_link(void)
{
	return s_last_invite_link[0] ? s_last_invite_link : NULL;
}

int mac_host_sdl_set_clipboard_text(uint32_t text_va)
{
	char text[MAC_SDL_STRING_LIMIT];
	if (guest_string(text_va, text, sizeof(text)) != 0)
		return 0;
	if (strstr(text, "halo://join/")) {
		snprintf(s_last_invite_link, sizeof(s_last_invite_link), "%s", text);
	}
	return SDL_SetClipboardText(text) ? 1 : 0;
}

int mac_host_sdl_get_clipboard_text(uint32_t buffer_va, uint32_t size)
{
	char *guest_buffer;
	char *text = NULL;
	size_t length;

	if (!size)
		return 1;
	guest_buffer = mac_guest_address_resolve(buffer_va, size);
	if (!guest_buffer)
		return 0;

	if (s_pending_join_invite[0]) {
		text = strdup(s_pending_join_invite);
		s_pending_join_invite[0] = '\0';
	} else {
		text = SDL_GetClipboardText();
	}

	length = strnlen(text ? text : "", size - 1);
	if (length)
		memcpy(guest_buffer, text, length);
	guest_buffer[length] = '\0';
	free(text);
	return 1;
}

int mac_host_sdl_show_toast(uint32_t message_va, int duration, int gravity, int x, int y)
{
	(void)message_va;
	(void)duration;
	(void)gravity;
	(void)x;
	(void)y;
	SDL_SetError("Android toast notifications are not available on macOS");
	return 0;
}

int mac_host_sdl_show_simple_message_box(uint32_t flags, uint32_t title_va, uint32_t message_va)
{
	char title[MAC_SDL_STRING_LIMIT];
	char message[MAC_SDL_STRING_LIMIT];
	if (guest_string(title_va, title, sizeof(title)) != 0 ||
		guest_string(message_va, message, sizeof(message)) != 0)
		return 0;
	return SDL_ShowSimpleMessageBox((SDL_MessageBoxFlags)flags, title, message, NULL) ? 1 : 0;
}

#define VIRTUAL_TOUCH_PAD_ID 0x7E000001

static struct {
	int active;
	int16_t axes[6];
	uint8_t buttons[32];
	float look_rx;
	float look_ry;
	float look_sensitivity;
	int look_inverted;
} s_touch_state = {
	.active = 1,
	.look_sensitivity = 1.0f,
	.look_inverted = 0
};
static pthread_mutex_t s_touch_mutex = PTHREAD_MUTEX_INITIALIZER;

void mac_host_touch_set_stick(int is_right, float norm_x, float norm_y)
{
	pthread_mutex_lock(&s_touch_mutex);
	if (!is_right) {
		if (norm_x < -1.0f) norm_x = -1.0f; else if (norm_x > 1.0f) norm_x = 1.0f;
		if (norm_y < -1.0f) norm_y = -1.0f; else if (norm_y > 1.0f) norm_y = 1.0f;
		s_touch_state.axes[SDL_GAMEPAD_AXIS_LEFTX] = (int16_t)(norm_x * 32767.0f);
		s_touch_state.axes[SDL_GAMEPAD_AXIS_LEFTY] = (int16_t)(norm_y * 32767.0f);
	} else {
		if (norm_x < -1.0f) norm_x = -1.0f; else if (norm_x > 1.0f) norm_x = 1.0f;
		if (norm_y < -1.0f) norm_y = -1.0f; else if (norm_y > 1.0f) norm_y = 1.0f;
		s_touch_state.axes[SDL_GAMEPAD_AXIS_RIGHTX] = (int16_t)(norm_x * 32767.0f);
		s_touch_state.axes[SDL_GAMEPAD_AXIS_RIGHTY] = (int16_t)(norm_y * 32767.0f);
	}
	pthread_mutex_unlock(&s_touch_mutex);
}

void mac_host_touch_look_delta(float delta_x, float delta_y)
{
	pthread_mutex_lock(&s_touch_mutex);
	float sens = s_touch_state.look_sensitivity * 2.2f;
	float mx = delta_x * sens;
	float my = (s_touch_state.look_inverted ? -delta_y : delta_y) * sens;
	pthread_mutex_unlock(&s_touch_mutex);

	// Push 1:1 direct mouse motion event directly into Halo's camera engine
	SDL_Event event;
	SDL_zero(event);
	event.type = SDL_EVENT_MOUSE_MOTION;
	event.motion.timestamp = SDL_GetTicksNS();
	event.motion.xrel = mx;
	event.motion.yrel = my;
	SDL_PushEvent(&event);
}

void mac_host_touch_look_end(void)
{
	pthread_mutex_lock(&s_touch_mutex);
	s_touch_state.look_rx = 0.0f;
	s_touch_state.look_ry = 0.0f;
	pthread_mutex_unlock(&s_touch_mutex);
}

void mac_host_send_mouse_button(int button, int down)
{
	SDL_Event event;
	SDL_zero(event);
	event.type = down ? SDL_EVENT_MOUSE_BUTTON_DOWN : SDL_EVENT_MOUSE_BUTTON_UP;
	event.button.timestamp = SDL_GetTicksNS();
	event.button.button = (Uint8)button;
	event.button.down = down ? true : false;
	event.button.clicks = down ? 1 : 0;
	SDL_PushEvent(&event);
}

void mac_host_send_key(int scancode, int down)
{
	SDL_Event event;
	SDL_zero(event);
	event.type = down ? SDL_EVENT_KEY_DOWN : SDL_EVENT_KEY_UP;
	event.key.timestamp = SDL_GetTicksNS();
	event.key.scancode = (SDL_Scancode)scancode;
	event.key.down = down ? true : false;
	SDL_PushEvent(&event);
}

void mac_host_touch_set_button(int button_index, int pressed)
{
	if (button_index >= 0 && button_index < 32) {
		pthread_mutex_lock(&s_touch_mutex);
		s_touch_state.buttons[button_index] = pressed ? 1 : 0;
		pthread_mutex_unlock(&s_touch_mutex);
	}
}

void mac_host_touch_set_trigger(int is_right, float pressure)
{
	pthread_mutex_lock(&s_touch_mutex);
	if (pressure < 0.0f) pressure = 0.0f; else if (pressure > 1.0f) pressure = 1.0f;
	int16_t val = (int16_t)(pressure * 32767.0f);
	if (is_right) {
		s_touch_state.axes[SDL_GAMEPAD_AXIS_RIGHT_TRIGGER] = val;
	} else {
		s_touch_state.axes[SDL_GAMEPAD_AXIS_LEFT_TRIGGER] = val;
	}
	pthread_mutex_unlock(&s_touch_mutex);
}

int mac_host_touch_get_axis(int axis)
{
	int val = 0;
	pthread_mutex_lock(&s_touch_mutex);
	if (axis == SDL_GAMEPAD_AXIS_RIGHTX) {
		val = (int)s_touch_state.look_rx;
		s_touch_state.look_rx *= 0.35f;
		if (fabsf(s_touch_state.look_rx) < 50.0f) s_touch_state.look_rx = 0.0f;
	} else if (axis == SDL_GAMEPAD_AXIS_RIGHTY) {
		val = (int)s_touch_state.look_ry;
		s_touch_state.look_ry *= 0.35f;
		if (fabsf(s_touch_state.look_ry) < 50.0f) s_touch_state.look_ry = 0.0f;
	} else if (axis >= 0 && axis < 6) {
		val = s_touch_state.axes[axis];
	}
	pthread_mutex_unlock(&s_touch_mutex);
	return val;
}

int mac_host_touch_get_button(int button)
{
	int pressed = 0;
	if (button >= 0 && button < 32) {
		pthread_mutex_lock(&s_touch_mutex);
		pressed = s_touch_state.buttons[button];
		if (!pressed && !mac_host_is_in_gameplay()) {
			int ly = s_touch_state.axes[SDL_GAMEPAD_AXIS_LEFTY];
			int lx = s_touch_state.axes[SDL_GAMEPAD_AXIS_LEFTX];
			if (button == SDL_GAMEPAD_BUTTON_DPAD_UP && ly < -12000) pressed = 1;
			if (button == SDL_GAMEPAD_BUTTON_DPAD_DOWN && ly > 12000) pressed = 1;
			if (button == SDL_GAMEPAD_BUTTON_DPAD_LEFT && lx < -12000) pressed = 1;
			if (button == SDL_GAMEPAD_BUTTON_DPAD_RIGHT && lx > 12000) pressed = 1;
		}
		pthread_mutex_unlock(&s_touch_mutex);
	}
	return pressed;
}

void mac_host_touch_reset(void)
{
	pthread_mutex_lock(&s_touch_mutex);
	memset(s_touch_state.axes, 0, sizeof(s_touch_state.axes));
	memset(s_touch_state.buttons, 0, sizeof(s_touch_state.buttons));
	s_touch_state.look_rx = 0.0f;
	s_touch_state.look_ry = 0.0f;
	pthread_mutex_unlock(&s_touch_mutex);
}

void mac_host_touch_set_hud_active(int active)
{
	pthread_mutex_lock(&s_touch_mutex);
	s_touch_state.active = active;
	pthread_mutex_unlock(&s_touch_mutex);
}

int mac_host_touch_is_hud_active(void)
{
	return s_touch_state.active;
}

void mac_host_touch_set_look_sensitivity(float sens)
{
	pthread_mutex_lock(&s_touch_mutex);
	if (sens < 0.2f) sens = 0.2f;
	if (sens > 3.0f) sens = 3.0f;
	s_touch_state.look_sensitivity = sens;
	pthread_mutex_unlock(&s_touch_mutex);
}

float mac_host_touch_get_look_sensitivity(void)
{
	return s_touch_state.look_sensitivity;
}

void mac_host_touch_set_look_inverted(int inverted)
{
	pthread_mutex_lock(&s_touch_mutex);
	s_touch_state.look_inverted = inverted ? 1 : 0;
	pthread_mutex_unlock(&s_touch_mutex);
}

int mac_host_touch_get_look_inverted(void)
{
	return s_touch_state.look_inverted;
}

int mac_host_sdl_get_gamepads(uint32_t ids_va, int capacity)
{
	int count = 0, index;
	SDL_JoystickID *ids;
	uint32_t *guest_ids;

	if (capacity < 0)
		return -1;
	if (capacity && !mac_guest_address_resolve(ids_va, (size_t)capacity * sizeof(uint32_t)))
		return -1;
	ids = SDL_GetGamepads(&count);
#if TARGET_OS_IPHONE && !TARGET_OS_TV
	if (!ids || count == 0)
	{
		if (capacity >= 1)
		{
			uint32_t virt_id = VIRTUAL_TOUCH_PAD_ID;
			if (mac_guest_write(ids_va, &virt_id, sizeof(virt_id)) == 0)
			{
				if (ids) SDL_free(ids);
				return 1;
			}
		}
		if (ids) SDL_free(ids);
		return 0;
	}
#else
	if (!ids)
		return 0;
#endif
	if (count > capacity)
		count = capacity;
	guest_ids = malloc((size_t)count * sizeof(*guest_ids));
	if (count && !guest_ids)
	{
		SDL_free(ids);
		return 0;
	}
	for (index = 0; index < count; ++index)
		guest_ids[index] = (uint32_t)ids[index];
	SDL_free(ids);
	if (count && mac_guest_write(ids_va, guest_ids, (size_t)count * sizeof(*guest_ids)) != 0)
		count = 0;
	free(guest_ids);
	return count;
}

uint32_t mac_host_sdl_open_gamepad(uint32_t id)
{
#if TARGET_OS_IPHONE && !TARGET_OS_TV
	if (id == VIRTUAL_TOUCH_PAD_ID)
		return handle_new(_mac_sdl_handle_gamepad, (void*)0x7E000001);
#endif
	SDL_Gamepad *object = SDL_GetGamepadFromID((SDL_JoystickID)id);
	return handle_new(_mac_sdl_handle_gamepad, object ? object : SDL_OpenGamepad((SDL_JoystickID)id));
}

uint32_t mac_host_sdl_gamepad_from_id(uint32_t id)
{
#if TARGET_OS_IPHONE && !TARGET_OS_TV
	if (id == VIRTUAL_TOUCH_PAD_ID)
		return handle_new(_mac_sdl_handle_gamepad, (void*)0x7E000001);
#endif
	return handle_new(_mac_sdl_handle_gamepad, SDL_GetGamepadFromID((SDL_JoystickID)id));
}

void mac_host_set_input_suspended(int suspended)
{
	s_input_suspended = suspended;
}

int mac_host_is_input_suspended(void)
{
	return s_input_suspended;
}

static SDL_Gamepad *gamepad_locked(uint32_t token)
{
 uint32_t index = token & 255;
 return index && handles[index].type == _mac_sdl_handle_gamepad &&
  handles[index].generation == (token >> 8) ? handles[index].object : NULL;
}

int mac_host_sdl_gamepad_axis(uint32_t gamepad, int axis)
{
 if (s_input_suspended) return 0;
 pthread_mutex_lock(&handles_mutex); SDL_Gamepad *object=gamepad_locked(gamepad);
 int result = (object && object != (void*)0x7E000001) ? SDL_GetGamepadAxis(object,(SDL_GamepadAxis)axis) : 0;
 pthread_mutex_unlock(&handles_mutex);

#if TARGET_OS_IPHONE && !TARGET_OS_TV
 int touch_val = mac_host_touch_get_axis(axis);
 if (abs(touch_val) > abs(result))
  result = touch_val;
#endif

 return result;
}

int mac_host_sdl_gamepad_button(uint32_t gamepad, int button)
{
 if (s_input_suspended) return 0;
 pthread_mutex_lock(&handles_mutex); SDL_Gamepad *object=gamepad_locked(gamepad);
 int result = (object && object != (void*)0x7E000001) ? SDL_GetGamepadButton(object,(SDL_GamepadButton)button) : 0;
 pthread_mutex_unlock(&handles_mutex);

#if TARGET_OS_IPHONE && !TARGET_OS_TV
 if (mac_host_touch_get_button(button))
  result = 1;
#endif

 return result;
}

int mac_host_sdl_gamepad_type(uint32_t gamepad)
{
 pthread_mutex_lock(&handles_mutex); SDL_Gamepad *object=gamepad_locked(gamepad);
#if TARGET_OS_IPHONE && !TARGET_OS_TV
 if (object == (void*)0x7E000001) {
  pthread_mutex_unlock(&handles_mutex);
  return SDL_GAMEPAD_TYPE_XBOX360;
 }
#endif
 int result=object ? SDL_GetGamepadType(object) : SDL_GAMEPAD_TYPE_UNKNOWN;
 pthread_mutex_unlock(&handles_mutex); return result;
}

int mac_host_sdl_rumble_gamepad(uint32_t gamepad, uint32_t low, uint32_t high, uint32_t milliseconds)
{
 if (s_input_suspended) return 0;
 pthread_mutex_lock(&handles_mutex); SDL_Gamepad *object=gamepad_locked(gamepad);
#if TARGET_OS_IPHONE && !TARGET_OS_TV
 if (object == (void*)0x7E000001) {
  pthread_mutex_unlock(&handles_mutex);
  return 1;
 }
#endif
 int result=object ? SDL_RumbleGamepad(object,(Uint16)low,(Uint16)high,milliseconds) : 0;
 pthread_mutex_unlock(&handles_mutex); return result;
}

int mac_host_is_in_gameplay(void)
{
    return mac_game_is_in_gameplay();
}

const char *mac_host_current_map_name(void)
{
    return mac_game_current_map_name();
}

