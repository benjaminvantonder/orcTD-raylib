#include <stdio.h>
#include "raylib.h"
#include "main.h"
#include "orcTextures.h"

Texture orcStillTexture;
Texture orcActiveTexture;

Rectangle orcRect = {0, 300, 200, 200};

void LoadOrcTextures() {
    Image orcStillImage = LoadImage("./assets/Orcs/orc-still.png");
    Image orcActiveImage = LoadImage("./assets/Orcs/orc-active.png");

    orcStillTexture = LoadTextureFromImage(orcStillImage);
    orcActiveTexture = LoadTextureFromImage(orcActiveImage);

    UnloadImage(orcStillImage);
    UnloadImage(orcActiveImage);

}

void DrawOrcTextures() {

    orcRect.x = GetScreenWidth() - 200;

    DrawTexture(orcStillTexture, 0, 0, WHITE);
    DrawTexture(orcActiveTexture, 0, 0, WHITE);

    DrawRectangleRec(orcRect, WHITE);

}

