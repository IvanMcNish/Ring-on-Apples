# Halo: Combat Evolved — Apple Silicon Ports (macOS, iOS, iPadOS, tvOS)

---

### 🌐 Language / Idioma: [🇪🇸 Haz clic aquí para leer en Español (README_ES.md)](README_ES.md) | [🇺🇸 English (Current)](README.md)

---

[![Platform](https://img.shields.io/badge/Platforms-macOS%20%7C%20iOS%20%7C%20iPadOS%20%7C%20tvOS-blue.svg)](#features)
[![Architecture](https://img.shields.io/badge/Arch-ARM64%20(Apple%20Silicon)-brightgreen.svg)](#features)
[![Language](https://img.shields.io/badge/Language-C%20%2F%20Objective--C%20%2F%20Metal-orange.svg)](#overview)

A fully native, high-performance port of **Halo: Combat Evolved** running natively on Apple Silicon hardware via static AOT recompilation, featuring Metal/OpenGL ES rendering, native Apple Game Mode, zero-latency touch controls, and cross-platform multiplayer.

> [!IMPORTANT]
> **LEGAL & CLEAN-ROOM DISCLAIMER**:
> This repository contains **ONLY open-source recompiled engine code, translation layers, and platform launchers**. It **DOES NOT CONTAIN** any copyrighted game assets, audio files, textures, game maps (`.map`), or ISO disk images.
> Users must legally own a copy of Halo: Combat Evolved (PC/Mac) and provide their own game assets.

---

## 🌟 Key Features

* **Universal Apple Silicon Optimization**: Runs natively on M1–M4 (Macs), A14–A18 (iPhones & iPads), and A15/M2 (Apple TV 4K) at rock-solid 60+ FPS with full Retina/4K scaling.
* **Apple Game Mode & Low Latency (iOS, iPadOS, macOS, tvOS)**:
  * **iOS / iPadOS**: Integrates `LSSupportsGameMode` to trigger Game Mode, prioritizing CPU/GPU for the game and doubling Bluetooth polling rates for gamepads.
  * **Apple TV 4K**: Triggers HDMI 2.1 Auto Low Latency Mode (ALLM) on compatible TVs (LG, Samsung, Sony), alongside Game Center overlay and DualSense / Xbox controller integration.
* **Halo Apple Platforms Builder (Native Mac GUI)**: Includes a standalone Mac app (`HaloBuilder.command`) to select assets, compile, export IPAs for AltStore/Sideloadly, and deploy in one click.
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

### 2. Option A: Using the macOS GUI Builder (Recommended)
You can configure, compile, and deploy without using the terminal:
1. Double-click **`HaloBuilder.command`** in Finder (or run `python3 build.py gui`).
2. Select your target platform (**iOS/iPadOS**, **Apple TV**, **macOS**, or **All**).
3. Select your Halo `maps/` folder.
4. Check **"Generar .IPA listos para AltStore / Sideloadly"** or **"Instalar automáticamente"**.
5. Click **"🚀 Iniciar Compilación"**.

---

### 3. Option B: Using the CLI Tool (`build.py`)

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

## 📲 Installing the Generated `.ipa` (Sideloadly, AltStore, Xcode)

Once compiled, packages are placed in the `dist/` directory:
* `dist/Halo Combat Evolved - iOS.ipa`
* `dist/Halo Combat Evolved - tvOS.ipa`
* `dist/Halo Combat Evolved - iOS.app`
* `dist/Halo Combat Evolved - tvOS.app`

### Installation Options:

#### 1. Sideloadly (macOS & Windows — Recommended)
1. Download and open [Sideloadly](https://sideloadly.io/).
2. Connect your iPhone, iPad, or Apple TV via USB or Wi-Fi.
3. Drag & drop `dist/Halo Combat Evolved - iOS.ipa` (or tvOS) into the Sideloadly window.
4. Enter your Apple ID and click **Start** to sign and install automatically.

#### 2. AltStore / SideStore
1. Send the generated `.ipa` file to your iOS device (via AirDrop, iCloud Drive, or the Files app).
2. Open **AltStore** or **SideStore**.
3. Under the **My Apps** tab, tap the `+` icon and select `Halo Combat Evolved - iOS.ipa`.

#### 3. Xcode / Apple Configurator
1. In Xcode, navigate to `Window` -> `Devices and Simulators`.
2. Select your connected device and drag & drop the `.app` or `.ipa` bundle onto the **Installed Apps** list.
3. For Apple TV, pair wirelessly through Xcode and deploy directly.

#### 4. Direct CLI / GUI Deployment (Local Device)
If your device is paired with your Mac and has **Developer Mode enabled** (`Settings -> Privacy & Security -> Developer Mode`):
```bash
# Direct install to connected iPhone or iPad:
python3 build.py --install-ios

# Direct install to connected Apple TV:
python3 build.py --install-tvos
```

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
