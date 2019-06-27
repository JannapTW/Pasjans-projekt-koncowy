//
// Created by janna on 02.06.2019.
//
#include "SFML/Graphics.hpp"
#include "solitaireBoard.h"

solitaireBoard::solitaireBoard(talia t, plansza p, segregacja s)
        :tal(t), seg(s), pla(p) {}

bool solitaireBoard::isRevealed(std::vector<card> baza, int n)
{
    return n == lengthOf(baza);
}

GameState solitaireBoard::get_gamestate()
{
    if(seg.isComplete())
        return FINISHED;
    return RUNNING;
}

int solitaireBoard::lengthOf(std::vector<card> baza)
{
    return baza.size() - 1;
}



int solitaireBoard::getPosition(int n)
{
    //albo po prostu w view zrobić 3 funkcje zliczającą n na bazie koordynatów
    return n;
}

cardFace solitaireBoard::getCardEnum(std::vector<card> baza, int n)
{
    if(baza[n].get_symbol() == "serce" && baza[n].get_liczba() == "as")
        return as_serce;
    if(baza[n].get_symbol() == "serce" && baza[n].get_liczba() == "dwojka")
        return dwojka_serce;
    if(baza[n].get_symbol() == "serce" && baza[n].get_liczba() == "trojka")
        return trojka_serce;
    if(baza[n].get_symbol() == "serce" && baza[n].get_liczba() == "czworka")
        return czworka_serce;
    if(baza[n].get_symbol() == "serce" && baza[n].get_liczba() == "piatka")
        return piatka_serce;
    if(baza[n].get_symbol() == "serce" && baza[n].get_liczba() == "szostka")
        return szostka_serce;
    if(baza[n].get_symbol() == "serce" && baza[n].get_liczba() == "siodemka")
        return siodemka_serce;
    if(baza[n].get_symbol() == "serce" && baza[n].get_liczba() == "osemka")
        return osemka_serce;
    if(baza[n].get_symbol() == "serce" && baza[n].get_liczba() == "dziewiatka")
        return dziewiatka_serce;
    if(baza[n].get_symbol() == "serce" && baza[n].get_liczba() == "dziesiatka")
        return dziesiatka_serce;
    if(baza[n].get_symbol() == "serce" && baza[n].get_liczba() == "walet")
        return walet_serce;
    if(baza[n].get_symbol() == "serce" && baza[n].get_liczba() == "dama")
        return dama_serce;
    if(baza[n].get_symbol() == "serce" && baza[n].get_liczba() == "krol")
        return krol_serce;
    if(baza[n].get_symbol() == "karo" && baza[n].get_liczba() == "as")
        return as_karo;
    if(baza[n].get_symbol() == "karo" && baza[n].get_liczba() == "dwojka")
        return dwojka_karo;
    if(baza[n].get_symbol() == "karo" && baza[n].get_liczba() == "trojka")
        return trojka_karo;
    if(baza[n].get_symbol() == "karo" && baza[n].get_liczba() == "czworka")
        return czworka_karo;
    if(baza[n].get_symbol() == "karo" && baza[n].get_liczba() == "piatka")
        return piatka_karo;
    if(baza[n].get_symbol() == "karo" && baza[n].get_liczba() == "szostka")
        return szostka_karo;
    if(baza[n].get_symbol() == "karo" && baza[n].get_liczba() == "siodemka")
        return siodemka_karo;
    if(baza[n].get_symbol() == "karo" && baza[n].get_liczba() == "osemka")
        return osemka_karo;
    if(baza[n].get_symbol() == "karo" && baza[n].get_liczba() == "dziewiatka")
        return dziewiatka_karo;
    if(baza[n].get_symbol() == "karo" && baza[n].get_liczba() == "dziesiatka")
        return dziesiatka_karo;
    if(baza[n].get_symbol() == "karo" && baza[n].get_liczba() == "walet")
        return walet_karo;
    if(baza[n].get_symbol() == "karo" && baza[n].get_liczba() == "dama")
        return dama_karo;
    if(baza[n].get_symbol() == "karo" && baza[n].get_liczba() == "krol")
        return krol_karo;
    if(baza[n].get_symbol() == "trefl" && baza[n].get_liczba() == "as")
        return as_trefl;
    if(baza[n].get_symbol() == "trefl" && baza[n].get_liczba() == "dwojka")
        return dwojka_trefl;
    if(baza[n].get_symbol() == "trefl" && baza[n].get_liczba() == "trojka")
        return trojka_trefl;
    if(baza[n].get_symbol() == "trefl" && baza[n].get_liczba() == "czworka")
        return czworka_trefl;
    if(baza[n].get_symbol() == "trefl" && baza[n].get_liczba() == "piatka")
        return piatka_trefl;
    if(baza[n].get_symbol() == "trefl" && baza[n].get_liczba() == "szostka")
        return szostka_trefl;
    if(baza[n].get_symbol() == "trefl" && baza[n].get_liczba() == "siodemka")
        return siodemka_trefl;
    if(baza[n].get_symbol() == "trefl" && baza[n].get_liczba() == "osemka")
        return osemka_trefl;
    if(baza[n].get_symbol() == "trefl" && baza[n].get_liczba() == "dziewiatka")
        return dziewiatka_trefl;
    if(baza[n].get_symbol() == "trefl" && baza[n].get_liczba() == "dziesiatka")
        return dziesiatka_trefl;
    if(baza[n].get_symbol() == "trefl" && baza[n].get_liczba() == "walet")
        return walet_trefl;
    if(baza[n].get_symbol() == "trefl" && baza[n].get_liczba() == "dama")
        return dama_trefl;
    if(baza[n].get_symbol() == "trefl" && baza[n].get_liczba() == "krol")
        return krol_trefl;
    if(baza[n].get_symbol() == "pik" && baza[n].get_liczba() == "as")
        return as_pik;
    if(baza[n].get_symbol() == "pik" && baza[n].get_liczba() == "dwojka")
        return dwojka_pik;
    if(baza[n].get_symbol() == "pik" && baza[n].get_liczba() == "trojka")
        return trojka_pik;
    if(baza[n].get_symbol() == "pik" && baza[n].get_liczba() == "czworka")
        return czworka_pik;
    if(baza[n].get_symbol() == "pik" && baza[n].get_liczba() == "piatka")
        return piatka_pik;
    if(baza[n].get_symbol() == "pik" && baza[n].get_liczba() == "szostka")
        return szostka_pik;
    if(baza[n].get_symbol() == "pik" && baza[n].get_liczba() == "siodemka")
        return siodemka_pik;
    if(baza[n].get_symbol() == "pik" && baza[n].get_liczba() == "osemka")
        return osemka_pik;
    if(baza[n].get_symbol() == "pik" && baza[n].get_liczba() == "dziewiatka")
        return dziewiatka_pik;
    if(baza[n].get_symbol() == "pik" && baza[n].get_liczba() == "dziesiatka")
        return dziesiatka_pik;
    if(baza[n].get_symbol() == "pik" && baza[n].get_liczba() == "walet")
        return walet_pik;
    if(baza[n].get_symbol() == "pik" && baza[n].get_liczba() == "dama")
        return dama_pik;
    if(baza[n].get_symbol() == "pik" && baza[n].get_liczba() == "krol")
        return krol_pik;
}


///Funkcje do przestawiania kart
void solitaireBoard::move(talia t, plansza p, int n)
{
    t.moveCard(p.wybierz_pole(n));
}

void solitaireBoard::move(talia t, segregacja s, int n)
{
    t.moveCard(s.wybierz_pole(n));
}

void solitaireBoard::move(plansza baza, plansza cel, int bn, int cn, int ilosc_kart)
{
    baza.move_cards(baza.wybierz_pole(bn), cel.wybierz_pole(cn), ilosc_kart);
}

void solitaireBoard::move(plansza p, segregacja s, int pn, int sn)
{
    p.put_card(p.wybierz_pole(pn),s.wybierz_pole(sn));
}

void solitaireBoard::move(segregacja s, plansza p, int sn, int pn)
{
    s.put_card(s.wybierz_pole(sn),p.wybierz_pole(pn));
}
int solitaireBoard::getStackSize(talia t)
{
    return t.getStackSize();
}














