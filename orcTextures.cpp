#include <stdio.h>
#include <math.h>
#include "raylib.h"
#include "main.h"
#include "orcTextures.h"
#include "movement.h"

Image orcTextureImage;
Texture orcTexture;

Orc orc;

void initOrc() {

    orc.position = {
        truncf(GetScreenWidth() - orcTextureImage.width - 20), //make a small gap between the right side and the orc texture
        truncf((GetScreenHeight() / 2) - orcTexture.height)
    };

}

void loadOrcTextures() {
    orcTextureImage = LoadImage("assets/Orcs/orc-still.png");

    orcTexture = LoadTextureFromImage(orcTextureImage);

    UnloadImage(orcTextureImage);
}

void drawOrcTextures() {

    DrawTexture(orcTexture, orc.position.x, orc.position.y, WHITE);

}

void updateOrc() {

    moveOrc();

    drawOrcTextures();

}

