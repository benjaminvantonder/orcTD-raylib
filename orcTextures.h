#ifndef ORCTEXTURES_H
#define ORCTEXTURES_H

#include "raylib.h"

typedef struct Orc {

    Vector2 position;
    Vector2 target;
    float speed;
    Vector2 size;
    Texture stillTexture;
    Texture activeTexture;

} Orc;

extern Orc orc;
extern Texture orcTextureStill;

void loadOrcTextures();
void drawOrcTextures();
void initOrc();
void updateOrc();

#endif