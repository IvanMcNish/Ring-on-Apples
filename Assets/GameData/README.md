# GameData Directory

Place your original Halo: Combat Evolved `maps/` directory here:

```
Assets/GameData/
└── maps/
    ├── bitmaps.map
    ├── sounds.map
    ├── ui.map
    ├── a10.map
    ├── ... (other campaign and multiplayer maps)
```

If you already have the macOS version of Halo Combat Evolved installed on your Mac, you can simply create a symlink:

```bash
ln -s ~/Applications/"Halo Combat Evolved.app"/Contents/Resources/GameData Assets/GameData
```

Or set the environment variable:
```bash
export HALO_GAMEDATA="/path/to/your/GameData"
```
