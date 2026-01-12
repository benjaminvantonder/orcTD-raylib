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

    LoadTowerTextures();
    initOrcs();

    bool orcSpawned = false;

    while(!WindowShouldClose()) {
        float dt = GetFrameTime();

        if(!orcSpawned) {
            SpawnOrc({
                (float)GetScreenWidth() - 300,
                (float)GetScreenHeight() / 2
            });
            orcSpawned = true;
        }

        UpdateOrcs(dt);

        BeginDrawing();
        ClearBackground(YELLOW);
        drawTowerTextures();
        DrawOrcs();
        EndDrawing();

        if(IsKeyPressed(KEY_ESCAPE)) {
            break;

        }
    }

    CloseWindow();
    return 0;
}

