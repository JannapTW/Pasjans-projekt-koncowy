//
// Created by janna on 19.06.2019.
//

#include "plansza.h"

//Ustawianie pól operacji
plansza::plansza()
{
    setup();
}

void plansza::setup()
{
    dealCard();
    moveCard(pole_1);

    for (int i = 0 ; i<=1 ; ++i)
    {
        dealCard();
        moveCard(pole_2);
    }
    for (int i = 0 ; i<=2 ; ++i)
    {
        dealCard();
        moveCard(pole_3);
    }
    for (int i = 0 ; i<=3 ; ++i)
    {
        dealCard();
        moveCard(pole_4);
    }
    for (int i = 0 ; i<=4 ; ++i)
    {
        dealCard();
        moveCard(pole_5);
    }
    for (int i = 0 ; i<=5 ; ++i)
    {
        dealCard();
        moveCard(pole_6);
    }
    for (int i = 0 ; i<=6 ; ++i)
    {
        dealCard();
        moveCard(pole_7);
    }
}

void plansza::move_cards(std::vector<card> baza, std::vector<card> vec, int n)
{
    int counter = 0;
    for (int i = n ; i<baza.size() ; ++i)
    {
        if(isOneLower(baza, i) && (baza[i].isOpposite(baza[n + 1])))
        {
            ++counter;
        }
        else break;
    }

    if(((isOneHigher(baza, vec) && (baza[lengthOf(baza) - counter].isOpposite(vec[lengthOf(vec)])))
            || (vec.empty() && baza[lengthOf(baza) - counter].card_to_number() == 12)))
    {
        for (int i = baza.size() - counter ; i<baza.size() ; ++i)
        {
            vec.push_back(baza[i]);
        }
        take_cards(baza, counter);
    }
}

void plansza::put_card(std::vector<card> baza, std::vector<card> vec)
{
    if(((isOneHigher(baza, vec) && (baza[lengthOf(baza)].isOpposite(vec[lengthOf(vec)])))
            || (vec.empty() && baza[lengthOf(baza)].card_to_number() == 12)))
    {
        vec.push_back(baza[lengthOf(baza)]);
        take_cards(baza, 0);
    }
}

void plansza::take_cards(std::vector<card> vec, int n)
{
    for (int i = 0 ; i<n ; i++)
        vec.pop_back();
}

bool plansza::isOneLower(std::vector<card> baza, int n) //Do sprawdzenia możliwośći przekładania wielu na planszę
{
    if(baza[n].card_to_number() == (baza[n + 1].card_to_number() - 1))
        return true;
    return false;
}

bool plansza::isOneHigher(std::vector<card> baza, std::vector<card> vec) // Do czynności przekładania na plansze
{
    if(baza[lengthOf(baza)].card_to_number() == (vec[lengthOf(vec)].card_to_number() + 1))
        return true;
    return false;
}

int plansza::lengthOf(std::vector<card> baza)
{
    return baza.size() - 1;
}

std::vector<card> plansza::wybierz_pole(int n)
{
    switch(n)
    {
    case 1:
        return pole_1;
    case 2:
        return pole_2;
    case 3:
        return pole_3;
    case 4:
        return pole_4;
    case 5:
        return pole_5;
    case 6:
        return pole_6;
    case 7:
        return pole_7;
    }
}






