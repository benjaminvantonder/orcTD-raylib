#include <stdio.h>
#include "raylib.h"
#include "menu.h"
#include "menuTextures.h"

class Menu;

void ButtonClicked() {



}

void Menu::Draw() {

    drawMainMenu();

    drawStartButton();

}

void Menu::Load() {

    loadMainMenu();

}