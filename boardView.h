//
// Created by janna on 26.05.2019.
//

#ifndef PASJANS_PROJEKT_KONCOWY_BOARDVIEW_H
#define PASJANS_PROJEKT_KONCOWY_BOARDVIEW_H

#include "SFML/Graphics.hpp"
#include "solitaireBoard.h"

class boardView
{
    solitaireBoard & board;
    //Deklaracja zmiennych

public:
    explicit boardView(solitaireBoard & b);
    void draw (sf::RenderWindow & win);

};

#endif //PASJANS_PROJEKT_KONCOWY_BOARDVIEW_H
