//
// Created by janna on 26.05.2019.
//

#ifndef PASJANS_PROJEKT_KONCOWY_TALIA_H
#define PASJANS_PROJEKT_KONCOWY_TALIA_H

#include <time.h>
#include <ctime>
#include "card.h"

class talia : public card
{
    card* deck; // Wskaźnik na kartę o typie deck
    int current_card; // aktualna karta na dla której wykonujemy operacje
public:
    talia();
    void printDeck();
    void shuffle();
    card dealCard();
    card putCard(int);

    bool is_empty(card);


};

#endif //PASJANS_PROJEKT_KONCOWY_TALIA_H
