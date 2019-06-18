//
// Created by janna on 26.05.2019.
//

#ifndef PASJANS_PROJEKT_KONCOWY_INTROCONTROLLER_H
#define PASJANS_PROJEKT_KONCOWY_INTROCONTROLLER_H

#include <SFML/Window/Event.hpp>
#include "solitaireBoard.h"
#include "introView.h"
class introController
{
    bool finished = false;

    solitaireBoard & board;
    introView & intro_view;


public:
    introController(solitaireBoard & b, introView & iv);

    void handleEvent(sf::Event & event);

    void draw (sf::RenderWindow &win) { intro_view.draw(win); }
    bool isFinished () const { return finished; }
};

#endif //PASJANS_PROJEKT_KONCOWY_INTROCONTROLLER_H
