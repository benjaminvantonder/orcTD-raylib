#include "main.h"
#include "menuTextures.h"

Texture2D menu2D;

void loadMainMenu()
{
    menu2D = LoadTexture("./assets/Orc logo.png");
}

void drawButton(Rectangle Button)
{
}

void drawMainMenu()
{
    // Menu PNG
    Rectangle source = (Rectangle){0, 0, PNG_WIDTH, PNG_HEIGHT};
    Rectangle dest = (Rectangle){SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2, source.width, source.height};
    DrawTexturePro(menu2D, source, dest, (Vector2){dest.width / 2, 500}, 0, WHITE);

    // Buttons
}