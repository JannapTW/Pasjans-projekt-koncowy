//
// Created by janna on 26.05.2019.
//

#include "introView.h"
introView::introView()
{
    //Definicje zmiennych
    background.setPosition(0, 0);
    background.setFillColor(sf::Color(80, 10, 80));
    background.setSize(sf::Vector2f(2000, 2000));

    font.loadFromFile("calibri.ttf");
    txt1.setFont(font);
    txt1.setString("Solitaire");
    txt1.setPosition(675, 100);
    txt1.setFillColor(sf::Color(80, 250, 80));
    txt1.setCharacterSize(70);

    txt2.setFont(font);
    txt2.setString("Press space to proceed");
    txt2.setPosition(650, 600);
    txt2.setFillColor(sf::Color(80, 250, 80));
    txt2.setCharacterSize(30);

}

void introView::draw(sf::RenderWindow & win)
{
    //Rysowanie
    win.draw(background);
    win.draw(txt1);
    win.draw(txt2);
}
