#ifndef ORCTEXTURES_H
#define ORCTEXTURES_H

extern Texture orcStillTexture;
extern Texture orcActiveTexture;
typedef struct Orc {

    Vector2 position;
    Vector2 target;
    float speed;
    Texture stillTexture;
    Texture activeTexture;

} Orc;
extern Orc orc;

void loadOrcTextures();
void drawOrcTextures();
void initOrc();
void updateOrc();

#endif