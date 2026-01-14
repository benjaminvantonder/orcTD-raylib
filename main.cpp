#include <stdio.h>
#include "raylib.h"
#include "main.h"
#include "movement.h"
#include "towerTextures.h"
#include "orcTextures.h"
#include "menuTextures.h"
#include <cmath>

// Single definition of the global tower rectangle

Color transparentColor = Fade(WHITE, 0);

int main()
{
    // No need to make it borderless
    InitWindow(GetScreenWidth(), GetScreenHeight(), "Raylib Test");

    // InitWindow(400, 500, "Raylib Test");

    // Toggle borderless windowed causes flashing when window button is pressed.
    // ToggleBorderlessWindowed();

    SetTargetFPS(60);

    float dt = GetFrameTime();

    loadMainMenu();
    // LoadTowerTextures();
    // loadOrcTextures();

    while (!WindowShouldClose())
    {

        BeginDrawing();
        ClearBackground(YELLOW);

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
