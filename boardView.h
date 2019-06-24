//
// Created by janna on 26.05.2019.
//

#ifndef PASJANS_PROJEKT_KONCOWY_BOARDVIEW_H
#define PASJANS_PROJEKT_KONCOWY_BOARDVIEW_H

#include "SFML/Graphics.hpp"
#include "solitaireBoard.h"

class boardView
{
    solitaireBoard & board;
    //Deklaracja zmiennych
    sf::Color color1, color2, lightGreen, darkGreen;
    sf::Font font;
    sf::Text txt1, txt2, txt3, txt4;
    sf::RectangleShape background;
    sf::Texture texture;
    sf::Sprite As_serce, dwojka_serce, trojka_serce, czworka_serce, piatka_serce, szostka_serce, siodemka_serce,
            osemka_serce, dziewiatka_serce, dziesiatka_serce, walet_serce, dama_serce, krol_serce,
            As_karo, dwojka_karo, trojka_karo, czworka_karo, piatka_karo, szostka_karo, siodemka_karo,
            osemka_karo, dziewiatka_karo, dziesiatka_karo, walet_karo, dama_karo, krol_karo,
            As_trefl, dwojka_trefl, trojka_trefl, czworka_trefl, piatka_trefl, szostka_trefl, siodemka_trefl,
            osemka_trefl, dziewiatka_trefl, dziesiatka_trefl, walet_trefl, dama_trefl, krol_trefl,
            As_pik, dwojka_pik, trojka_pik, czworka_pik, piatka_pik, szostka_pik, siodemka_pik,
            osemka_pik, dziewiatka_pik, dziesiatka_pik, walet_pik, dama_pik, krol_pik;

public:
    explicit boardView(solitaireBoard & b);
    void draw(sf::RenderWindow & win);

};

#endif //PASJANS_PROJEKT_KONCOWY_BOARDVIEW_H
