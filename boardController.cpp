//
// Created by janna on 26.05.2019.
//

#include "boardController.h"

boardController::boardController(solitaireBoard & b,boardView & v)
    :board(b),view(v)
{

}

void boardController::handleEvent (sf::Event &event)
{
    int x_orig = 290;
    int y_orig = 150;
    int size = 20;

    if (event.type == sf::Event::MouseButtonPressed)
    {
//        int mouse_x = (event.mouseButton.x-x_orig) / (size+(size / 10));
//        int mouse_y = (event.mouseButton.y-(y_orig+5)) / (size+(size / 10));
//
//        if (event.mouseButton.button == sf::Mouse::Left)
//            //board.revealField(mouse_x,mouse_y);
//
//        if (event.mouseButton.button == sf::Mouse::Right)
//            //board.toggleFlag(mouse_x,mouse_y);

    }

    if(event.type == sf::Event::KeyPressed)
    {
        if(event.key.code == sf::Keyboard::Space)
        {
            finished = true;
        }
    }
}