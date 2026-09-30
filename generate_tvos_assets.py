#!/usr/bin/env python3
"""Generate tvOS layered Assets.xcassets and compile Assets.car with actool."""

import os
import sys
import json
import shutil
import subprocess
from pathlib import Path

ROOT = Path(__file__).resolve().parent
ICONS_SRC = ROOT / "Assets/AppIcons"
TVOS_ASSETS = ROOT / "Assets/tvos_assets/Assets.xcassets"
BRANDASSETS = TVOS_ASSETS / "App Icon.brandassets"

def write_json(path, data):
    path.parent.mkdir(parents=True, exist_ok=True)
    with open(path, "w") as f:
        json.dump(data, f, indent=2)

def generate_assets():
    if TVOS_ASSETS.exists():
        shutil.rmtree(TVOS_ASSETS)
    TVOS_ASSETS.mkdir(parents=True, exist_ok=True)

    # 1. Root Contents.json
    write_json(TVOS_ASSETS / "Contents.json", {
        "info": {"version": 1, "author": "xcode"}
    })

    # 2. Brandassets Contents.json
    write_json(BRANDASSETS / "Contents.json", {
        "assets": [
            {
                "size": "400x240",
                "idiom": "tv",
                "role": "primary-app-icon",
                "filename": "App Icon - Small.imagestack"
            },
            {
                "size": "1280x768",
                "idiom": "tv",
                "role": "primary-app-icon",
                "filename": "App Icon - Large.imagestack"
            },
            {
                "size": "1920x720",
                "idiom": "tv",
                "role": "top-shelf-image",
                "filename": "Top Shelf Image.imageset"
            }
        ],
        "info": {"version": 1, "author": "xcode"}
    })

    # 3. Small ImageStack (400x240 @1x, 800x480 @2x)
    small_dir = BRANDASSETS / "App Icon - Small.imagestack"
    write_json(small_dir / "Contents.json", {
        "layers": [
            {"filename": "Front.imagestacklayer"},
            {"filename": "Background.imagestacklayer"}
        ],
        "info": {"version": 1, "author": "xcode"}
    })

    # Small Front
    front_small = small_dir / "Front.imagestacklayer"
    write_json(front_small / "Contents.json", {"info": {"version": 1, "author": "xcode"}})
    front_small_img = front_small / "Content.imageset"
    write_json(front_small_img / "Contents.json", {
        "images": [
            {"idiom": "tv", "scale": "1x", "filename": "front.png"},
            {"idiom": "tv", "scale": "2x", "filename": "front@2x.png"}
        ],
        "info": {"version": 1, "author": "xcode"}
    })
    # Copy & scale small front
    shutil.copy2(ICONS_SRC / "AppIconSmall.png", front_small_img / "front.png")
    subprocess.run(["sips", "-z", "480", "800", str(ICONS_SRC / "AppIconSmall.png"), "--out", str(front_small_img / "front@2x.png")], check=True, stdout=subprocess.DEVNULL)

    # Small Background (solid dark/black)
    bg_small = small_dir / "Background.imagestacklayer"
    write_json(bg_small / "Contents.json", {"info": {"version": 1, "author": "xcode"}})
    bg_small_img = bg_small / "Content.imageset"
    write_json(bg_small_img / "Contents.json", {
        "images": [
            {"idiom": "tv", "scale": "1x", "filename": "background.png"},
            {"idiom": "tv", "scale": "2x", "filename": "background@2x.png"}
        ],
        "info": {"version": 1, "author": "xcode"}
    })
    shutil.copy2(front_small_img / "front.png", bg_small_img / "background.png")
    shutil.copy2(front_small_img / "front@2x.png", bg_small_img / "background@2x.png")

    # 4. Large ImageStack (1280x768 @1x)
    large_dir = BRANDASSETS / "App Icon - Large.imagestack"
    write_json(large_dir / "Contents.json", {
        "layers": [
            {"filename": "Front.imagestacklayer"},
            {"filename": "Background.imagestacklayer"}
        ],
        "info": {"version": 1, "author": "xcode"}
    })

    # Large Front
    front_large = large_dir / "Front.imagestacklayer"
    write_json(front_large / "Contents.json", {"info": {"version": 1, "author": "xcode"}})
    front_large_img = front_large / "Content.imageset"
    write_json(front_large_img / "Contents.json", {
        "images": [
            {"idiom": "tv", "scale": "1x", "filename": "front-large.png"}
        ],
        "info": {"version": 1, "author": "xcode"}
    })
    shutil.copy2(ICONS_SRC / "AppIconLarge.png", front_large_img / "front-large.png")

    # Large Background
    bg_large = large_dir / "Background.imagestacklayer"
    write_json(bg_large / "Contents.json", {"info": {"version": 1, "author": "xcode"}})
    bg_large_img = bg_large / "Content.imageset"
    write_json(bg_large_img / "Contents.json", {
        "images": [
            {"idiom": "tv", "scale": "1x", "filename": "background-large.png"}
        ],
        "info": {"version": 1, "author": "xcode"}
    })
    shutil.copy2(front_large_img / "front-large.png", bg_large_img / "background-large.png")

    # 5. Top Shelf Image (1920x720 @1x, 3840x1440 @2x)
    shelf_dir = BRANDASSETS / "Top Shelf Image.imageset"
    write_json(shelf_dir / "Contents.json", {
        "images": [
            {"idiom": "tv", "scale": "1x", "filename": "top-shelf.png"},
            {"idiom": "tv", "scale": "2x", "filename": "top-shelf@2x.png"}
        ],
        "info": {"version": 1, "author": "xcode"}
    })
    shutil.copy2(ICONS_SRC / "TopShelfWide.png", shelf_dir / "top-shelf.png")
    subprocess.run(["sips", "-z", "1440", "3840", str(ICONS_SRC / "TopShelfWide.png"), "--out", str(shelf_dir / "top-shelf@2x.png")], check=True, stdout=subprocess.DEVNULL)

    print("tvOS Assets.xcassets structure generated successfully!", flush=True)

def compile_assets(app_dir):
    print(f"Compiling tvOS Assets.car into {app_dir}...", flush=True)
    partial_plist = ROOT / "build-appletvos/tvos_partial.plist"
    partial_plist.parent.mkdir(parents=True, exist_ok=True)
    if partial_plist.exists():
        partial_plist.unlink()
        
    cmd = [
        "xcrun", "actool",
        "--output-format", "human-readable-text",
        "--notices", "--warnings",
        "--app-icon", "App Icon",
        "--output-partial-info-plist", str(partial_plist),
        "--enable-on-demand-resources", "NO",
        "--target-device", "tv",
        "--minimum-deployment-target", "16.0",
        "--platform", "appletvos",
        "--compile", str(app_dir),
        str(TVOS_ASSETS)
    ]
    subprocess.run(cmd, check=True)
    print("Assets.car compiled successfully!", flush=True)

if __name__ == "__main__":
    generate_assets()
    if len(sys.argv) > 1:
        compile_assets(sys.argv[1])
