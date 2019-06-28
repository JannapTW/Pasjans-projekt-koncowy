//
// Created by janna on 02.06.2019.
//

#ifndef PASJANS_PROJEKT_KONCOWY_SOLITAIREBOARD_H
#define PASJANS_PROJEKT_KONCOWY_SOLITAIREBOARD_H

#include "talia.h"
#include "plansza.h"
#include "segregacja.h"

enum GameState { RUNNING, FINISHED };

//enum cardFace
//{
//  as_serce = 0,
//  dwojka_serce,
//  trojka_serce,
//  czworka_serce,
//  piatka_serce,
//  szostka_serce,
//  siodemka_serce,
//  osemka_serce,
//  dziewiatka_serce,
//  dziesiatka_serce,
//  walet_serce,
//  dama_serce,
//  krol_serce,
//  as_karo,
//  dwojka_karo,
//  trojka_karo,
//  czworka_karo,
//  piatka_karo,
//  szostka_karo,
//  siodemka_karo,
//  osemka_karo,
//  dziewiatka_karo,
//  dziesiatka_karo,
//  walet_karo,
//  dama_karo,
//  krol_karo,
//  as_trefl,
//  dwojka_trefl,
//  trojka_trefl,
//  czworka_trefl,
//  piatka_trefl,
//  szostka_trefl,
//  siodemka_trefl,
//  osemka_trefl,
//  dziewiatka_trefl,
//  dziesiatka_trefl,
//  walet_trefl,
//  dama_trefl,
//  krol_trefl,
//  as_pik,
//  dwojka_pik,
//  trojka_pik,
//  czworka_pik,
//  piatka_pik,
//  szostka_pik,
//  siodemka_pik,
//  osemka_pik,
//  dziewiatka_pik,
//  dziesiatka_pik,
//  walet_pik,
//  dama_pik,
//  krol_pik
//};

class solitaireBoard
{
    talia & tal; //talia stworzona juz w klasie talia
    segregacja & seg; // tablica tablicy kart do odkładania
    plansza & pla; // tablica tablicy kart do operowania

public:
    solitaireBoard(talia, plansza, segregacja);
    void setup();
    ///Zróbmy to w kontrolerze
    //mogę odznaczyć klikając ponownie
    //klikniecie w inne pole powinno :
    //a) Przerzucić kartę tzn wykorzystać funkcję w zależności od elemetu
    //b) Odznaczyć w przypadku błędnego zaznaczenia
    //void placeCard(int, int, int); //funkcja łącząca zbieranie kart z talii, segregacji oraz planszy NIEPOTRZEBNA

    //funkcja zamieniający pozycje miejscami? odpowiednie połączynie utworzonych funckji foo(baza, cel);
    // możliwe operacje: 1. talia -> plansza  2. talia -> segregacja 3. plansza->plansza 4. plansza->segregacja
    // 5. segregacja->plansza
    void move(talia &, plansza &, const int &);
    void move(talia &, segregacja &, const int &);
    void move(plansza &, plansza &, const int &, const int &, const int &);
    void move(plansza &, segregacja &,const int &,const int &);
    void move(segregacja &, plansza &,const int &,const int &);

    //cardFace getCardEnum(std::vector<card>, int);

    int getPosition(int);

    bool isRevealed(std::vector<card> baza, int n);

    int lengthOf(std::vector<card>);

    const int getStackSize(const talia &);

    GameState get_gamestate(); //Gra się kończy gdy talia oraz plansza będą puste

//    const int card_to_number(); // 0-51
};

#endif //PASJANS_PROJEKT_KONCOWY_SOLITAIREBOARD_H
