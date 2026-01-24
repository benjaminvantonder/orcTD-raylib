#include <stdio.h>
#include "raylib.h"
#include "main.h"
#include "game.h"
#include "orcTextures.h"
#include "towerTextures.h"
#include "orcHealthBar.h"

bool beginMoving = false;

class Game;

void Game::Update(void) {
    if(IsKeyPressed(KEY_SPACE)) {
        beginMoving = true;
    }

    if(beginMoving) {
        updateOrc();
        updateOrcHealthBar(orc.position.x, orc.position.y);
    }

    if(IsKeyPressed(KEY_ESCAPE)) {
        CloseWindow();
    }
}

void Game::Draw(void) {
    drawTowerTextures();
    drawOrcTextures();
    drawOrcHealthBar();
}

void Game::loadTextures() {

    LoadTowerTextures();
    loadOrcTextures();
    initOrc();
    initOrcHealthBar();
    updateOrcHealthBar(orc.position.x, orc.position.y);

}