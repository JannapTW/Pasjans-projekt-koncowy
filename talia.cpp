//
// Created by janna on 26.05.2019.
//
#include <iostream>
#include <time.h>
#include <ctime>
#include "talia.h"

talia::talia()
{
    // Ustawia zakres liczb i symboli
    std::string liczba[] = {"As", "Dwojka", "Trojka", "Czworka", "Piatka", "Szostka", "Siodemka",
                            "Osemka", "Dziewiatka", "Dziesiatka", "Walet", "Dama", "Krol"}; // i
    std::string symbol[] = {"Serce", "Karo", "Trefl", "Pik"}; // j
    // Wskaznikiem na typ card tworzymy nową tablicę

    current_card = deck.size();
    //Ustawia całą talie w sposob posegregowany
    for (int i = 0 ; i<52 ; ++i)
    {
        //deck[i] = card(liczba[i % 13], symbol[i / 13]);
        deck.push_back(card(liczba[i % 13], symbol[i / 13]));
    }
}

void talia::printDeck()
{
    for (int i = 0 ; i<deck.size() ; ++i)
    {
        //Wyswietla cala talie w konsoli
        std::cout << deck[i].print() << " ";
        if(i % 13)
            std::cout << std::endl;
    }
}

void talia::shuffle()
{
    //Algorytm tasowania. Zamienia miejscami kazda karte w talii z losowa karta (może nawet z tą samą)
    //Co jest ważne, nie zamienia wartosci symboli i liczb a tylko zmienia ich położenie w tablicy!
    current_card = deck.size();
    for (int first = 0 ; first<deck.size(); ++first)
    {
        int second = (rand()+time(0)) % deck.size();
        card temp = deck[first];
        deck[first] = deck[second];
        deck[second] = temp;
    }
}

void talia::dealCard()
{
    // Jeśli aktualna karta w talii jest wciaz na stosie dobierania wyciaga ja i patrzy na następna.
    // Jeśli nie ma wiecej kart w talii tasuje ją i zwraca.
    //switch?

    if(current_card==0)
    {
        for (int i = stack.size() ; i>0 ; --i)
        {
            //deck[i] = card(liczba[i % 13], symbol[i / 13]);
            deck.push_back(stack[(i-1)]);
            stack.pop_back();
        }
        shuffle();
    }
    if(current_card<=deck.size())
    {
        stack.push_back(deck[current_card]);
        deck.pop_back();
        --current_card;
    }
}



void talia::moveCard(std::vector<card> vec) //zdjęcie karty ze stack'u i wrzucenie jej do planszy
{
    vec.push_back(stack[stack.size()]);
    stack.pop_back();
}






