//
// Created by janna on 26.05.2019.
//

#ifndef PASJANS_PROJEKT_KONCOWY_TALIA_H
#define PASJANS_PROJEKT_KONCOWY_TALIA_H

#include <time.h>
#include <ctime>
#include "card.h"
#include <vector>


class talia : public card
{
    std::vector <card> deck; // Wektor przechowujący zmienny typu card
    std::vector <card> stack;
    int current_card; // aktualna karta na dla której wykonujemy operacje
public:
    talia();
    void printDeck();
    void shuffle();
    void dealCard();
    void moveCard(std::vector<card>);

};

#endif //PASJANS_PROJEKT_KONCOWY_TALIA_H
