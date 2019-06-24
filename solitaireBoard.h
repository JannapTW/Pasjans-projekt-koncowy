//
// Created by janna on 02.06.2019.
//

#ifndef PASJANS_PROJEKT_KONCOWY_SOLITAIREBOARD_H
#define PASJANS_PROJEKT_KONCOWY_SOLITAIREBOARD_H

#include "talia.h"
#include "plansza.h"
#include "segregacja.h"

enum GameState { RUNNING, FINISHED };

class solitaireBoard
{
    talia tal; //talia stworzona juz w klasie talia
    segregacja seg; // tablica tablicy kart do odkładania
    plansza pla; // tablica tablicy kart do operowania
    //int aktualna_karta; //można dzielić przez 13 lub 4 by uzyskać element


public:
    solitaireBoard(talia, segregacja, plansza);
    void setup();
    ///Zróbmy to w kontrolerze
    //void selectCard(int, int); //Gdy zaznaczę coś myszką to powinienem przechować nazwę vectora i numer w tablicy
    //mogę odznaczyć klikając ponownie
    //klikniecie w inne pole powinno :
    //a) Przerzucić kartę tzn wykorzystać funkcję w zależności od elemetu
    //b) Odznaczyć w przypadku błędnego zaznaczenia
    //void placeCard(int, int, int); //funkcja łącząca zbieranie kart z talii, segregacji oraz planszy NIEPOTRZEBNA

    GameState get_gamestate(); //Gra się kończy gdy talia oraz plansza będą puste

//    const int get_number(); // 0-51
};

#endif //PASJANS_PROJEKT_KONCOWY_SOLITAIREBOARD_H
