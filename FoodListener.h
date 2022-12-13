//
// Created by aperi on 09/12/2022.
//

#ifndef TP_NFA037_FOODLISTENER_H
#define TP_NFA037_FOODLISTENER_H


#include <SDL_rect.h>

class FoodListener {
public:
    virtual void foodEaten(SDL_Rect *foodPosition) = 0;

};


#endif //TP_NFA037_FOODLISTENER_H
