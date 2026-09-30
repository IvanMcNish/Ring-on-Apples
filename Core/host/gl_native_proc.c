#include "gl_native_proc.h"
#include "halo_gl.h"

#include <SDL3/SDL.h>

#if defined(__APPLE__)
#include <TargetConditionals.h>
#include <dlfcn.h>
#include <objc/runtime.h>
#include <objc/message.h>
#endif

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define GL_PROC_CACHE_CAPACITY 256
#define GL_PROC_NAME_CAPACITY 128

static void *gles_proc_lookup(const char *name)
{
	void *ptr = SDL_GL_GetProcAddress(name);
	if (ptr) return ptr;
#if TARGET_OS_TV
	static void *gles_lib = NULL;
	if (!gles_lib) {
		gles_lib = dlopen("/System/Library/Frameworks/OpenGLES.framework/OpenGLES", RTLD_NOW | RTLD_GLOBAL);
	}
	if (gles_lib) {
		return dlsym(gles_lib, name);
	}
#endif
	return NULL;
}

static void APIENTRY gles_compat_glClearDepth(GLclampd d)
{
#if defined(TARGET_OS_IPHONE)
	typedef void (APIENTRY *PGLCLEARDEPTHF)(GLfloat);
	static PGLCLEARDEPTHF fn = NULL;
	if (!fn) fn = (PGLCLEARDEPTHF)gles_proc_lookup("glClearDepthf");
	if (fn) fn((GLfloat)d);
#else
	(void)d;
#endif
}

static void APIENTRY gles_compat_glDepthRange(GLclampd n, GLclampd f)
{
#if defined(TARGET_OS_IPHONE)
	typedef void (APIENTRY *PGLDEPTHRANGEF)(GLfloat, GLfloat);
	static PGLDEPTHRANGEF fn = NULL;
	if (!fn) fn = (PGLDEPTHRANGEF)gles_proc_lookup("glDepthRangef");
	if (fn) fn((GLfloat)n, (GLfloat)f);
#else
	(void)n; (void)f;
#endif
}

static void APIENTRY gles_compat_glPolygonMode(GLenum face, GLenum mode)
{
	(void)face; (void)mode;
}

static void APIENTRY gles_compat_glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, void *pixels)
{
	(void)target; (void)level; (void)format; (void)type; (void)pixels;
}

static GLuint gles_default_fbo = 0;
static int gles_default_fbo_captured = 0;

void gles_set_default_fbo(GLuint fbo)
{
	gles_default_fbo = fbo;
	gles_default_fbo_captured = 1;
	fprintf(stderr, "[gles-fbo] Set default view framebuffer: %u\n", gles_default_fbo);
}

void gles_capture_default_fbo(void)
{
	GLint fbo = 0;
	typedef void (APIENTRY *PGLGETINTEGERV)(GLenum, GLint *);
	PGLGETINTEGERV getiv = (PGLGETINTEGERV)gles_proc_lookup("glGetIntegerv");
	if (getiv) {
		getiv(GL_FRAMEBUFFER_BINDING, &fbo);
		if (fbo > 0) {
			gles_default_fbo = (GLuint)fbo;
			gles_default_fbo_captured = 1;
			fprintf(stderr, "[gles-fbo] Captured SDL default view framebuffer: %u\n", gles_default_fbo);
		}
	}
}

unsigned int gles_get_default_fbo(void)
{
	if (!gles_default_fbo_captured || gles_default_fbo == 0) {
		gles_capture_default_fbo();
	}
	return (unsigned int)gles_default_fbo;
}

static void APIENTRY gles_compat_glBindFramebuffer(GLenum target, GLuint framebuffer)
{
	typedef void (APIENTRY *PGLBINDFRAMEBUFFER)(GLenum, GLuint);
	static PGLBINDFRAMEBUFFER real_fn = NULL;
	if (!real_fn) real_fn = (PGLBINDFRAMEBUFFER)gles_proc_lookup("glBindFramebuffer");
	if (!real_fn) return;

	if (!gles_default_fbo_captured) {
		gles_capture_default_fbo();
	}

	if (framebuffer == 0 && gles_default_fbo != 0) {
		framebuffer = gles_default_fbo;
	}
	real_fn(target, framebuffer);
}

static void APIENTRY gles_compat_glGetIntegerv(GLenum pname, GLint *params)
{
	if (!params) return;

	typedef void (APIENTRY *PGLGETINTEGERV)(GLenum, GLint *);
	static PGLGETINTEGERV real_fn = NULL;
	if (!real_fn) real_fn = (PGLGETINTEGERV)gles_proc_lookup("glGetIntegerv");
	if (!real_fn) {
#if TARGET_OS_TV
		if (pname == GL_MAJOR_VERSION) { *params = 3; return; }
		if (pname == GL_MINOR_VERSION) { *params = 0; return; }
		if (pname == GL_MAX_TEXTURE_SIZE) { *params = 4096; return; }
		if (pname == GL_FRAMEBUFFER_BINDING || pname == GL_DRAW_FRAMEBUFFER_BINDING || pname == GL_READ_FRAMEBUFFER_BINDING) {
			*params = 0;
			return;
		}
#endif
		return;
	}

	real_fn(pname, params);
	if (gles_default_fbo != 0) {
		if (pname == GL_FRAMEBUFFER_BINDING || pname == GL_DRAW_FRAMEBUFFER_BINDING || pname == GL_READ_FRAMEBUFFER_BINDING) {
			if ((GLuint)*params == gles_default_fbo) {
				*params = 0;
			}
		}
	}
}

static const GLubyte * APIENTRY gles_compat_glGetString(GLenum name)
{
	typedef const GLubyte * (APIENTRY *PGLGETSTRING)(GLenum);
	PGLGETSTRING real_fn = (PGLGETSTRING)gles_proc_lookup("glGetString");
	if (real_fn) {
		const GLubyte *res = real_fn(name);
		if (res) return res;
	}
#if TARGET_OS_TV
	if (name == GL_VERSION) return (const GLubyte *)"OpenGL ES 3.0";
	if (name == GL_RENDERER) return (const GLubyte *)"Apple TV Metal GPU";
	if (name == GL_VENDOR) return (const GLubyte *)"Apple";
	if (name == GL_EXTENSIONS) return (const GLubyte *)"";
#endif
	return (const GLubyte *)"OpenGL ES 3.0";
}

static void APIENTRY gles_compat_glShaderSource(GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length)
{
	typedef void (APIENTRY *PGLSHADERSOURCE)(GLuint, GLsizei, const GLchar *const*, const GLint *);
	static PGLSHADERSOURCE real_fn = NULL;
	if (!real_fn) real_fn = (PGLSHADERSOURCE)gles_proc_lookup("glShaderSource");
	if (!real_fn) return;

	if (count > 0 && string && string[0]) {
		size_t total_len = 0;
		for (GLsizei i = 0; i < count; i++) {
			if (string[i]) {
				total_len += (length && length[i] >= 0) ? (size_t)length[i] : strlen(string[i]);
			}
		}
		char *combined = (char *)malloc(total_len + 1);
		if (combined) {
			size_t offset = 0;
			for (GLsizei i = 0; i < count; i++) {
				if (string[i]) {
					size_t part_len = (length && length[i] >= 0) ? (size_t)length[i] : strlen(string[i]);
					memcpy(combined + offset, string[i], part_len);
					offset += part_len;
				}
			}
			combined[offset] = '\0';

			const char *v_pos = strstr(combined, "#version");
			const char *rest = combined;
			if (v_pos) {
				const char *newline = strchr(v_pos, '\n');
				if (newline) {
					rest = newline + 1;
				} else {
					rest = v_pos + strlen(v_pos);
				}
			}

			const char *header =
				"#version 300 es\n"
				"#ifdef GL_ES\n"
				"precision highp float;\n"
				"precision highp int;\n"
				"precision highp sampler2D;\n"
				"precision highp sampler3D;\n"
				"precision highp samplerCube;\n"
				"#endif\n";

			size_t new_size = strlen(header) + strlen(rest) + 1;
			char *patched = (char *)malloc(new_size);
			if (patched) {
				strcpy(patched, header);
				strcat(patched, rest);
				const GLchar *p = patched;
				GLint new_len = (GLint)strlen(patched);
				real_fn(shader, 1, &p, &new_len);
				free(patched);
				free(combined);
				return;
			}
			free(combined);
		}
	}
	real_fn(shader, count, string, length);
}

static void APIENTRY gles_compat_glCompileShader(GLuint shader)
{
	typedef void (APIENTRY *PGLCOMPILE)(GLuint);
	static PGLCOMPILE real_fn = NULL;
	if (!real_fn) real_fn = (PGLCOMPILE)gles_proc_lookup("glCompileShader");
	if (real_fn) real_fn(shader);

	typedef void (APIENTRY *PGLGETSHADERIV)(GLuint, GLenum, GLint *);
	static PGLGETSHADERIV getiv = NULL;
	if (!getiv) getiv = (PGLGETSHADERIV)gles_proc_lookup("glGetShaderiv");
	if (getiv) {
		GLint status = 0;
		getiv(shader, GL_COMPILE_STATUS, &status);
		if (!status) {
			typedef void (APIENTRY *PGLGETINFOLOG)(GLuint, GLsizei, GLsizei *, GLchar *);
			static PGLGETINFOLOG getlog = NULL;
			if (!getlog) getlog = (PGLGETINFOLOG)gles_proc_lookup("glGetShaderInfoLog");
			char log[4096] = {0};
			GLsizei len = 0;
			if (getlog) getlog(shader, sizeof(log) - 1, &len, log);
			fprintf(stderr, "[gles-shader] compile error for shader %u:\n%s\n", shader, log);
		}
	}
}

static void APIENTRY gles_compat_glLinkProgram(GLuint program)
{
	typedef void (APIENTRY *PGLLINK)(GLuint);
	static PGLLINK real_fn = NULL;
	if (!real_fn) real_fn = (PGLLINK)gles_proc_lookup("glLinkProgram");
	if (real_fn) real_fn(program);

	typedef void (APIENTRY *PGLGETPROGRAMIV)(GLuint, GLenum, GLint *);
	static PGLGETPROGRAMIV getiv = NULL;
	if (!getiv) getiv = (PGLGETPROGRAMIV)gles_proc_lookup("glGetProgramiv");
	if (getiv) {
		GLint status = 0;
		getiv(program, GL_LINK_STATUS, &status);
		if (!status) {
			typedef void (APIENTRY *PGLGETINFOLOG)(GLuint, GLsizei, GLsizei *, GLchar *);
			static PGLGETINFOLOG getlog = NULL;
			if (!getlog) getlog = (PGLGETINFOLOG)gles_proc_lookup("glGetProgramInfoLog");
			char log[4096] = {0};
			GLsizei len = 0;
			if (getlog) getlog(program, sizeof(log) - 1, &len, log);
			fprintf(stderr, "[gles-program] link error for program %u:\n%s\n", program, log);
		}
	}
}

static void APIENTRY gles_compat_glVertexAttribPointer(GLuint index, GLint size, GLenum type,
	GLboolean normalized, GLsizei stride, const void *pointer)
{
	typedef void (APIENTRY *PGLVERTEXATTRIBPOINTER)(GLuint, GLint, GLenum, GLboolean, GLsizei, const void *);
	static PGLVERTEXATTRIBPOINTER real_fn = NULL;
	if (!real_fn) real_fn = (PGLVERTEXATTRIBPOINTER)gles_proc_lookup("glVertexAttribPointer");
	if (!real_fn) return;

	if (size == 0x80E1 /* GL_BGRA */) {
		size = 4;
	}
	real_fn(index, size, type, normalized, stride, pointer);
}

static void APIENTRY gles_compat_glDrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type,
	const void *indices, GLint basevertex)
{
	typedef void (APIENTRY *PGLDRAWELEMENTSBASEVERTEX)(GLenum, GLsizei, GLenum, const void *, GLint);
	static PGLDRAWELEMENTSBASEVERTEX real_fn = NULL;
	static int probed = 0;
	if (!probed) {
		real_fn = (PGLDRAWELEMENTSBASEVERTEX)gles_proc_lookup("glDrawElementsBaseVertex");
		if (!real_fn) real_fn = (PGLDRAWELEMENTSBASEVERTEX)gles_proc_lookup("glDrawElementsBaseVertexOES");
		if (!real_fn) real_fn = (PGLDRAWELEMENTSBASEVERTEX)gles_proc_lookup("glDrawElementsBaseVertexEXT");
		probed = 1;
	}
	if (real_fn) {
		real_fn(mode, count, type, indices, basevertex);
		return;
	}

	typedef void (APIENTRY *PGLDRAWELEMENTS)(GLenum, GLsizei, GLenum, const void *);
	static PGLDRAWELEMENTS draw_elements_fn = NULL;
	if (!draw_elements_fn) draw_elements_fn = (PGLDRAWELEMENTS)gles_proc_lookup("glDrawElements");
	if (!draw_elements_fn) return;

	if (basevertex == 0) {
		draw_elements_fn(mode, count, type, indices);
		return;
	}

	typedef void (APIENTRY *PGLGETINTEGERV)(GLenum, GLint *);
	typedef void (APIENTRY *PGLBINDBUFFER)(GLenum, GLuint);
	typedef void (APIENTRY *PGLBUFFERDATA)(GLenum, GLsizeiptr, const void *, GLenum);
	typedef void (APIENTRY *PGLGENBUFFERS)(GLsizei, GLuint *);
	typedef void * (APIENTRY *PGLMAPBUFFERRANGE)(GLenum, GLintptr, GLsizeiptr, GLbitfield);
	typedef GLboolean (APIENTRY *PGLUNMAPBUFFER)(GLenum);

	static PGLGETINTEGERV getiv = NULL;
	static PGLBINDBUFFER bind_buf = NULL;
	static PGLBUFFERDATA buf_data = NULL;
	static PGLGENBUFFERS gen_buf = NULL;
	static PGLMAPBUFFERRANGE map_buf = NULL;
	static PGLUNMAPBUFFER unmap_buf = NULL;

	if (!getiv) getiv = (PGLGETINTEGERV)gles_proc_lookup("glGetIntegerv");
	if (!bind_buf) bind_buf = (PGLBINDBUFFER)gles_proc_lookup("glBindBuffer");
	if (!buf_data) buf_data = (PGLBUFFERDATA)gles_proc_lookup("glBufferData");
	if (!gen_buf) gen_buf = (PGLGENBUFFERS)gles_proc_lookup("glGenBuffers");
	if (!map_buf) map_buf = (PGLMAPBUFFERRANGE)gles_proc_lookup("glMapBufferRange");
	if (!unmap_buf) unmap_buf = (PGLUNMAPBUFFER)gles_proc_lookup("glUnmapBuffer");

	GLint current_ebo = 0;
	if (getiv) getiv(GL_ELEMENT_ARRAY_BUFFER_BINDING, &current_ebo);

	if (current_ebo > 0 && map_buf && unmap_buf && gen_buf && buf_data && bind_buf) {
		size_t elem_size = (type == GL_UNSIGNED_SHORT) ? 2 : (type == GL_UNSIGNED_INT ? 4 : 1);
		size_t total_bytes = count * elem_size;
		const void *mapped = map_buf(GL_ELEMENT_ARRAY_BUFFER, (GLintptr)indices, total_bytes, GL_MAP_READ_BIT);
		if (mapped) {
			void *rebased = malloc(total_bytes);
			if (rebased) {
				if (type == GL_UNSIGNED_SHORT) {
					const unsigned short *src = (const unsigned short *)mapped;
					unsigned short *dst = (unsigned short *)rebased;
					for (GLsizei i = 0; i < count; i++) dst[i] = (unsigned short)(src[i] + basevertex);
				} else if (type == GL_UNSIGNED_INT) {
					const unsigned int *src = (const unsigned int *)mapped;
					unsigned int *dst = (unsigned int *)rebased;
					for (GLsizei i = 0; i < count; i++) dst[i] = (unsigned int)(src[i] + basevertex);
				} else {
					const unsigned char *src = (const unsigned char *)mapped;
					unsigned char *dst = (unsigned char *)rebased;
					for (GLsizei i = 0; i < count; i++) dst[i] = (unsigned char)(src[i] + basevertex);
				}
				unmap_buf(GL_ELEMENT_ARRAY_BUFFER);

				static GLuint temp_ebo = 0;
				if (!temp_ebo) gen_buf(1, &temp_ebo);
				bind_buf(GL_ELEMENT_ARRAY_BUFFER, temp_ebo);
				buf_data(GL_ELEMENT_ARRAY_BUFFER, total_bytes, rebased, GL_STREAM_DRAW);
				draw_elements_fn(mode, count, type, 0);
				bind_buf(GL_ELEMENT_ARRAY_BUFFER, (GLuint)current_ebo);
				free(rebased);
				return;
			}
			unmap_buf(GL_ELEMENT_ARRAY_BUFFER);
		}
	}
	draw_elements_fn(mode, count, type, indices);
}

static void APIENTRY gles_dummy_noop(void) {}

struct gl_proc_cache_entry
{
	SDL_GLContext context;
	char name[GL_PROC_NAME_CAPACITY];
	void *address;
	unsigned hash;
	int occupied;
};

static struct gl_proc_cache_entry gl_proc_cache[GL_PROC_CACHE_CAPACITY];
static pthread_mutex_t gl_proc_cache_mutex = PTHREAD_MUTEX_INITIALIZER;
static int no_context_reported;

void mac_macos_gl_native_proc_clear(void)
{
	pthread_mutex_lock(&gl_proc_cache_mutex);
	memset(gl_proc_cache, 0, sizeof(gl_proc_cache));
	no_context_reported = 0;
	pthread_mutex_unlock(&gl_proc_cache_mutex);
}

void *mac_macos_gl_native_proc(const char *name)
{
	SDL_GLContext context = NULL;
	size_t name_length;
	size_t free_slot = GL_PROC_CACHE_CAPACITY;
	void *address;
	unsigned hash = 2166136261u;

	if (!name || !name[0])
		return (void *)gles_dummy_noop;

	if (!strcmp(name, "glClearDepth")) return (void *)gles_compat_glClearDepth;
	if (!strcmp(name, "glDepthRange")) return (void *)gles_compat_glDepthRange;
	if (!strcmp(name, "glPolygonMode")) return (void *)gles_compat_glPolygonMode;
	if (!strcmp(name, "glGetTexImage")) return (void *)gles_compat_glGetTexImage;
	if (!strcmp(name, "glShaderSource")) return (void *)gles_compat_glShaderSource;
	if (!strcmp(name, "glCompileShader")) return (void *)gles_compat_glCompileShader;
	if (!strcmp(name, "glLinkProgram")) return (void *)gles_compat_glLinkProgram;
	if (!strcmp(name, "glBindFramebuffer")) return (void *)gles_compat_glBindFramebuffer;
	if (!strcmp(name, "glGetIntegerv")) return (void *)gles_compat_glGetIntegerv;
	if (!strcmp(name, "glBindFragDataLocation")) return (void *)gles_dummy_noop;
	if (!strcmp(name, "glVertexAttribPointer")) return (void *)gles_compat_glVertexAttribPointer;
	if (!strcmp(name, "glDrawElementsBaseVertex")) return (void *)gles_compat_glDrawElementsBaseVertex;

	name_length = strlen(name);
	if (name_length >= GL_PROC_NAME_CAPACITY)
	{
		fprintf(stderr, "[mac-gl] refusing overlong GL entry-point name\n");
		return (void *)gles_dummy_noop;
	}
	for (size_t index = 0; index < name_length; ++index)
		hash = (hash ^ (unsigned char)name[index]) * 16777619u;

#if TARGET_OS_TV
	Class eagl_cls = objc_getClass("EAGLContext");
	if (eagl_cls) {
		id (*current_fn)(id, SEL) = (id (*)(id, SEL))objc_msgSend;
		id cur_ctx = current_fn((id)eagl_cls, sel_registerName("currentContext"));
		if (cur_ctx) {
			context = (SDL_GLContext)cur_ctx;
		} else {
			context = SDL_GL_GetCurrentContext();
		}
	} else {
		context = SDL_GL_GetCurrentContext();
	}
#else
	context = SDL_GL_GetCurrentContext();
#endif

	if (!context)
	{
		address = gles_proc_lookup(name);
		if (address) return address;
		return (void *)gles_dummy_noop;
	}

	pthread_mutex_lock(&gl_proc_cache_mutex);
	for (size_t probe = 0; probe < GL_PROC_CACHE_CAPACITY; probe++)
	{
		size_t index = (hash + probe) % GL_PROC_CACHE_CAPACITY;
		struct gl_proc_cache_entry *entry = &gl_proc_cache[index];
		if (!entry->occupied)
		{
			if (free_slot == GL_PROC_CACHE_CAPACITY)
				free_slot = index;
			break;
		}
		if (entry->hash == hash && entry->context == context && strcmp(entry->name, name) == 0)
		{
			address = entry->address;
			pthread_mutex_unlock(&gl_proc_cache_mutex);
			return address;
		}
	}

	address = gles_proc_lookup(name);
	if (!address)
	{
		address = (void *)gles_dummy_noop;
	}
	if (free_slot == GL_PROC_CACHE_CAPACITY)
	{
		pthread_mutex_unlock(&gl_proc_cache_mutex);
		return address;
	}
	struct gl_proc_cache_entry *entry = &gl_proc_cache[free_slot];
	entry->context = context;
	memcpy(entry->name, name, name_length + 1);
	entry->address = address;
	entry->hash = hash;
	entry->occupied = 1;
	pthread_mutex_unlock(&gl_proc_cache_mutex);
	return address;
}
