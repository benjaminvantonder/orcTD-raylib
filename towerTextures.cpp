#include <stdio.h>
#include "main.h"
#include "raylib.h"
#include "towerTextures.h"

Rectangle towerRect = { 150.0f, 300.0f, 309, 400 };

Texture2D backgroundTexture;
Texture2D castleActiveT;

void loadTowerTextures() {

    Image battleGround = LoadImage("./assets/battleground.png");
    backgroundTexture = LoadTextureFromImage(battleGround);

    UnloadImage(battleGround);

    Image castleActive = LoadImage("./assets/Castle active.png");
    castleActiveT = LoadTextureFromImage(castleActive);

    UnloadImage(castleActive);

}

void drawTowerTextures() {

    DrawTexture(backgroundTexture, 0, 0, WHITE);

    DrawRectangleRec(towerRect, transparentColor);

    DrawTexture(castleActiveT, towerRect.x, towerRect.y, WHITE);

}




