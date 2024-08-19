
#include "GameModifier.h"
#include "ModManager.h"

int main() {
    GameModifier engine;
    ModManager modManager(&engine);

    // Load mods from the "gamedir/mods" directory
    modManager.LoadMods("mods");

    // Main loop
    while (true) {
        modManager.UpdateMods(1.0f / 60.0f); // Simulate 60 FPS
    }

    // Shutdown
    modManager.ShutdownMods();

    return 0;
}
