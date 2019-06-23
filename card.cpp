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

void card::takeCard()
{
    card::symbol = "empty";
    card::liczba = "empty";
}

bool card::isEmpty()
{
    return card::symbol == "empty" && card::liczba == "empty";
}

const int card::get_number()
{
    int x;
    if(this->get_liczba()=="As")
        x=0;
    if(this->get_liczba()=="Dwojka")
        x=1;
    if(this->get_liczba()=="Trojka")
        x=2;
    if(this->get_liczba()=="Czworka")
        x=3;
    if(this->get_liczba()=="Piatka")
        x=4;
    if(this->get_liczba()=="Szostka")
        x=5;
    if(this->get_liczba()=="Siodemka")
        x=6;
    if(this->get_liczba()=="Osemka")
        x=7;
    if(this->get_liczba()=="Dziewiatka")
        x=8;
    if(this->get_liczba()=="Dziesiatka")
        x=9;
    if(this->get_liczba()=="Walet")
        x=10;
    if(this->get_liczba()=="Dama")
        x=11;
    if(this->get_liczba()=="Krol")
        x=12;

    return x;
}

bool card::isOpposite(card karta) //Sprawdzamy kartę z poziomu wyżej ( +1 )
{
    if((this->get_symbol() == "Serce") || (this->get_symbol() == "Karo"))
    {
        return (karta.get_symbol() == "Trefl") || (karta.get_symbol() == "Pik");
    }
    else if((this->get_symbol() == "Trefl") || (this->get_symbol() == "Pik"))
    {
        return (karta.get_symbol() == "Serce") || (karta.get_symbol() == "Karo");
    }
}



