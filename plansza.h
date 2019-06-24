//
// Created by janna on 19.06.2019.
//

#ifndef PASJANS_PROJEKT_KONCOWY_PLANSZA_H
#define PASJANS_PROJEKT_KONCOWY_PLANSZA_H

#include "card.h"
#include "talia.h"
#include <vector>

class plansza : public talia
{
    std::vector<card> pole_1;
    std::vector<card> pole_2;
    std::vector<card> pole_3;
    std::vector<card> pole_4;
    std::vector<card> pole_5;
    std::vector<card> pole_6;
    std::vector<card> pole_7;
public:
    plansza();
    void put_card(std::vector<card>, std::vector<card>);
    /// 1. kładiesz jedna karte  2. kładziesz 2 lub wiecej kart (int do rozpoznawania) push_back w pętli
    void move_cards(std::vector<card>, std::vector<card>, int);
    void take_cards(std::vector<card>, int);
    /// 1. zabierasz 1 karte  2. zabierasz 2 lub wiecej kart (int do rozpoznawania) pop_back w pętli
    bool isOneLower(std::vector<card>, int); // Do planszy
    bool isOneHigher(std::vector<card>, std::vector<card>); // Do segregacji
    void setup();
};

#endif //PASJANS_PROJEKT_KONCOWY_PLANSZA_H
