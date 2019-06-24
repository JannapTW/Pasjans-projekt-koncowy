//
// Created by janna on 26.05.2019.
//

#include "boardView.h"
boardView::boardView(solitaireBoard & b)
    :board(b)
{
    //Definicja zmiennych
    lightGreen = sf::Color(60, 230, 60);
    darkGreen = sf::Color(80, 130, 80);

    font.loadFromFile("calibri.ttf");
    txt1.setFont(font);
    txt1.setFillColor(sf::Color::Magenta);
    txt1.setCharacterSize(20);

    background.setPosition(0, 0);
    background.setFillColor(sf::Color(80, 10, 80));
    background.setSize(sf::Vector2f(2000,2000));

    texture.loadFromFile("playing-cards.png");

    As_trefl.setTexture(texture);
    As_trefl.setTextureRect(sf::IntRect(2,2,71,96));
    As_trefl.setScale(sf::Vector2f(1.0f, 1.0f));
    
    dwojka_trefl.setTexture(texture);
    dwojka_trefl.setTextureRect(sf::IntRect(2,2,71,96));
    dwojka_trefl.setScale(sf::Vector2f(1.0f, 1.0f));


}

void boardView::draw(sf::RenderWindow & win)
{
    As_trefl.setPosition(200,200);
    win.draw(As_trefl);
    //Rysowanie przygotowanych elementów
}
