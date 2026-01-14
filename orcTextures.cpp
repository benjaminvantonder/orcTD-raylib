#include <stdio.h>
#include <math.h>
#include "raylib.h"
#include "main.h"
#include "orcTextures.h"

#define MAX_ORCS 1

typedef struct Orc {

    Vector2 position;
    Vector2 target;
    float speed;
    Texture stillTexture;
    Texture activeTexture;

} Orc;

Orc orc;

Image orcTextureImage;
Texture orcTexture;

void initOrc() {

    orc.position = {
        truncf(GetScreenWidth() - orcTextureImage.width - 20), //make a small gap between the right side and the orc texture
        truncf((GetScreenHeight() / 2) - orcTexture.width)
    };


}

void loadOrcTextures() {
    orcTextureImage = LoadImage("assets/Orcs/orc-still.png");
    UnloadImage(orcTextureImage);

    orcTexture = LoadTextureFromImage(orcTextureImage);
}

void drawOrcTextures() {

    DrawTexture(orcTexture, orc.position.x, orc.position.y, WHITE);
}

void updateOrc() {


}

