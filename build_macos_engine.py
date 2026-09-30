#!/usr/bin/env python3
"""Build native macOS halo_engine and update ~/Applications/Halo Combat Evolved.app."""

import os
import sys
import json
import hashlib
import shutil
import subprocess
from pathlib import Path
from concurrent.futures import ThreadPoolExecutor

ROOT = Path(__file__).resolve().parent
CORE = ROOT / "Core"
AOT = CORE / "aot"
HOST = CORE / "host"
GEN_GL = CORE / "generated-gl"
MINIUPNP = CORE / "miniupnpc"

APP_PATH = Path.home() / "Applications" / "Halo Combat Evolved.app"

def run_cmd(cmd, cwd=None):
    res = subprocess.run(cmd, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True, cwd=cwd)
    if res.returncode != 0:
        print(f"Command failed: {' '.join(str(c) for c in cmd)}\n{res.stderr}", file=sys.stderr)
        sys.exit(1)
    return res.stdout.strip()

def sha256_file(path):
    h = hashlib.sha256()
    with open(path, "rb") as f:
        for chunk in iter(lambda: f.read(1024 * 1024), b""):
            h.update(chunk)
    return h.hexdigest()

def collect_sources():
    sources = []
    sources.extend(sorted(AOT.glob("recomp_*.c")))
    sources.append(GEN_GL / "gl_wrappers.c")
    sources.extend(sorted(MINIUPNP.glob("*.c")))
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
    source, out_obj, sdk_path, pkg_cflags = args
    if out_obj.exists() and out_obj.stat().st_mtime > source.stat().st_mtime:
        return True

    cmd = [
        "clang", "-c", "-O2", "-arch", "arm64",
        "-isysroot", sdk_path,
        "-DHALO_MACOS=1", "-DRECOMP_GENERATED_CODE=1",
        "-DMINIUPNP_STATICLIB", "-DMINIUPNPC_SET_SOCKET_TIMEOUT", "-DMINIUPNPC_GET_SRC_ADDR",
        "-Wno-parentheses-equality", "-Wno-deprecated-declarations",
        "-I", str(CORE / "include"),
        "-I", str(HOST),
        "-I", str(CORE / "semantics"),
        "-I", str(AOT),
        "-I", str(GEN_GL),
        "-I", str(MINIUPNP),
    ] + pkg_cflags + [str(source), "-o", str(out_obj)]

    res = subprocess.run(cmd, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)
    if res.returncode != 0:
        print(f"Error compiling {source.name}:\n{res.stderr}")
        return False
    return True

def main():
    print("=== Building macOS native halo_engine ===", flush=True)
    sdk_path = run_cmd(["xcrun", "-sdk", "macosx", "--show-sdk-path"])
    pkg_cflags = run_cmd(["pkg-config", "--cflags", "sdl3", "libavformat", "libavcodec", "libswscale", "libswresample", "libavutil"]).split()
    pkg_libs = run_cmd(["pkg-config", "--libs", "sdl3", "libavformat", "libavcodec", "libswscale", "libswresample", "libavutil"]).split()

    build_dir = ROOT / "build-macos"
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
        tasks.append((s, out_obj, sdk_path, pkg_cflags))

    with ThreadPoolExecutor(max_workers=os.cpu_count() or 8) as executor:
        results = list(executor.map(compile_source, tasks))

    if not all(results):
        print("Compilation failed!", file=sys.stderr)
        sys.exit(1)

    out_engine = build_dir / "halo_engine"
    print(f"Linking {out_engine.name}...", flush=True)
    link_cmd = [
        "clang", "-arch", "arm64",
        "-isysroot", sdk_path,
        "-Wl,-rpath,@executable_path/../Frameworks",
        "-Wl,-rpath,/opt/homebrew/lib",
        "-framework", "AppKit",
        "-framework", "CoreFoundation",
        "-framework", "Foundation",
        "-framework", "OpenGL",
        "-lobjc", "-lm"
    ] + pkg_libs + [str(o) for o in objs] + ["-o", str(out_engine)]

    run_cmd(link_cmd)
    size_mb = out_engine.stat().st_size / (1024 * 1024)
    print(f"halo_engine built successfully: {size_mb:.2f} MB", flush=True)

    if not APP_PATH.exists():
        print(f"Note: Mac app not found at {APP_PATH}")
        return

    dest_engine = APP_PATH / "Contents" / "MacOS" / "halo_engine"
    print(f"Updating {dest_engine}...", flush=True)
    shutil.copy2(out_engine, dest_engine)

    manifest_path = APP_PATH / "Contents" / "Resources" / "launch-config.json"
    if manifest_path.exists():
        print(f"Updating launch-config.json checksum...", flush=True)
        with open(manifest_path, "r", encoding="utf-8") as f:
            cfg = json.load(f)
        cfg["binary_sha256"] = sha256_file(dest_engine)
        if "build_environment" in cfg and "binary_sha256" in cfg["build_environment"]:
            cfg["build_environment"]["binary_sha256"] = cfg["binary_sha256"]
        with open(manifest_path, "w", encoding="utf-8") as f:
            json.dump(cfg, f, indent=2)

    print("Re-signing macOS app...", flush=True)
    run_cmd(["codesign", "--force", "--deep", "--sign", "-", str(APP_PATH)])
    print("=== macOS app updated and signed successfully! ===", flush=True)

if __name__ == "__main__":
    main()
