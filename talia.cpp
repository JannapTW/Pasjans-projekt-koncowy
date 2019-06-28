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
    std::string liczba[] = {"as", "dwojka", "trojka", "czworka", "piatka", "szostka", "siodemka",
                            "osemka", "dziewiatka", "dziesiatka", "walet", "dama", "krol"}; // i
    std::string symbol[] = {"serce", "karo", "trefl", "pik"}; // j
    // Wskaznikiem na typ card tworzymy nową tablicę

    //Ustawia całą talie w sposob posegregowany
    for (int i = 0 ; i<52 ; ++i)
    {
        deck.emplace_back(liczba[i % 13], symbol[i / 13]);
    }
    current_card = lengthOf(deck);
}

void talia::printDeck()
{
    for (int i = 0 ; i<lengthOf(deck) ; ++i)
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
    current_card = lengthOf(deck);
    for (int first = 0 ; first<deck.size() ; ++first)
    {
        int second = (rand() + time(0)) % deck.size();
        card temp = deck[first];
        deck[first] = deck[second];
        deck[second] = temp;
    } //do sprawdzenia
}

void talia::dealCard()
{
    // Jeśli aktualna karta w talii jest wciaz na stosie dobierania wyciaga ja i patrzy na następna.
    // Jeśli nie ma wiecej kart w talii tasuje ją i zwraca.
    //switch?

    if(current_card == 0)
    {
        for (int i = stack.size() ; i>0 ; --i)
        {
            //deck[i] = card(liczba[i % 13], symbol[i / 13]);
            deck.push_back(stack[(i - 1)]);
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

void talia::moveCard(std::vector<card> & vec) //zdjęcie karty ze stack'u i wrzucenie jej do planszy
{
    vec.push_back(stack[lengthOf(stack)]);
    stack.pop_back();
}

const int talia::lengthOf(const std::vector<card> & baza)
{
    if(!baza.empty())
        return baza.size() - 1;
    return 0;
}

int talia::getStackSize() const
{
    return stack.size();
}

std::vector<card> talia::getStack()
{
    return stack;
}
int talia::getDeckSize()
{
    return deck.size();
}








