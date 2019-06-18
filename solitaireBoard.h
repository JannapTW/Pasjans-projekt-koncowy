//
// Created by janna on 02.06.2019.
//

#ifndef PASJANS_PROJEKT_KONCOWY_SOLITAIREBOARD_H
#define PASJANS_PROJEKT_KONCOWY_SOLITAIREBOARD_H

#include "talia.h"

enum GameState {RUNNING, FINISHED};

class solitaireBoard : public talia
{

    //talia stworzona juz w klasie talia (jak sie do niej dostać)
    card** segregacja; // tablica tablicy kart do odkładania
    card** plansza; // tablica tablicy kart do operowania
    int aktualna_karta; //można dzielić przez 13 lub 4 by uzyskać element

public:
    solitaireBoard();
    void setup();
    void selectCard(card);
    void placeCard(int, int, int); //musi brać kartę, więc ma minimum jeden argument. Zwraca info o karcie więc ma być typu wskaźnik na kartę? aktualna karta?
                            // ALBO KORZYSTA Z AKTUALNEJ KARTY
    void takeCard(int, int, int);


    GameState get_gamestate(); //Gra się kończy gdy talia oraz plansza będą puste

    const int get_number(card); // 0-51
};

#endif //PASJANS_PROJEKT_KONCOWY_SOLITAIREBOARD_H
