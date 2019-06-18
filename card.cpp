//
// Created by janna on 01.06.2019.
//

#include "card.h"

card::card(std::string s, std::string l)
        :symbol(s), liczba(l) {}

std::string card::print() const
{
    return (symbol+" "+liczba); // Zwraca pełną kartę stringiem
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




