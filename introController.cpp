//
// Created by janna on 26.05.2019.
//

#include "introController.h"
introController::introController(solitaireBoard & b,introView & iv)
    :board(b),intro_view(iv)
{}

void introController::handleEvent(sf::Event & event)
{
    if(event.type == sf::Event::KeyPressed)
    {
        if(event.key.code == sf::Keyboard::Space)
        {
            finished = true;
        }
    }
}
