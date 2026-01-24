#include <stdio.h>
#include "raylib.h"
#include "main.h"
#include "game.h"
#include "menu.h"
#include <cmath>

// Single definition of the global tower rectangle

bool isMenu = true;
Color transparentColor = Fade(WHITE, 0);

int main() {
    InitWindow(GetScreenWidth(), GetScreenHeight(), "Raylib Test");
    ToggleBorderlessWindowed();
    SetTargetFPS(60);

    // float dt = GetFrameTime();

    if(!isMenu) {

        Game::loadTextures();

    } else {

        Menu::Load();

    }

    while(!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(YELLOW);

        if(IsKeyPressed(KEY_S)) {
            isMenu = false;
            Game::loadTextures();
        }

        if(!isMenu) {

            Game::Draw();

            EndDrawing();

            Game::Update();

        } else {

            Menu::Draw();
            EndDrawing();
            // isMenu = false;

        }

    }

    CloseWindow();
    return 0;
}

