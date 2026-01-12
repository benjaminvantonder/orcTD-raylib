#include <stdio.h>
#include "raylib.h"
#include "main.h"
#include "orcTextures.h"

#define MAX_ORCS 1

typedef struct Orc {

    Vector2 position;
    Vector2 velocity;
    Texture stillTexture;
    Texture activeTexture;
    bool active;

} Orc;

// Image orcStillImage =

Texture orcTexture = LoadTexture("assets/Orcs/orc-still.png");

Orc orcs[MAX_ORCS];


void initOrcs() {

    for(int i = 0; i < MAX_ORCS; i++) {

        orcs[i].active = false;

    }

}

void SpawnOrc(Vector2 startPos) {
    for(int i = 0; i < MAX_ORCS; i++) {
        if(!orcs[i].active) {
            orcs[i].active = true;
            orcs[i].position = startPos;
            orcs[i].velocity = {
                100, 0
            };
            orcs[i].stillTexture = orcTexture;
            break;
        }
    }
}

void UpdateOrcs(float dt) { //deltaTime
    for(int i = 0; i < MAX_ORCS; i++) {
        if(!orcs[i].active) continue;

        orcs[i].position.x += orcs[i].velocity.x * dt;

        if(orcs[i].position.x > GetScreenWidth()) {
            orcs[i].active = false;
        }
    }
}

void DrawOrcs() {

    for(int i = 0; i < MAX_ORCS; i++) {
        if(!orcs[i].active) continue;

        DrawTexture(orcs[i].stillTexture,
                    (int)orcs[i].position.x,
                    (int)orcs[i].position.y,
                    WHITE);
    }
}





