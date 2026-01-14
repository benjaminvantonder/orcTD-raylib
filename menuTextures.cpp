#include "main.h"

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
    // MenuPNG
    Rectangle source = (Rectangle){0, 0, 900, 500};
    Rectangle dest = (Rectangle){GetScreenWidth() / 2, GetScreenHeight() / 2, source.width, source.height};
    DrawTexturePro(menu2D, source, dest, (Vector2){dest.width / 2, 500}, 0, WHITE);

    // Buttons
}