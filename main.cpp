#include <stdio.h>
#include <cmath>

#include "raylib.h"

#include "main.h"
#include "movement.h"

#include "towerTextures.h"
#include "orcTextures.h"
#include "menuTextures.h"

// Single definition of the global tower rectangle

Color transparentColor = Fade(WHITE, 0);

int main()
{
    // Why make it borderless?
    InitWindow(GetScreenWidth(), GetScreenHeight(), "Raylib Test");

    // Toggle borderless windowed causes flashing when window button is pressed.
    // ToggleBorderlessWindowed();

    SetTargetFPS(60);

    float dt = GetFrameTime();

    loadMainMenu();
    // loadTowerTextures();
    // loadOrcTextures();

    while (!WindowShouldClose())
    {

        BeginDrawing();
        ClearBackground(YELLOW);

        // Will add buttons to main game and settings
        drawMainMenu();
        
        // drawTowerTextures();
        // initOrc();
        // drawOrcTextures();
        EndDrawing();

        if (IsKeyPressed(KEY_ESCAPE))
        {
            break;
        }
    }

    CloseWindow();
    return 0;
}
