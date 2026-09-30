# Halo: Combat Evolved — Ports Nativos para Plataformas Apple (macOS, iOS, iPadOS, tvOS)

---

### 🌐 Idioma / Language: [🇪🇸 Español (Actual)](README_ES.md) | [🇺🇸 Click here to read in English (README.md)](README.md)

---

[![Plataformas](https://img.shields.io/badge/Plataformas-macOS%20%7C%20iOS%20%7C%20iPadOS%20%7C%20tvOS-blue.svg)](#características-principales)
[![Arquitectura](https://img.shields.io/badge/Arquitectura-ARM64%20(Apple%20Silicon)-brightgreen.svg)](#características-principales)
[![Lenguaje](https://img.shields.io/badge/Lenguajes-C%20%2F%20Objective--C%20%2F%20Metal-orange.svg)](#descripción-del-proyecto)

Port nativo y de alto rendimiento de **Halo: Combat Evolved** diseñado específicamente para Apple Silicon mediante recompilación estática AOT, renderizado con Metal y OpenGL ES, compatibilidad con el Modo Juego de Apple, controles táctiles Neón Sci-Fi y multijugador multiplataforma.

> [!IMPORTANT]
> **AVISO LEGAL Y REGLA DE SALA LIMPIA (CLEAN-ROOM DISCLAIMER)**:
> Este repositorio **SOLO contiene código fuente abierto del motor recompilado, capas de traducción nativas y lanzadores para Apple Silicon**. **NO CONTIENE** ningún archivo con copyright comercial, música, sonidos, texturas, mapas de juego (`.map`) ni imágenes de disco ISO.
> El usuario debe poseer legalmente una copia original de Halo: Combat Evolved (PC o Mac) y proveer sus propios archivos de juego para generar las versiones ejecutables.

---

## 🌟 Características Principales

* **Optimización Total para Apple Silicon**: Diseñado para exprimir al máximo los chips M1–M4 (Macs), A14–A18 (iPhones e iPads) y A15/M2 (Apple TV 4K), corriendo a más de 60 FPS estables con resolución completa.
* **Compatibilidad con Modo Juego de Apple (Game Mode) y Baja Latencia**:
  * **iOS / iPadOS**: Integración nativa con `LSSupportsGameMode` para priorizar CPU/GPU y reducir la latencia de controles Bluetooth a la mitad.
  * **Apple TV 4K**: Activa automáticamente el Modo de Baja Latencia (HDMI ALLM) en televisores compatibles (LG, Samsung, Sony), con soporte para superposición de Game Center y mandos DualSense / Xbox.
* **Halo Apple Platforms Builder (App Gráfica para Mac)**: Aplicación gráfica nativa para macOS (`HaloBuilder.command`) que permite compilar, generar archivos `.ipa` para AltStore/Sideloadly e instalar en dispositivos con un solo clic.
* **HUD Táctil Sci-Fi Neón Cian**:
  * **Apuntado 1:1 Ultra-Fluido**: Seguimiento de mira por movimiento relativo de ratón en tiempo real, sin decaimiento ni zonas muertas.
  * **Cruceta / Joystick de Movimiento Pulido**: 4 divisores diagonales a 45° matemáticamente limpios, chevrons (`▲`, `▼`, `◀`, `▶`) nítidos y perilla central analógica.
  * **Disparo Rápido Instantáneo (0 ms)**: Pulsaciones de alta sensibilidad para vaciar cargadores de pistola/francotirador tiro a tiro tan rápido como toques la pantalla, y soporte continuo para armas automáticas.
  * **Cambio Rápido de Granadas**: Botón `SWAP` dedicado para alternar entre granadas de fragmentación y de plasma.
  * **Botones de Sistema BACK y START**: Acceso inmediato a pausa y marcadores de partida en cualquier momento.
* **Transición Inteligente Modo Menú**:
  * **En los Menús**: Combina el joystick de navegación izquierdo con una **cruceta en diamante de botones A, B, X, Y** a la derecha, manteniendo la interacción táctil directa sobre cualquier opción de la pantalla.
  * **En la Partida**: Transiciona suavemente al layout de combate completo.
* **Soporte Nativo de Mandos**: Compatible con mandos PlayStation DualSense (con respuesta háptica), Xbox Series, Nintendo Switch Pro y mandos MFi vía `GameController.framework`.
* **Multijugador Multiplataforma**:
  * **Descubrimiento Zero-Config por Bonjour**: Encuentra y únete a partidas en la red local Wi-Fi sin escribir direcciones IP.
  * **System Link**: Juega partidas cruzadas entre Mac, Apple TV, iPhone e iPad.
  * **MiniUPnPc Integrado**: Redirección automática de puertos para alojar partidas en internet sin configurar el router.
* **Menú Integrado de Ajustes**: Menú de configuración accesible en cualquier momento deslizando el icono de engranaje o tocando la pantalla con 3 dedos.

---

## 📋 Requisitos Previos

Para compilar y empaquetar el proyecto se necesita:
1. Un equipo Mac con procesador Apple Silicon (M1/M2/M3/M4) y **macOS 14 (Sonoma)** o superior.
2. **Xcode 15+** instalado desde el Mac App Store.
3. Herramientas de línea de comandos de Xcode:
   ```bash
   xcode-select --install
   ```
4. **Python 3.10+** (incluido en macOS o vía Homebrew).
5. **Archivos de Juego de Halo CE**: El directorio `maps/` original de Halo: Combat Evolved.

---

## 🗂️ Estructura del Proyecto

```
HaloApplePlatforms/
├── Assets/
│   ├── AppIcons/          # Iconos de la aplicación e imágenes de inicio
│   ├── tvos_assets/       # Recursos multicapa para el Top Shelf de Apple TV
│   └── GameData/          # Carpeta donde colocar los mapas ('maps/')
├── Core/
│   ├── aot/               # Código C recompilado estáticamente (shards)
│   ├── host/              # Puentes POSIX/Apple y motor SDL
│   ├── include/           # Cabeceras y semántica del motor
│   └── miniupnpc/         # Librería UPnP para multijugador
├── Deps/
│   └── SDL3/              # Librerías y cabeceras de SDL3
├── Platforms/
│   ├── Common/            # HUD táctil, lanzador y menús de opciones
│   ├── iOS/               # Configuración e Info.plist de iOS/iPadOS
│   └── tvOS/              # Configuración e Info.plist de Apple TV
├── build.py               # Herramienta maestra de compilación y despliegue
├── package_apps.py        # Empaquetado, firma y generación de archivos IPA
└── build_core_libraries.py# Compilador de librerías estáticas del core
```

---

## 🚀 Guía de Compilación

### 1. Configurar los Archivos del Juego (GameData)
Coloca la carpeta `maps/` de tu copia de Halo CE dentro de `Assets/GameData/`:
```bash
# Ejemplo si ya tienes instalada la versión de Mac:
ln -s ~/Applications/"Halo Combat Evolved.app"/Contents/Resources/GameData Assets/GameData
```

### 2. Opción A: Usando la App Gráfica para Mac (Recomendado)
Puedes compilar y generar tus apps sin tocar la terminal:
1. Haz doble clic en el archivo ejecutable **`HaloBuilder.command`** en el Finder (o corre `python3 build.py gui`).
2. Selecciona la plataforma destino (**iOS/iPadOS**, **Apple TV**, **macOS**, o **Todas**).
3. Selecciona tu carpeta con los mapas de Halo (`maps/`).
4. Marca **"Generar .IPA listos para AltStore / Sideloadly"** o **"Instalar automáticamente"**.
5. Presiona **"🚀 Iniciar Compilación"**. La app compilará todo de forma nativa e instalará o abrirá la carpeta con los archivos `.ipa`.

---

### 3. Opción B: Usando la Línea de Comandos (`build.py`)

#### Para iPhone e iPad (iOS/iPadOS):
```bash
# Genera el paquete .app y el archivo distribuible .ipa
python3 build.py ios

# O compila solo el .app rápidamente omitiendo el archivo zip .ipa:
python3 build.py ios --skip-ipa
```

#### Para Apple TV (tvOS):
```bash
python3 build.py tvos
```

#### Para Mac (macOS Nativo):
```bash
python3 build.py macos
```

#### Compilar Todas las Plataformas a la Vez:
```bash
python3 build.py all
```

Los resultados se guardan en la carpeta `dist/`:
* `dist/Halo Combat Evolved - iOS.app` (e `.ipa`)
* `dist/Halo Combat Evolved - tvOS.app` (e `.ipa`)
* `~/Applications/Halo Combat Evolved.app` (macOS)

---

## 📲 Instalación de los Paquetes `.ipa` (Sideloadly, AltStore, Xcode)

Una vez completada la compilación, los paquetes listos se encuentran en la carpeta `dist/`:
* `dist/Halo Combat Evolved - iOS.ipa`
* `dist/Halo Combat Evolved - tvOS.ipa`
* `dist/Halo Combat Evolved - iOS.app`
* `dist/Halo Combat Evolved - tvOS.app`

### Métodos de Instalación:

#### 1. Sideloadly (macOS y Windows — Recomendado)
1. Descarga y abre [Sideloadly](https://sideloadly.io/).
2. Conecta tu iPhone, iPad o Apple TV por cable USB o Wi-Fi.
3. Arrastra el archivo `.ipa` desde `dist/` a la ventana de Sideloadly.
4. Ingresa tu Apple ID y presiona **Start** para firmar e instalar automáticamente.

#### 2. AltStore / SideStore
1. Envía el archivo `.ipa` a tu dispositivo (vía AirDrop, iCloud Drive o la app Archivos).
2. Abre **AltStore** o **SideStore** en tu iPhone/iPad.
3. En la pestaña **My Apps**, toca el botón `+` y selecciona `Halo Combat Evolved - iOS.ipa`.

#### 3. Xcode / Apple Configurator
1. En Xcode, ve al menú superior: `Window` -> `Devices and Simulators`.
2. Selecciona tu dispositivo conectado y arrastra el paquete `.app` o `.ipa` sobre la lista de **Installed Apps**.
3. Para Apple TV, puedes enlazarlo de forma inalámbrica en Xcode e instalar directamente.

#### 4. Instalación Directa por CLI o App Gráfica (Mac Local)
Si tienes tu dispositivo conectado al Mac con el **Modo Desarrollador activado** (`Ajustes -> Privacidad y seguridad -> Modo de desarrollador`):
```bash
# Instalación directa en iPhone o iPad:
python3 build.py --install-ios

# Instalación directa en Apple TV:
python3 build.py --install-tvos
```

---

## 🧹 Mantener el Repositorio Liviano para GitHub

Los archivos temporales y compilaciones intermedias (`.o`, `.a`, `.app`) pueden ocupar varios gigabytes. Antes de subir o compartir tus cambios en GitHub, ejecuta:
```bash
python3 build.py --clean
```
Esto eliminará de forma segura todas las carpetas temporales (`build-*/` y `dist/`), reduciendo el tamaño total del proyecto a tan solo **~120 MB**, cumpliendo cómodamente con los límites de GitHub.

---

## 📄 Licencia y Aviso Legal

Halo: Combat Evolved es marca registrada de © 343 Industries / Microsoft Corporation. Este proyecto es una adaptación nativa realizada mediante ingeniería inversa y recompilación estática con fines estrictamente educativos y de interoperabilidad. Se requiere una copia legítima del juego para utilizar los archivos de mapas originales.
