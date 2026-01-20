#include <stdio.h>
#include "raylib.h"
#include "main.h"
#include "movement.h"
#include "towerTextures.h"
#include "orcTextures.h"
#include "movement.h"
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
    initOrc();
    printf("Key s pressed!\n");

    while(!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(YELLOW);
        drawTowerTextures();

        drawOrcTextures();

        if(IsKeyDown(KEY_S)) {
            updateOrc();
            printf("Key s pressed!\n");
        }

        EndDrawing();

        if(IsKeyPressed(KEY_ESCAPE)) {
            break;

        }

    }

    CloseWindow();
    return 0;
}

