#include <stdio.h>
#include <math.h>
#include "raylib.h"
#include "main.h"
#include "orcTextures.h"
#include "movement.h"

Image orcTextureImageStill;
Image orcTextureImageActive;
Texture orcTextureStill;
Texture orcTextureActive;

Orc orc;

void initOrc() {

    orc.position = {
        truncf(GetScreenWidth() - orcTextureImageStill.width - 20), //make a small gap between the right side and the orc texture
        truncf((GetScreenHeight() / 2) - (orcTextureImageStill.height / 2))  //center the orc vertically
    };
    orc.size = {200, 20};

}

void loadOrcTextures() {
    orcTextureImageStill = LoadImage("assets/Orcs/orc-still.png");
    orcTextureImageActive = LoadImage("assets/Orcs/orc-active.png");

    orcTextureStill = LoadTextureFromImage(orcTextureImageStill);
    orcTextureActive = LoadTextureFromImage(orcTextureImageActive);

    UnloadImage(orcTextureImageStill);
    UnloadImage(orcTextureImageActive);
}

bool isOrcStill = true;

void drawOrcTextures() {

    DrawTexture(orcTextureStill, orc.position.x, orc.position.y, WHITE);

}

void updateOrc() {

    moveOrc();

    drawOrcTextures();

}

