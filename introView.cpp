//
// Created by janna on 26.05.2019.
//

#include "introView.h"
introView::introView()
{
    //Definicje zmiennych
    background.setPosition(0, 0);
    background.setFillColor(sf::Color(80, 10, 80));
    background.setSize(sf::Vector2f(2000,2000));

}

void introView::draw(sf::RenderWindow & win)
{
    //Rysowanie
    win.draw(background);


}
