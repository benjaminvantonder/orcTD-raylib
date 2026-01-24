#include <stdio.h>
#include "raylib.h"
#include "main.h"
#include "game.h"
#include <cmath>
#include "orcTextures.h"

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

