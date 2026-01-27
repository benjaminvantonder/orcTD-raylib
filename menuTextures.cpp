#include <cstdio>

#include "main.h"
#include "menuTextures.h"

#include "raylib.h"
#include <cmath>

#define BUTTON_WIDTH 300
#define BUTTON_HEIGHT 100

Image menu2dImage;
Texture2D menu2D;

Rectangle StartButton = {truncf((1920 / 2) - (BUTTON_WIDTH / 2)), truncf((1080 / 2) + (BUTTON_HEIGHT * 1.5)), BUTTON_WIDTH, BUTTON_HEIGHT};

void drawStartButton() {

    DrawRectangleRec(StartButton, WHITE);

}


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