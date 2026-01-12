#ifndef ORCTEXTURES_H
#define ORCTEXTURES_H

extern Texture orcStillTexture;
extern Texture orcActiveTexture;

void SpawnOrc(Vector2 startPos);
void initOrcs();
void UpdateOrcs(float dt);
void DrawOrcs();

#endif