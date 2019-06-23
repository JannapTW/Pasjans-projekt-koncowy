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

void plansza::put_cards(std::vector<card> baza, std::vector<card> vec)
{
    int counter = 0;
    for (int i = baza.size() ;; --i)
    {
        if(isOneHigher(baza, vec, i))
        {
            ++counter;
        }
        else break;
    }

    for (int i = baza.size() - counter ; i<baza.size() ; --i)
    {
        vec.push_back(baza[i]);
    }
    take_cards(baza, counter);
}

void plansza::take_cards(std::vector<card> vec, int n)
{
    for (int i = 0 ; i<n ; i++)
        vec.pop_back();
}


bool plansza::isOneHigher(std::vector<card> baza, std::vector<card> vec, int n)
{
    if(baza[n].get_number() == (vec[n - 1].get_number() + 1))
        return true;
    return false;
}


