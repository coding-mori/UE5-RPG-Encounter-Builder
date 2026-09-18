# UE5 RPG Encounter Builder

This project is a specialised Unreal Engine 5 editor plugin designed to fix the pain points in the creation of enemy encounters in tactical RPGs. This tool streamlines the authoring, balancing, and validation during the creation of encounters.

---

## Planned Tool Features

- **Live Budget Tracking**\
  A "enemy credit budget" can be set and select enemy archetypes from a custom UI panel that calculates rough difficulty metrics in real-time.

- **Interactive Viewport Brushes**\
  Designers can paint spawn points directly into the 3D viewport. The tool automatically snaps spawns flush to the NavMesh, preventing invalid pathing.

- **Automated Validation**\
  A one-click audit scans the encounter for spatial clearance, line-of-sight - occlusion, and NavMesh connectivity, outputting any errors detected to the editor's message log.

- **Transaction Safety**\
  Full integration with Unreal's undo/redo buffer to enable non-destructive iteration.

## Rough Plan for Tool's Architecture

The plugin will be seperated into two modules, an Editor Module and a  Runtime Module.

### Editor Module
The Editor module will be a dockable panel containing all the custom tooling, UI, and viewport interactions that the level designers use to build the data.

### Runtime Module
The Runtime module will be an in-game overlay for QA containing the pure data structures and execution logic of the encounters while the game is running.