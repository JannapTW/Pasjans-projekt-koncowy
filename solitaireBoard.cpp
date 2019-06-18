//
// Created by janna on 02.06.2019.
//

#include "solitaireBoard.h"
solitaireBoard::solitaireBoard()
{
    // Ustawia zakres liczb i symboli
    std::string liczba[] = {"As", "Dwojka", "Trojka", "Czworka", "Piatka", "Szostka", "Siodemka",
                             "Osemka", "Dziewiatka", "Dziesiatka", "Walet", "Dama", "Krol"}; // i 0-12
    std::string symbol[] = {"Serce", "Karo", "Trefl", "Pik"}; // j 0-3
    // Wskaznikiem na typ card tworzymy nową tablicę
    segregacja = new card * [4];

    //Ustawianie pól segregacji
    for (int i = 0 ; i<4 ; ++i)
    {
        segregacja[i] = new card[13];
    }

    //Ustawianie pól operacji
    setup();
}

//Ustawianie pól operacji
void solitaireBoard::setup()
{
    plansza = new card *[7];
    for(int i=0; i<7; i++)
    {
        plansza[i] = new card[13];
    }

    for (int i = 0 ; i<7 ; ++i)
    {
        for (int j = 0 ; j<i ; ++j)
        {
            plansza[i][j] = dealCard();
        }
    }
}


void solitaireBoard::placeCard(int pole, int i, int j)
{
    int x,y; //x liczba, y symbol
    x = aktualna_karta % 13;
    y = aktualna_karta / 13;

    switch(pole)
    {
    //Jeśli wybraliśmy plansze
    case 1:
        plansza[i][j] = putCard(aktualna_karta);
        break;
    //Jeśli wybraliśmy segregacje
    case 2:
        segregacja[i][j] = putCard(aktualna_karta);
        break;
    }
///Trzeba dorobić ograniczenia if'ami
}

void solitaireBoard::takeCard(int pole, int i, int j)
{
    int x,y; //x liczba, y symbol
    x = aktualna_karta % 13;
    y = aktualna_karta / 13;

    switch(pole)
    {
        //Jeśli wybraliśmy plansze
    case 1:
        plansza[i][j].takeCard();
        break;
        //Jeśli wybraliśmy segregacje
    case 2:
        segregacja[i][j].takeCard();
        break;
    }

}


void solitaireBoard::selectCard(card wsk) //wykorzystujemy aktualna_karta
{
    aktualna_karta = get_number(wsk);
}

const int solitaireBoard::get_number(card karta)
{
    int x, y;
    if(karta.get_liczba()=="As")
        x=0;
    if(karta.get_liczba()=="Dwojka")
        x=1;
    if(karta.get_liczba()=="Trojka")
        x=2;
    if(karta.get_liczba()=="Czworka")
        x=3;
    if(karta.get_liczba()=="Piatka")
        x=4;
    if(karta.get_liczba()=="Szostka")
        x=5;
    if(karta.get_liczba()=="Siodemka")
        x=6;
    if(karta.get_liczba()=="Osemka")
        x=7;
    if(karta.get_liczba()=="Dziewiatka")
        x=8;
    if(karta.get_liczba()=="Dziesiatka")
        x=9;
    if(karta.get_liczba()=="Walet")
        x=10;
    if(karta.get_liczba()=="Dama")
        x=11;
    if(karta.get_liczba()=="Krol")
        x=12;

    if(karta.get_symbol()=="Serce")
        y=0;
    if(karta.get_symbol()=="Karo")
        y=1;
    if(karta.get_symbol()=="Trefl")
        y=2;
    if(karta.get_symbol()=="Pik")
        y=3;

    return (13*y)+x;
}

GameState solitaireBoard::get_gamestate()
{
    int counter=0;
    for(int i = 0; i<7; i++)
       if (plansza[i][0].isEmpty())
           ++counter;
       if(counter == 7)
           return FINISHED;
    return RUNNING;
}



