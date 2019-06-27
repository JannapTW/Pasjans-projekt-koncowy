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
    //Okno
    sf::RenderWindow win(sf::VideoMode(1600, 900), "Solitaire");
    //Logika
    talia t;
    segregacja s;
    plansza p;
    cout << "obiekty zainicjalizowanie";

    solitaireBoard b(t,p,s);

    //Wygląd gry
    boardView v(b,t,p,s);
    cout << "board view zainicjalizowany";

    //Sterowanie grą
    boardController bc(b, v);
    cout << "Kontroler zainicjalizowany";

    //Intro
    introView iv;
    cout << "intro view zainicjalizowany";


    //sterowanie intrem
    introController ic(b, iv);

    //Zarządzanie sterowaniem
    solitaireManager sm(bc, ic);

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
        // Clear screen
        win.clear();

        //Draw everything
        sm.draw(win);

        // Update the window
        win.display();
    }
    ///Notatki



}