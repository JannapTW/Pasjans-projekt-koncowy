//
// Created by janna on 26.05.2019.
//

#ifndef PASJANS_PROJEKT_KONCOWY_SOLITAIREMANAGER_H
#define PASJANS_PROJEKT_KONCOWY_SOLITAIREMANAGER_H

#include "boardView.h"
#include "boardController.h"
#include "introController.h"
class solitaireManager
{
    boardController & board_controller;
    introController & intro_controller;


    enum GameState
    {
      INTRO, GAME
    } game_state;

    void updateState();

public:
    solitaireManager(boardController & bc, introController & ic);

    void draw(sf::RenderWindow & win);

    void handleEvent(sf::Event & event);

};

#endif //PASJANS_PROJEKT_KONCOWY_SOLITAIREMANAGER_H
