#include <cstdio>

#include "main.h"
#include "menuTextures.h"
#include "raylib.h"
#include <cmath>

#define PNG_WIDTH 900
#define PNG_HEIGHT 500

Image menu2dImage;
Texture2D menu2D;

void loadMainMenu() {
    menu2dImage = LoadImage("./assets/Orc logo.png");

    menu2D = LoadTextureFromImage(menu2dImage);

    UnloadImage(menu2dImage);
}

// void drawButton(Rectangle Button, char Text[]) {
//     DrawRectangleRec(Button, LIME);
//     DrawRectangleLinesEx(Button, 2, LIME);
//     DrawText(Text, Button.x + 10, Button.y + 10, 20, BLACK);
// }

void drawMainMenu() {

    DrawTexture(menu2D, 0, 0, WHITE);

}