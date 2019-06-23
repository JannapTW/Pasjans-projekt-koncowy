//
// Created by janna on 02.06.2019.
//

#include "solitaireBoard.h"
solitaireBoard::solitaireBoard(talia t, segregacja s, plansza p)
    :tal(t),seg(s),pla(p)
{}


//void solitaireBoard::selectCard(card wsk) { aktualna_karta = get_number(wsk); }

//const int solitaireBoard::get_number()
//{
//    int x;
//    if(this->get_liczba()=="As")
//        x=0;
//    if(this->get_liczba()=="Dwojka")
//        x=1;
//    if(this->get_liczba()=="Trojka")
//        x=2;
//    if(this->get_liczba()=="Czworka")
//        x=3;
//    if(this->get_liczba()=="Piatka")
//        x=4;
//    if(this->get_liczba()=="Szostka")
//        x=5;
//    if(this->get_liczba()=="Siodemka")
//        x=6;
//    if(this->get_liczba()=="Osemka")
//        x=7;
//    if(this->get_liczba()=="Dziewiatka")
//        x=8;
//    if(this->get_liczba()=="Dziesiatka")
//        x=9;
//    if(this->get_liczba()=="Walet")
//        x=10;
//    if(this->get_liczba()=="Dama")
//        x=11;
//    if(this->get_liczba()=="Krol")
//        x=12;
//
//    return x;
//}

GameState solitaireBoard::get_gamestate()
{
    if(seg.isComlete())
        return FINISHED;
    return RUNNING;
}



