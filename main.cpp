#include <iostream>
#include "card.h"
#include "talia.h"
#include "solitaireBoard.h"
#include "boardView.h"
#include "boardController.h"
#include "introView.h"
#include "introController.h"
#include "solitaireManager.h"

using namespace std;
int main()
{
    talia deck;
    card karta;
    //Program testujący działanie bazy talii w konsoli
//    deck.printDeck();
//    deck.shuffle();
//    cout << endl << endl;
//    deck.printDeck();
//    deck.shuffle();
//    cout << endl << endl;
//    for (int i = 0 ; i<52 ; ++i)
//    {
//        karta = deck.dealCard();
//        cout << karta.print() << endl;
//    }

    //Okno
    sf::RenderWindow win(sf::VideoMode(1600, 900), "Solitaire");
    //Logika
    solitaireBoard b;

    //Wygląd gry
    boardView v(b);

    //Sterowanie grą
    boardController bc(b,v);

    //Intro
    introView iv;

    //sterowanie intrem
    introController ic(b,iv);

    //Zarządzanie sterowaniem
    solitaireManager sm(bc,ic);


    while (win.isOpen())
    {
        // Process events
        sf::Event event;
        while (win.pollEvent(event))
        {
            // Close window : exit
            if(event.type == sf::Event::Closed)
                win.close();

            //Operate everything
            sm.handleEvent(event);
        }

        //std::cout<< 1.0f / time.asSeconds() << std::endl;

//        if(ic.isFinished())
//        {
//            clock.restart();
//            limit += time.asSeconds();
//            if(limit>0.05)
//            {
//                b.snakeMove();
//                limit = 0;
//            }
//        }
        // Clear screen
        win.clear();

        //Draw everything
        sm.draw(win);

        // Update the window
        win.display();
    }



}