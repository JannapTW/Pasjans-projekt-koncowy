//
// Created by janna on 19.06.2019.
//

#include "segregacja.h"
segregacja::segregacja()
{

}

void segregacja::put_card(std::vector<card> baza, std::vector<card> vec)
{

    if(isOneLower(baza, vec) && (baza[lengthOf(baza)].isSame(vec[lengthOf(vec)])))
    {
        vec.push_back(baza[lengthOf(baza)]);
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
    if(baza[lengthOf(baza)].get_number() == (vec[lengthOf(vec)].get_number() + 1))
        return true;
    return false;
}

bool segregacja::isOneLower(std::vector<card> baza, std::vector<card> vec) // do odkładania na stos
{
    if(baza[lengthOf(baza)].get_number() == (vec[lengthOf(vec)].get_number() - 1))
        return true;
    return false;
}

bool segregacja::isComplete()
{
    return (segregacja_serce.size() + segregacja_karo.size() + segregacja_trefl.size() + segregacja_pik.size() - 4) == 52;
}

int segregacja::lengthOf(std::vector<card> baza)
{
    return baza.size() - 1;
}



