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
    deck = new card[52];
    current_card = 0;
    //Ustawia całą talie w sposob posegregowany
    for (int i = 0 ; i<52 ; ++i)
        deck[i] = card(liczba[i % 13], symbol[i / 13]);

}

void talia::printDeck()
{
    for (int i = 0 ; i<52 ; ++i)
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
    current_card = 0;
    for (int first = 0 ; first<52 ; ++first)
    {
        int second = (rand()+time(0)) % 52;
        card temp = deck[first];
        deck[first] = deck[second];
        deck[second] = temp;
    }
}

card talia::dealCard()
{
    // Jeśli aktualna karta w talii jest wciaz na stosie dobierania wyciaga ja i patrzy na następna.
    // Jeśli nie ma wiecej kart w talii tasuje ją i zwraca.
    if(current_card>52)
        shuffle();
    if(current_card<52)
        return (deck[current_card++]);
    return deck[0];
}



card talia::putCard(int x)
{
    return deck[x];
}

bool talia::is_empty(card karta)
{
    if(karta.get_liczba() == "empty" && karta.get_symbol() == "empty")
        return true;
}





