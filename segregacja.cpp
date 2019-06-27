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

bool segregacja::isOneHigher(std::vector<card> baza, std::vector<card> vec) // do odkładania ze stosu
{
    if(baza[lengthOf(baza)].card_to_number() == (vec[lengthOf(vec)].card_to_number() + 1))
        return true;
    return false;
}

bool segregacja::isOneLower(std::vector<card> baza, std::vector<card> vec) // do odkładania na stos
{
    if(baza[lengthOf(baza)].card_to_number() == (vec[lengthOf(vec)].card_to_number() - 1))
        return true;
    return false;
}

bool segregacja::isComplete() //is the game finished
{
    return (segregacja_serce.size() == 12) && (segregacja_karo.size() == 12) && (segregacja_trefl.size() == 12)
            && (segregacja_pik.size() == 12);
}

int segregacja::lengthOf(std::vector<card> baza)
{
    return baza.size() - 1;
}
std::vector<card> segregacja::wybierz_pole(int n)
{
    switch(n)
    {
    case 1:return segregacja_serce;
    case 2:return segregacja_karo;
    case 3:return segregacja_trefl;
    case 4:return segregacja_pik;
    }
}



