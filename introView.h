//
// Created by janna on 26.05.2019.
//

#ifndef PASJANS_PROJEKT_KONCOWY_INTROVIEW_H
#define PASJANS_PROJEKT_KONCOWY_INTROVIEW_H

#include <SFML/Graphics.hpp>
#include "solitaireBoard.h"
class introView
{
    //solitaireBoard & board;
    sf::Font font;
    sf::Text txt1, txt2;
    sf::RectangleShape background;
    //Deklaracja zmiennych

public:
    explicit introView();
    void draw (sf::RenderWindow & win);

};

#endif //PASJANS_PROJEKT_KONCOWY_INTROVIEW_H
