//
// Created by janna on 19.06.2019.
//

#include "segregacja.h"
segregacja::segregacja() {}

void segregacja::put_card(std::vector<card> baza, std::vector<card> vec)
{

    if(isOneLower(baza, vec) && (baza[baza.size()].isSame(vec[vec.size()])))
    {
        vec.push_back(baza[baza.size()]);
        take_card(baza);
    }
    //deck.push_back(card(liczba[i % 13], symbol[i / 13]));
}

void segregacja::take_card(std::vector<card> baza)
{
    baza.pop_back();
}

bool segregacja::isOneHigher(std::vector<card> baza, std::vector<card> vec) // ??
{
    if(baza[baza.size()].get_number() == (vec[vec.size()].get_number() + 1))
        return true;
    return false;
}

bool segregacja::isOneLower(std::vector<card> baza, std::vector<card> vec) // do odkładania na stos
{
    if(baza[baza.size()].get_number() == (vec[vec.size()].get_number() - 1))
        return true;
    return false;
}

bool segregacja::isComplete()
{
    return (segregacja_serce.size() + segregacja_karo.size() + segregacja_trefl.size() + segregacja_pik.size()) == 52;
}



