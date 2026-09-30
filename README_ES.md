# Halo: Combat Evolved — Ports Nativos para Plataformas Apple (macOS, iOS, iPadOS, tvOS)

[![Plataformas](https://img.shields.io/badge/Plataformas-macOS%20%7C%20iOS%20%7C%20iPadOS%20%7C%20tvOS-blue.svg)](#características-principales)
[![Arquitectura](https://img.shields.io/badge/Arquitectura-ARM64%20(Apple%20Silicon)-brightgreen.svg)](#características-principales)
[![Lenguaje](https://img.shields.io/badge/Lenguajes-C%20%2F%20Objective--C%20%2F%20Metal-orange.svg)](#descripción-del-proyecto)

Port nativo y de alto rendimiento de **Halo: Combat Evolved** diseñado específicamente para Apple Silicon mediante recompilación estática AOT, renderizado con Metal y OpenGL ES, compatibilidad con el Modo Juego de Apple, controles táctiles Neón Sci-Fi y multijugador multiplataforma.

> [!NOTE]
> Para la versión en inglés de esta guía, consulta: [README.md](README.md).

---

## 🌟 Características Principales

* **Optimización Total para Apple Silicon**: Diseñado para exprimir al máximo los chips M1–M4 (Macs), A14–A18 (iPhones e iPads) y A15/M2 (Apple TV 4K), corriendo a más de 60 FPS estables con resolución completa.
* **Compatibilidad con Modo Juego de Apple (Game Mode)**: Configurado con directivas oficiales `LSSupportsGameMode` y GameKit para iOS 18 / iPadOS 18 / macOS Sonoma, maximizando el rendimiento del chip y reduciendo la latencia Bluetooth para AirPods y mandos.
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

### 2. Compilar para la Plataforma Deseada

Utiliza el script unificado `build.py`:

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

## 📲 Instalación Directa y Renovación de 7 Días (Apple ID Gratuito)

Si tienes tu dispositivo conectado por cable o Wi-Fi con el **Modo Desarrollador activado** (`Ajustes -> Privacidad y seguridad -> Modo de desarrollador`):

### Instalación Directa en un Solo Comando:
```bash
# Instalar en tu iPhone o iPad conectado:
python3 build.py --install-ios

# Instalar en tu Apple TV conectado:
python3 build.py --install-tvos
```

### Renovación de Firma Cada 7 Días (Cuentas Gratuitas de Apple):
Con cuentas gratuitas de Apple Developer, los certificados caducan a los 7 días. Puedes renovar y reinstalar todas las apps en tus dispositivos automáticamente con un solo comando:
```bash
python3 build.py --renew-7days
```

### Instalación mediante Sideloaders de Terceros:
También puedes tomar el archivo `.ipa` generado en `dist/` e instalarlo usando:
* **Sideloadly** (macOS / Windows)
* **AltStore**
* **TrollStore** (en versiones compatibles de iOS)

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
