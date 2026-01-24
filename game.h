#ifndef GAME_H
#define GAME_H

class Game {
public:

    static void Update(void);
    static void Draw(void);
    static void loadTextures();

};

extern bool beginMoving;

#endif // GAME_H
