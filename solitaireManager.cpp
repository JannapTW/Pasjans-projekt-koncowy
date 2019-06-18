//
// Created by janna on 26.05.2019.
//

#include "solitaireManager.h"
solitaireManager::solitaireManager(boardController & bc, introController & ic)
        :board_controller(bc),intro_controller(ic)
{
    game_state = INTRO;
}

void solitaireManager::draw(sf::RenderWindow & win)
{
    switch(game_state)
    {
    case INTRO:intro_controller.draw(win);
        break;
    case GAME:board_controller.draw(win);
        break;
    }
    updateState();

}

void solitaireManager::handleEvent(sf::Event & event)
{
    switch(game_state)
    {
    case INTRO:intro_controller.handleEvent(event);
        break;
    case GAME:board_controller.handleEvent(event);
        break;
    }
    updateState();
}

void solitaireManager::updateState()
{
    switch(game_state)
    {
    case INTRO:
        if(intro_controller.isFinished())
            game_state = GAME;
        break;
    case GAME:
        if(board_controller.isFinished())
            exit(0);
        break;
    }

}
