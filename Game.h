//
// Created by aperi on 08/12/2022.
//

#ifndef TP_NFA037_GAME_H
#define TP_NFA037_GAME_H



#include "Labyrinthe.h"
#include "FoodListener.h"


class Game : public FoodListener{
public:
    explicit Game(const std::string &labyrinthFilePath);

    void foodEaten(int positionX, int positionY, int foodCount);


    void start();

private:
    bool arrowPressed();
    SDL_Window *window;
    std::unique_ptr<std::vector<SDL_Rect*>> emptyRects;
    std::unique_ptr<Hero> hero;

    std::shared_ptr<Labyrinthe> labyrinthe;


};


#endif //TP_NFA037_GAME_H
