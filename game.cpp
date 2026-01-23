#include <stdio.h>
#include "raylib.h"
#include "main.h"
#include "game.h"
#include "orcTextures.h"
#include "towerTextures.h"

bool beginMoving = false;

class Game;

void Game::Update(void) {
    if(IsKeyPressed(KEY_SPACE)) {
        beginMoving = true;
    }

    if(beginMoving) {
        updateOrc();
    }

    if(IsKeyPressed(KEY_ESCAPE)) {
        CloseWindow();
    }
}

void Game::Draw(void) {
    drawTowerTextures();
    drawOrcTextures();
}

void Game::loadTextures() {
    
    LoadTowerTextures();
    loadOrcTextures();
    initOrc();

}