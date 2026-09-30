#!/usr/bin/env python3
"""Build static libHaloCore.a for iOS (iphoneos) and tvOS (appletvos)."""

import os
import sys
import subprocess
from pathlib import Path
from concurrent.futures import ThreadPoolExecutor

ROOT = Path(__file__).resolve().parent
CORE = ROOT / "Core"
AOT = CORE / "aot"
HOST = CORE / "host"
GEN_GL = CORE / "generated-gl"
MINIUPNP = CORE / "miniupnpc"
DEPS = ROOT / "Deps"

def get_sdk_path(sdk_name):
    return subprocess.check_output(["xcrun", "-sdk", sdk_name, "--show-sdk-path"], text=True).strip()

def collect_sources():
    sources = []
    # AOT shards & dispatch
    sources.extend(sorted(AOT.glob("recomp_*.c")))
    # Generated GL
    sources.append(GEN_GL / "gl_wrappers.c")
    # MiniUPnPc
    sources.extend(sorted(MINIUPNP.glob("*.c")))
    # Host files
    host_files = [
        "guest_address.c", "guest_allocator.c", "guest_call.c", "guest_image.c",
        "guest_heap.c", "guest_errno.c", "guest_x87_80.c", "recomp_state.c",
        "recomp_runtime.c", "guest_import_registry.c", "guest_callback.c",
        "guest_thread.c", "gl41_compat.c", "gl_bridge_support.c", "gl_host_imports.c",
        "gl_native_proc.c", "host_import_bindings.c", "host_imports.c",
        "host_imports_recomp.c", "host_memory_fingerprint.c", "host_game_evidence.c",
        "host_bink.c", "host_sdl.c", "host_app_icon.m", "host_sdl_audio.c",
        "host_services.c", "host_syscall.c", "posix_host_imports.c",
        "posix_backend_files.c", "posix_backend_net.c", "posix_backend_upnp.c",
        "main.c"
    ]
    for h in host_files:
        p = HOST / h
        if p.exists():
            sources.append(p)
        else:
            print(f"Warning: host file not found: {h}")
    return sources

def compile_source(args):
    source, out_obj, sdk_name, sdk_path = args
    if out_obj.exists() and out_obj.stat().st_mtime > source.stat().st_mtime:
        return True
    
    cmd = [
        "xcrun", "-sdk", sdk_name, "clang",
        "-c", "-O2", "-arch", "arm64",
        "-isysroot", sdk_path,
        "-DHALO_MACOS=1", "-DRECOMP_GENERATED_CODE=1", "-DHALO_NO_FFMPEG=1", "-DHALO_CUSTOM_MAIN=1",
        "-DMINIUPNP_STATICLIB", "-DMINIUPNPC_SET_SOCKET_TIMEOUT", "-DMINIUPNPC_GET_SRC_ADDR",
        "-Wno-parentheses-equality", "-Wno-deprecated-declarations",
        "-I", str(CORE / "include"),
        "-I", str(HOST),
        "-I", str(CORE / "semantics"),
        "-I", str(AOT),
        "-I", str(GEN_GL),
        "-I", str(MINIUPNP),
        "-I", str(DEPS / "SDL3/include"),
        str(source),
        "-o", str(out_obj)
    ]
    res = subprocess.run(cmd, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)
    if res.returncode != 0:
        print(f"Error compiling {source.name}:\n{res.stderr}")
        return False
    return True

def build_platform(sdk_name):
    print(f"=== Building HaloCore for {sdk_name} ===", flush=True)
    sdk_path = get_sdk_path(sdk_name)
    build_dir = ROOT / f"build-{sdk_name}"
    objs_dir = build_dir / "objs"
    objs_dir.mkdir(parents=True, exist_ok=True)
    
    sources = collect_sources()
    print(f"Total source files to compile: {len(sources)}", flush=True)
    
    tasks = []
    objs = []
    for s in sources:
        obj_name = f"{s.stem}_{abs(hash(str(s))) % 100000}.o"
        out_obj = objs_dir / obj_name
        objs.append(out_obj)
        tasks.append((s, out_obj, sdk_name, sdk_path))
    
    with ThreadPoolExecutor(max_workers=os.cpu_count() or 8) as executor:
        results = list(executor.map(compile_source, tasks))
    
    if not all(results):
        print(f"Build failed for {sdk_name}!", file=sys.stderr)
        return False
    
    out_lib = build_dir / "libHaloCore.a"
    print(f"Archiving {out_lib.name}...", flush=True)
    ar_cmd = ["libtool", "-static", "-o", str(out_lib)] + [str(o) for o in objs]
    res = subprocess.run(ar_cmd, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)
    if res.returncode != 0:
        print(f"Error creating archive:\n{res.stderr}", file=sys.stderr)
        return False
    
    print(f"Successfully generated: {out_lib} ({out_lib.stat().st_size / (1024*1024):.2f} MB)", flush=True)
    return True

def main():
    targets = sys.argv[1:] if len(sys.argv) > 1 else ["iphoneos", "appletvos"]
    for t in targets:
        if not build_platform(t):
            sys.exit(1)
    print("\nAll core static libraries successfully built!", flush=True)

if __name__ == "__main__":
    main()
