#!/usr/bin/env python3
"""Unified Build, Packaging, and Deployment System for Halo: Combat Evolved Apple Platforms.

Supports:
  - macOS (Native Apple Silicon App)
  - iOS / iPadOS (Native App, .ipa, Touch HUD, Game Mode)
  - tvOS (Apple TV 4K, Game Controller, Top Shelf Assets)

Usage:
  python3 build.py ios              # Build and package iOS/iPadOS app & ipa
  python3 build.py tvos             # Build and package Apple TV app & ipa
  python3 build.py macos            # Build macOS native application
  python3 build.py all              # Build all platforms
  python3 build.py --clean          # Clean all intermediate build artifacts (keeps repo small)
  python3 build.py --install-ios    # Install to connected iPhone/iPad via devicectl
  python3 build.py --install-tvos   # Install to connected Apple TV via devicectl
  python3 build.py --reinstall-all  # Re-package and deploy to all connected devices
"""

import os
import sys
import shutil
import argparse
import subprocess
from pathlib import Path

ROOT = Path(__file__).resolve().parent

def run_command(cmd, cwd=ROOT):
    print(f"\n>> Running: {' '.join(cmd)}", flush=True)
    res = subprocess.run(cmd, cwd=cwd)
    if res.returncode != 0:
        print(f"Error: Command failed with exit code {res.returncode}", file=sys.stderr)
        sys.exit(res.returncode)

def clean_artifacts():
    print("Cleaning build and distribution artifacts...", flush=True)
    dirs_to_clean = [
        ROOT / "build-iphoneos",
        ROOT / "build-appletvos",
        ROOT / "build-macos",
        ROOT / "dist",
    ]
    for d in dirs_to_clean:
        if d.exists():
            print(f"  Removing {d.name}...", flush=True)
            shutil.rmtree(d, ignore_errors=True)
    print("Project successfully cleaned. Ready for commit/distribution!\n")

def list_connected_devices():
    try:
        out = subprocess.check_output(["xcrun", "devicectl", "list", "devices"], text=True)
        return out
    except Exception as e:
        return ""

def install_device(platform_name):
    target_app = ROOT / f"dist/Halo Combat Evolved - {'iOS' if platform_name == 'ios' else 'tvOS'}.app"
    if not target_app.exists():
        print(f"Error: {target_app} not found. Please build it first with: python3 build.py {platform_name}")
        sys.exit(1)

    print(f"\n=======================================================", flush=True)
    print(f"Installing {target_app.name} to connected devices...", flush=True)
    print(f"=======================================================", flush=True)
    
    out = list_connected_devices()
    print(out)
    
    devices = []
    for line in out.splitlines():
        line = line.strip()
        if ("available" in line or "connected" in line) and "Identifier" not in line:
            parts = line.split()
            for p in parts:
                if len(p) == 36 and p.count("-") == 4:
                    devices.append((p, line))
                    break

    if not devices:
        print("No connected or paired devices found via devicectl.")
        print("Connect your device via USB or Wi-Fi with Developer Mode enabled.")
        return

    for dev_id, desc in devices:
        # Match device type
        is_tv = "Apple TV" in desc
        if (platform_name == "tvos" and is_tv) or (platform_name == "ios" and not is_tv):
            print(f"-> Deploying to device: {dev_id} ({desc.split()[-1]})...", flush=True)
            cmd = ["xcrun", "devicectl", "device", "install", "app", "--device", dev_id, str(target_app)]
            subprocess.run(cmd)

def build_ios(skip_ipa=False):
    print("\n[1/2] Building static core libraries for iOS (iphoneos)...")
    run_command([sys.executable, "build_core_libraries.py", "iphoneos"])
    print("\n[2/2] Packaging iOS Application Bundle & IPA...")
    cmd = [sys.executable, "package_apps.py", "ios"]
    if skip_ipa:
        cmd.append("--skip-ipa")
    run_command(cmd)

def build_tvos(skip_ipa=False):
    print("\n[1/2] Building static core libraries for tvOS (appletvos)...")
    run_command([sys.executable, "build_core_libraries.py", "appletvos"])
    print("\n[2/2] Packaging Apple TV Application Bundle & IPA...")
    cmd = [sys.executable, "package_apps.py", "tvos"]
    if skip_ipa:
        cmd.append("--skip-ipa")
    run_command(cmd)

def build_macos():
    print("\nBuilding native macOS application bundle...")
    run_command([sys.executable, "build_macos_engine.py"])

def launch_gui():
    print("Launching Halo Apple Platforms Builder GUI...", flush=True)
    gui_bin = ROOT / "build-macos/HaloBuilder"
    gui_src = ROOT / "Platforms/macOS/HaloBuilderApp.m"
    if not gui_bin.exists():
        gui_bin.parent.mkdir(parents=True, exist_ok=True)
        subprocess.run(["clang", "-O2", "-fobjc-arc", "-framework", "Cocoa", str(gui_src), "-o", str(gui_bin)], check=True)
    subprocess.run([str(gui_bin)], cwd=ROOT)

def main():
    parser = argparse.ArgumentParser(description="Master build and deployment tool for Halo Combat Evolved Apple Platforms.")
    parser.add_argument("target", nargs="?", default=None, choices=["ios", "tvos", "macos", "all", "gui"],
                        help="Target platform to build (ios, tvos, macos, all, gui)")
    parser.add_argument("--clean", action="store_true", help="Remove all build and dist folders to minimize repository size")
    parser.add_argument("--skip-ipa", action="store_true", help="Skip creating .ipa zip archive to save disk space and time")
    parser.add_argument("--install-ios", action="store_true", help="Install iOS app directly to connected iPhone or iPad")
    parser.add_argument("--install-tvos", action="store_true", help="Install tvOS app directly to connected Apple TV")
    parser.add_argument("--reinstall-all", "--renew-7days", dest="reinstall_all", action="store_true", help="Re-package and deploy to all connected devices")

    args = parser.parse_args()

    if args.target == "gui":
        launch_gui()
        return

    if args.clean:
        clean_artifacts()
        return

    if args.reinstall_all:
        print("=== Deploying to All Connected Devices ===")
        build_ios(skip_ipa=True)
        install_device("ios")
        # Check if tvOS app is also installed/wanted
        if any("Apple TV" in line for line in list_connected_devices().splitlines()):
            build_tvos(skip_ipa=True)
            install_device("tvos")
        print("\nDeployment to connected devices complete!")
        return

    if args.install_ios:
        if not (ROOT / "dist/Halo Combat Evolved - iOS.app").exists():
            build_ios(skip_ipa=True)
        install_device("ios")
        return

    if args.install_tvos:
        if not (ROOT / "dist/Halo Combat Evolved - tvOS.app").exists():
            build_tvos(skip_ipa=True)
        install_device("tvos")
        return

    if not args.target:
        parser.print_help()
        sys.exit(0)

    if args.target == "ios":
        build_ios(skip_ipa=args.skip_ipa)
    elif args.target == "tvos":
        build_tvos(skip_ipa=args.skip_ipa)
    elif args.target == "macos":
        build_macos()
    elif args.target == "all":
        build_macos()
        build_ios(skip_ipa=args.skip_ipa)
        build_tvos(skip_ipa=args.skip_ipa)

if __name__ == "__main__":
    main()
