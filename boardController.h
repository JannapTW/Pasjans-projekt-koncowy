//
// Created by janna on 26.05.2019.
//

#ifndef PASJANS_PROJEKT_KONCOWY_BOARDCONTROLLER_H
#define PASJANS_PROJEKT_KONCOWY_BOARDCONTROLLER_H

#include <SFML/Window/Event.hpp>
#include "boardView.h"
#include "solitaireBoard.h"
class boardController
{
    bool finished = false;
    solitaireBoard & board;
    boardView & view;

public:
    boardController(solitaireBoard & b, boardView & v);
    void handleEvent(sf::Event & event); //obsługa zdarzen

    bool isFinished() const { return finished; }
    void draw(sf::RenderWindow & win) { view.draw(win); }

};

#endif //PASJANS_PROJEKT_KONCOWY_BOARDCONTROLLER_H
