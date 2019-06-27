//
// Created by janna on 01.06.2019.
//

#include "card.h"

card::card(std::string s, std::string l)
        :symbol(s), liczba(l) {}

std::string card::print() const
{
    return (symbol + " " + liczba); // Zwraca pełną kartę stringiem
}

card::card()
{
    symbol = "symbol";
    liczba = "liczba";
}

const std::string card::get_symbol()
{
    return card::symbol;
}

const std::string card::get_liczba()
{
    return card::liczba;
}

bool card::isEmpty()
{
    return card::symbol == "empty" && card::liczba == "empty";
}

const int card::card_to_number() //0-12
{
    int x;
    if(this->get_liczba() == "as")
        x = 0;
    if(this->get_liczba() == "dwojka")
        x = 1;
    if(this->get_liczba() == "trojka")
        x = 2;
    if(this->get_liczba() == "czworka")
        x = 3;
    if(this->get_liczba() == "piatka")
        x = 4;
    if(this->get_liczba() == "szostka")
        x = 5;
    if(this->get_liczba() == "siodemka")
        x = 6;
    if(this->get_liczba() == "osemka")
        x = 7;
    if(this->get_liczba() == "dziewiatka")
        x = 8;
    if(this->get_liczba() == "dziesiatka")
        x = 9;
    if(this->get_liczba() == "walet")
        x = 10;
    if(this->get_liczba() == "dama")
        x = 11;
    if(this->get_liczba() == "krol")
        x = 12;

    return x;
}

bool card::isOpposite(card karta) //Sprawdzamy kartę z poziomu wyżej ( +1 )
{
    if((this->get_symbol() == "serce") || (this->get_symbol() == "karo"))
    {
        return (karta.get_symbol() == "trefl") || (karta.get_symbol() == "pik");
    }
    else if((this->get_symbol() == "trefl") || (this->get_symbol() == "pik"))
    {
        return (karta.get_symbol() == "serce") || (karta.get_symbol() == "karo");
    }
}

bool card::isSame(card karta)
{
    return this->get_symbol() == karta.get_symbol();
}



