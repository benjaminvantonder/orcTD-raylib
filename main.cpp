#include <stdio.h>
#include "raylib.h"
#include "main.h"
#include "movement.h"
#include "towerTextures.h"
#include "orcTextures.h"
#include "movement.h"
#include "game.h"
#include <cmath>

// Single definition of the global tower rectangle

Color transparentColor = Fade(WHITE, 0);

int main() {
    InitWindow(GetScreenWidth(), GetScreenHeight(), "Raylib Test");
    ToggleBorderlessWindowed();
    SetTargetFPS(60);

    // float dt = GetFrameTime();

    Game::loadTextures();

    while(!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(YELLOW);

        Game::Draw();

        EndDrawing();

        Game::Update();

    }

    CloseWindow();
    return 0;
}

