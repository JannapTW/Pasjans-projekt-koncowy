//
// Created by janna on 01.06.2019.
//

#ifndef PASJANS_PROJEKT_KONCOWY_CARD_H
#define PASJANS_PROJEKT_KONCOWY_CARD_H
#include <string>

class card
{
    std::string symbol; // Serce,Karo,Trefl,Pik
    std::string liczba; // 1-13 [0-12]

public:
    card(std::string s, std::string l); //dodac zmienna odkryte
    const std::string get_symbol();
    const std::string get_liczba();

    const int get_number();
    std::string print() const;
    card();

    void takeCard();
    bool isEmpty();
    bool isOpposite(card);
    bool isSame(card);

};

#endif //PASJANS_PROJEKT_KONCOWY_CARD_H
