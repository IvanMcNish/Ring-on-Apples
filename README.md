# Halo: Combat Evolved — Apple Silicon Ports (macOS, iOS, iPadOS, tvOS)

[![Platform](https://img.shields.io/badge/Platforms-macOS%20%7C%20iOS%20%7C%20iPadOS%20%7C%20tvOS-blue.svg)](#features)
[![Architecture](https://img.shields.io/badge/Arch-ARM64%20(Apple%20Silicon)-brightgreen.svg)](#features)
[![Language](https://img.shields.io/badge/Language-C%20%2F%20Objective--C%20%2F%20Metal-orange.svg)](#overview)

A fully native, high-performance port of **Halo: Combat Evolved** running natively on Apple Silicon hardware via static AOT recompilation, featuring Metal/OpenGL ES rendering, native Apple Game Mode, zero-latency touch controls, and cross-platform multiplayer.

> [!NOTE]
> Read the Spanish version of this guide here: [README_ES.md](README_ES.md).

---

## 🌟 Key Features

* **Universal Apple Silicon Optimization**: Runs natively on M1–M4 (Macs), A14–A18 (iPhones & iPads), and A15/M2 (Apple TV 4K) at rock-solid 60+ FPS with full Retina/4K scaling.
* **Apple Game Mode Support**: Configured with `LSSupportsGameMode` and GameKit integration for iOS 18 / iPadOS 18 / macOS Sonoma, providing maximum CPU/GPU priority and reduced Bluetooth latency for AirPods and gamepads.
* **Custom Sci-Fi Cyan Neon Touch HUD**:
  * **Smooth 1:1 Touch Aiming**: High-precision mouse-look tracking with zero deadzone or latency.
  * **Polished D-Pad / Move Stick**: Segmented radial quadrant dividers (45°), crisp chevrons, and analog thumb knob.
  * **Rapid-Fire Responsiveness**: Instantaneous 0 ms touch dispatch for single-shot weapons (Pistol/Sniper) and hold-to-fire for automatics.
  * **Quick Grenade Swap**: Dedicated `SWAP` button to alternate between Frag and Plasma grenades.
  * **Dedicated System Controls**: `BACK` and `START` buttons accessible during gameplay and menus.
* **Intelligent Menu Mode Transition**:
  * In menus: Combines the Left Move Joystick with a classic **ABXY Diamond Layout** on the right, while preserving direct screen-tap interactions.
  * In gameplay: Seamlessly transitions to the full combat action HUD.
* **Full Gamepad Support**: Plug-and-play support for PlayStation DualSense (with haptics), Xbox Wireless Controllers, Nintendo Switch Pro Controllers, and MFi gamepads via Apple `GameController.framework`.
* **Cross-Platform Multiplayer**:
  * **Bonjour Zero-Config Discovery**: Automatically discovers games on your local Wi-Fi without typing IP addresses.
  * **System Link**: Interoperable across Mac, Apple TV, iPhone, and iPad.
  * **MiniUPnPc Integration**: Automatic router port forwarding for internet games.
* **Built-in Settings Overlay**: Access graphical options, audio volume, touch sensitivity, and network diagnostics at any time via the draggable gear icon or 3-finger tap.

---

## 📋 Prerequisites

To compile and package the project, you need:
1. A Mac running **macOS 14 (Sonoma)** or later with Apple Silicon (M1/M2/M3/M4).
2. **Xcode 15+** installed from the Mac App Store.
3. Xcode Command Line Tools:
   ```bash
   xcode-select --install
   ```
4. **Python 3.10+** (pre-installed on macOS or available via Homebrew).
5. **Halo CE Game Data**: The original `maps/` directory from Halo: Combat Evolved.

---

## 🗂️ Project Structure

```
HaloApplePlatforms/
├── Assets/
│   ├── AppIcons/          # Platform icons and launch images
│   ├── tvos_assets/       # Multi-layered Apple TV Top Shelf assets
│   └── GameData/          # Place your Halo CE 'maps/' folder here
├── Core/
│   ├── aot/               # Recompiled AOT C shards
│   ├── host/              # Native POSIX/Apple platform bridges & SDL engine
│   ├── include/           # Header files and semantic definitions
│   └── miniupnpc/         # UPnP networking library
├── Deps/
│   └── SDL3/              # Precompiled SDL3 universal libraries and headers
├── Platforms/
│   ├── Common/            # Touch HUD, Launcher, and Menu Overlays
│   ├── iOS/               # iOS/iPadOS Info.plist and configuration
│   └── tvOS/              # Apple TV Info.plist and configuration
├── build.py               # Master CLI build and deployment tool
├── package_apps.py        # Bundle packaging, code signing, and IPA creation
└── build_core_libraries.py# Static library compiler
```

---

## 🚀 Quick Start & Building

### 1. Setting Up Game Data
Place your Halo CE `maps/` directory into `Assets/GameData/`:
```bash
# Example if you already have the Mac version installed:
ln -s ~/Applications/"Halo Combat Evolved.app"/Contents/Resources/GameData Assets/GameData
```

### 2. Building for Your Target Platform

Use the master `build.py` script:

#### For iPhone & iPad (iOS/iPadOS):
```bash
# Builds .app bundle and .ipa distribution package
python3 build.py ios

# Or skip the .ipa zip archive for faster local compilation:
python3 build.py ios --skip-ipa
```

#### For Apple TV (tvOS):
```bash
python3 build.py tvos
```

#### For Mac (macOS Native):
```bash
python3 build.py macos
```

#### Build All Platforms at Once:
```bash
python3 build.py all
```

Output bundles are placed in the `dist/` directory:
* `dist/Halo Combat Evolved - iOS.app` (and `.ipa`)
* `dist/Halo Combat Evolved - tvOS.app` (and `.ipa`)
* `~/Applications/Halo Combat Evolved.app` (macOS)

---

## 📲 Direct Installation & 7-Day Renewal (Free Apple ID)

If your device is connected via USB or Wi-Fi with **Developer Mode enabled** (`Settings -> Privacy & Security -> Developer Mode`):

### One-Click Direct Install:
```bash
# Install to connected iPhone or iPad:
python3 build.py --install-ios

# Install to connected Apple TV:
python3 build.py --install-tvos
```

### 7-Day Sideload Renewal (Free Apple Developer Account):
If you use a free Apple ID, certificates expire every 7 days. You can refresh and re-sign your apps anytime with a single command:
```bash
python3 build.py --renew-7days
```

### Sideloading via Third-Party Tools:
You can also take the generated `.ipa` from `dist/` and install it using:
* **Sideloadly** (macOS / Windows)
* **AltStore**
* **TrollStore** (if running iOS 14.0–16.6.1 / 17.0)

---

## 🧹 Keeping the Repository Lightweight

Compiled binaries and intermediate object files can take up gigabytes of space. To clean everything before committing or pushing to GitHub:
```bash
python3 build.py --clean
```
This safely removes `build-*/` and `dist/` directories, reducing the repo size down to **~120 MB**, well within GitHub's file limits.

---

## 📄 License & Disclaimer

Halo: Combat Evolved is © 343 Industries / Microsoft Corporation. This project is a reverse-engineered port intended strictly for educational and interoperability purposes. You must own a legitimate copy of Halo: Combat Evolved to use the required game asset files.
