#include <stdio.h>
#include "raylib.h"
#include "main.h"
#include "movement.h"
#include "towerTextures.h"
#include "orcTextures.h"
#include <cmath>

// Single definition of the global tower rectangle

Color transparentColor = Fade(WHITE, 0);

int main() {
    InitWindow(GetScreenWidth(), GetScreenHeight(), "Raylib Test");
    ToggleBorderlessWindowed();
    SetTargetFPS(60);

    float dt = GetFrameTime();

    LoadTowerTextures();
    loadOrcTextures();

    while(!WindowShouldClose()) {

        BeginDrawing();
        ClearBackground(YELLOW);
        drawTowerTextures();
        initOrc();
        drawOrcTextures();
        EndDrawing();

        if(IsKeyPressed(KEY_ESCAPE)) {
            break;

        }
    }

    CloseWindow();
    return 0;
}

