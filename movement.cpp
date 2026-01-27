#include "main.h"
#include "game.h"
#include "movement.h"
#include "orcTextures.h"
#include "towerTextures.h"

// This file is for handling npc movement
// This tower defense won't have manual player input for movement

void moveOrc() {

    if(orc.position.x >= (towerRect.x) + towerRect.width) {

        orc.position.x = orc.position.x - 5;

    } else {

        // Orc has reached the tower
        beginMoving = false;

    }

}

