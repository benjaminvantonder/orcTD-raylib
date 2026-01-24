// we need to render a rectangle above the orc to display its health
#include "raylib.h"
#include "stdio.h"
#include "orcTextures.h"
#include <cmath>

// Rectangle orcHealthBarRect = {orc.position.x, orc.position.y, truncf(orcTextureStill.width), truncf(orcTextureStill.height)};

Rectangle orcHealthBarRect = {0, 0, 200, 20};


void initOrcHealthBar() {
    orcHealthBarRect.x = orc.position.x;
    orcHealthBarRect.y = orc.position.y;
}

void drawOrcHealthBar() {

    DrawRectangleRec(orcHealthBarRect, RED);

}

void updateOrcHealthBar(int orcX, int orcY) {

    orcHealthBarRect.x = orcX;
    orcHealthBarRect.y = orcY;

}