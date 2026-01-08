#include <stdio.h>
#include "raylib.h"
#include "main.h"
#include "movement.h"
#include "towerTextures.h"
#include "orcTextures.h"

// Single definition of the global tower rectangle

Color transparentColor = Fade(WHITE, 0);



void unloadAllTextures() {

    for (int i = 0; i < 3; i++) {




    }

}

int main() {
    InitWindow(GetScreenWidth(), GetScreenHeight(), "Raylib Test");
    ToggleBorderlessWindowed();
    SetTargetFPS(60);

    LoadTowerTextures();
    LoadOrcTextures();

    while(!WindowShouldClose()) {

        //we're gonna set the texture of the tower {texture} to the same vector as its rectangle

        // MaximizeWindow();

        BeginDrawing();

        ClearBackground(YELLOW);

        drawTowerTextures();

        DrawOrcTextures();

        EndDrawing();

        if(IsKeyPressed) {

            if(IsKeyDown(KEY_ESCAPE)) {
                CloseWindow();
            }

        }

    }

    CloseWindow();
    return 0;
}

