#!/usr/bin/env python3
"""Package complete iOS and tvOS .app and .ipa bundles for Halo Combat Evolved.
Supports automatic signing detection (personal team / free 7-day Apple ID or ad-hoc).
"""

import os
import sys
import shutil
import subprocess
from pathlib import Path

ROOT = Path(__file__).resolve().parent
BUILD_IPHONE = ROOT / "build-iphoneos"
BUILD_TVOS = ROOT / "build-appletvos"
OUTPUT_DIR = ROOT / "dist"
ELF_PATH = ROOT / "Core/semantics/halo_guest.elf"

def find_gamedata_source():
    """Locate Halo CE maps and game assets from standard locations or environment."""
    if "HALO_GAMEDATA" in os.environ and Path(os.environ["HALO_GAMEDATA"]).exists():
        return Path(os.environ["HALO_GAMEDATA"]).resolve()
    
    local_gd = ROOT / "Assets/GameData"
    if local_gd.exists() and (local_gd / "maps").exists():
        return local_gd.resolve()
        
    user_app = Path.home() / "Applications/Halo Combat Evolved.app/Contents/Resources/GameData"
    if user_app.exists() and (user_app / "maps").exists():
        return user_app.resolve()
        
    sys_app = Path("/Applications/Halo Combat Evolved.app/Contents/Resources/GameData")
    if sys_app.exists() and (sys_app / "maps").exists():
        return sys_app.resolve()
        
    if local_gd.exists():
        return local_gd.resolve()
    return None

def find_signing_credentials(target):
    """Auto-detect Apple Development code sign identity and matching provisioning profile."""
    # 1. Environment variable overrides
    env_id = os.environ.get("CODE_SIGN_IDENTITY")
    env_prof = os.environ.get("PROVISIONING_PROFILE")
    if env_id and env_prof and Path(env_prof).exists():
        return env_id, Path(env_prof)

    # 2. Look up installed code signing identities
    identities = []
    try:
        out = subprocess.check_output(["security", "find-identity", "-p", "codesigning", "-v"], text=True)
        for line in out.splitlines():
            line = line.strip()
            if ")" in line and '"' in line:
                sha = line.split(")", 1)[1].strip().split()[0]
                identities.append(sha)
    except Exception:
        pass

    selected_id = env_id or (identities[0] if identities else None)

    # 3. Locate matching .mobileprovision in Xcode user data
    target_bundle = "dev.mcnish.haloce" if target == "ios" else "dev.mcnish.halocetv"
    prof_dir = Path.home() / "Library/Developer/Xcode/UserData/Provisioning Profiles"
    selected_prof = Path(env_prof) if env_prof and Path(env_prof).exists() else None

    if not selected_prof and prof_dir.exists():
        # First pass: matching bundle identifier
        for p in prof_dir.glob("*.mobileprovision"):
            try:
                data = p.read_bytes()
                if target_bundle.encode() in data:
                    selected_prof = p
                    break
            except Exception:
                continue
        # Second pass: matching platform
        if not selected_prof:
            for p in prof_dir.glob("*.mobileprovision"):
                try:
                    data = p.read_bytes()
                    if (b"iOS" if target == "ios" else b"tvOS") in data:
                        selected_prof = p
                        break
                except Exception:
                    continue

    return selected_id, selected_prof

def generate_entitlements_plist(target, out_path):
    """Generate minimal valid entitlements for local development."""
    plist = """<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">
<plist version="1.0">
<dict>
    <key>get-task-allow</key>
    <true/>
</dict>
</plist>
"""
    out_path.write_text(plist)

def build_executable(target):
    sdk = "iphoneos" if target == "ios" else "appletvos"
    print(f"--> Building binary for {target} ({sdk})...", flush=True)
    sdk_path = subprocess.check_output(["xcrun", "-sdk", sdk, "--show-sdk-path"], text=True).strip()
    
    out_bin = ROOT / f"build-{sdk}/Halo Combat Evolved"
    lib_halo = ROOT / f"build-{sdk}/libHaloCore.a"
    lib_sdl = ROOT / f"Deps/SDL3/{'ios' if target == 'ios' else 'tvos'}/libSDL3.a"
    
    frameworks = [
        "-framework", "Foundation",
        "-framework", "UIKit",
        "-framework", "Metal",
        "-framework", "GameController",
        "-framework", "GameKit",
        "-framework", "CoreBluetooth",
        "-framework", "CoreAudio",
        "-framework", "AudioToolbox",
        "-framework", "AVFoundation",
        "-framework", "CoreGraphics",
        "-framework", "QuartzCore",
        "-framework", "CoreVideo",
        "-framework", "CoreHaptics",
    ]
    if target == "ios":
        frameworks += ["-framework", "OpenGLES", "-framework", "CoreMedia", "-framework", "CoreMotion"]
        
    cmd = [
        "xcrun", "-sdk", sdk, "clang",
        "-O2", "-arch", "arm64",
        "-isysroot", sdk_path,
        "-DHALO_MACOS=1", "-DRECOMP_GENERATED_CODE=1", "-DHALO_NO_FFMPEG=1",
        "-Wno-deprecated-declarations",
        "-fobjc-arc",
        "-I", str(ROOT / "Core/include"),
        "-I", str(ROOT / "Core/host"),
        "-I", str(ROOT / "Core/semantics"),
        "-I", str(ROOT / "Core/aot"),
        "-I", str(ROOT / "Deps/SDL3/include"),
        "-I", str(ROOT / "Platforms/Common"),
        str(ROOT / "Platforms/Common/apple_main.m"),
        str(ROOT / "Platforms/Common/HaloAppleLauncher.m"),
        str(ROOT / "Platforms/Common/HaloTouchHUDView.m"),
        str(lib_halo),
        str(lib_sdl),
        *frameworks,
        "-lm", "-lpthread",
        "-o", str(out_bin)
    ]
    subprocess.run(cmd, check=True)
    return out_bin

def package_target(target):
    name = "iOS" if target == "ios" else "tvOS"
    print(f"\n==========================================", flush=True)
    print(f"Packaging Halo Combat Evolved for {name}...", flush=True)
    print(f"==========================================", flush=True)
    
    app_dir = OUTPUT_DIR / f"Halo Combat Evolved - {name}.app"
    if app_dir.exists():
        shutil.rmtree(app_dir)
    app_dir.mkdir(parents=True, exist_ok=True)
    
    # 1. Compile binary
    binary = build_executable(target)
    shutil.copy2(binary, app_dir / "Halo Combat Evolved")
    
    # 2. Copy Info.plist
    plist_src = ROOT / f"Platforms/{'iOS' if target == 'ios' else 'tvOS'}/Info.plist"
    shutil.copy2(plist_src, app_dir / "Info.plist")
    
    # 3. Copy halo_guest.elf
    shutil.copy2(ELF_PATH, app_dir / "halo_guest.elf")
    
    # 4. Copy App Icons and Splash Images
    icons_dir = ROOT / "Assets/AppIcons"
    if icons_dir.exists():
        print("Copying App Icons and Splash assets...", flush=True)
        for icon_file in icons_dir.glob("*.png"):
            shutil.copy2(icon_file, app_dir / icon_file.name)

    if target == "tvos":
        print("Generating and compiling native tvOS Assets.car with actool...", flush=True)
        subprocess.run([sys.executable, str(ROOT / "generate_tvos_assets.py"), str(app_dir)], check=True)
            
    # 5. Copy GameData (maps & movies) using APFS copy-on-write clone
    gamedata_src = find_gamedata_source()
    if gamedata_src and gamedata_src.exists():
        dest_gamedata = app_dir / "GameData"
        print(f"Cloning GameData assets from {gamedata_src} via APFS CoW...", flush=True)
        subprocess.run(["cp", "-Rc", str(gamedata_src), str(dest_gamedata)], check=True)
    else:
        print("Warning: GameData maps not found in Assets/GameData. App packaged without pre-loaded maps.", flush=True)
        print("Place your maps in Assets/GameData/maps or sideload them via iTunes/Finder file sharing.", flush=True)
    
    # 6. Sign bundle
    dev_id, prof = find_signing_credentials(target)
    if dev_id and prof and prof.exists():
        print(f"Embedding provisioning profile: {prof.name}", flush=True)
        print(f"Signing with identity: {dev_id}...", flush=True)
        shutil.copy2(prof, app_dir / "embedded.mobileprovision")
        
        entitlements_tmp = OUTPUT_DIR / f"{target}_entitlements.plist"
        generate_entitlements_plist(target, entitlements_tmp)
        
        subprocess.run([
            "codesign", "--force", "--sign", dev_id,
            "--entitlements", str(entitlements_tmp),
            "--timestamp=none",
            "--generate-entitlement-der",
            str(app_dir)
        ], check=True)
        if entitlements_tmp.exists():
            entitlements_tmp.unlink()
    else:
        print("Signing app bundle (ad-hoc)...", flush=True)
        subprocess.run(["codesign", "--force", "--deep", "--sign", "-", str(app_dir)], check=True)
    
    # 7. Create IPA archive
    if "--skip-ipa" not in sys.argv:
        print("Creating .ipa distribution package...", flush=True)
        payload_dir = OUTPUT_DIR / f"Payload_{target}"
        if payload_dir.exists():
            shutil.rmtree(payload_dir)
        payload_inner = payload_dir / "Payload"
        payload_inner.mkdir(parents=True, exist_ok=True)
        
        subprocess.run(["cp", "-Rc", str(app_dir), str(payload_inner / app_dir.name)], check=True)
        ipa_path = OUTPUT_DIR / f"Halo Combat Evolved - {name}.ipa"
        if ipa_path.exists():
            ipa_path.unlink()
            
        subprocess.run(["zip", "-q", "-0", "-r", str(ipa_path), "Payload"], cwd=payload_dir, check=True)
        shutil.rmtree(payload_dir)
        print(f"-> IPA:        {ipa_path} ({ipa_path.stat().st_size / (1024*1024):.1f} MB)", flush=True)
    
    print(f"-> App Bundle: {app_dir}", flush=True)

def main():
    OUTPUT_DIR.mkdir(parents=True, exist_ok=True)
    raw_targets = [a for a in sys.argv[1:] if not a.startswith("--")]
    targets = raw_targets if raw_targets else ["ios", "tvos"]
    for t in targets:
        package_target(t)
    print("\nAll packaging completed successfully!", flush=True)

if __name__ == "__main__":
    main()
