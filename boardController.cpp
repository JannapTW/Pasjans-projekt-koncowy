//
// Created by janna on 26.05.2019.
//

#include "boardController.h"

boardController::boardController(solitaireBoard & b,boardView & v, talia & t, plansza & p, segregacja & s)
    :board(b),view(v),tal(t),pla(p),seg(s)
{}

void boardController::handleEvent (sf::Event &event)
{
    int x_orig = 200;
    int y_orig = 100;

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