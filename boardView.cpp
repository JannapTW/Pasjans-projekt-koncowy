//
// Created by janna on 26.05.2019.
//
#include "plansza.h"
#include "talia.h"
#include "segregacja.h"
#include "boardView.h"
boardView::boardView(solitaireBoard & b, talia & t, plansza & p, segregacja & s)
        :board(b), tal(t), pla(p), seg(s)
{
    //Definicja zmiennych
    lightGreen = sf::Color(60, 230, 60);
    darkGreen = sf::Color(80, 130, 80);

    font.loadFromFile("calibri.ttf");
    txt1.setFont(font);
    txt1.setFillColor(sf::Color::Magenta);
    txt1.setCharacterSize(20);

    background.setPosition(0, 0);
    background.setFillColor(darkGreen);
    background.setSize(sf::Vector2f(2000, 2000));

    texture.loadFromFile("playing-cards.png");

    as_trefl.setTexture(texture);
    as_trefl.setTextureRect(sf::IntRect(2, 2, 71, 96));

    dwojka_trefl.setTexture(texture);
    dwojka_trefl.setTextureRect(sf::IntRect(74, 2, 72, 96));

    trojka_trefl.setTexture(texture);
    trojka_trefl.setTextureRect(sf::IntRect(147, 2, 72, 96));

    czworka_trefl.setTexture(texture);
    czworka_trefl.setTextureRect(sf::IntRect(220, 2, 72, 96));

    piatka_trefl.setTexture(texture);
    piatka_trefl.setTextureRect(sf::IntRect(293, 2, 72, 96));

    szostka_trefl.setTexture(texture);
    szostka_trefl.setTextureRect(sf::IntRect(366, 2, 72, 96));

    siodemka_trefl.setTexture(texture);
    siodemka_trefl.setTextureRect(sf::IntRect(439, 2, 72, 96));

    osemka_trefl.setTexture(texture);
    osemka_trefl.setTextureRect(sf::IntRect(512, 2, 72, 96));

    dziewiatka_trefl.setTexture(texture);
    dziewiatka_trefl.setTextureRect(sf::IntRect(585, 2, 72, 96));

    dziesiatka_trefl.setTexture(texture);
    dziesiatka_trefl.setTextureRect(sf::IntRect(658, 2, 72, 96));

    walet_trefl.setTexture(texture);
    walet_trefl.setTextureRect(sf::IntRect(731, 2, 72, 96));

    dama_trefl.setTexture(texture);
    dama_trefl.setTextureRect(sf::IntRect(804, 2, 72, 96));

    krol_trefl.setTexture(texture);
    krol_trefl.setTextureRect(sf::IntRect(877, 2, 72, 96));

    as_serce.setTexture(texture);
    as_serce.setTextureRect(sf::IntRect(2, 100, 71, 96));

    dwojka_serce.setTexture(texture);
    dwojka_serce.setTextureRect(sf::IntRect(74, 100, 72, 96));

    trojka_serce.setTexture(texture);
    trojka_serce.setTextureRect(sf::IntRect(147, 100, 72, 96));

    czworka_serce.setTexture(texture);
    czworka_serce.setTextureRect(sf::IntRect(220, 100, 72, 96));

    piatka_serce.setTexture(texture);
    piatka_serce.setTextureRect(sf::IntRect(293, 100, 72, 96));

    szostka_serce.setTexture(texture);
    szostka_serce.setTextureRect(sf::IntRect(366, 100, 72, 96));

    siodemka_serce.setTexture(texture);
    siodemka_serce.setTextureRect(sf::IntRect(439, 100, 72, 96));

    osemka_serce.setTexture(texture);
    osemka_serce.setTextureRect(sf::IntRect(512, 100, 72, 96));

    dziewiatka_serce.setTexture(texture);
    dziewiatka_serce.setTextureRect(sf::IntRect(585, 100, 72, 96));

    dziesiatka_serce.setTexture(texture);
    dziesiatka_serce.setTextureRect(sf::IntRect(658, 100, 72, 96));

    walet_serce.setTexture(texture);
    walet_serce.setTextureRect(sf::IntRect(731, 100, 72, 96));

    dama_serce.setTexture(texture);
    dama_serce.setTextureRect(sf::IntRect(804, 100, 72, 96));

    krol_serce.setTexture(texture);
    krol_serce.setTextureRect(sf::IntRect(877, 100, 72, 96));

    as_pik.setTexture(texture);
    as_pik.setTextureRect(sf::IntRect(2, 198, 71, 96));

    dwojka_pik.setTexture(texture);
    dwojka_pik.setTextureRect(sf::IntRect(74, 198, 72, 96));

    trojka_pik.setTexture(texture);
    trojka_pik.setTextureRect(sf::IntRect(147, 198, 72, 96));

    czworka_pik.setTexture(texture);
    czworka_pik.setTextureRect(sf::IntRect(220, 198, 72, 96));

    piatka_pik.setTexture(texture);
    piatka_pik.setTextureRect(sf::IntRect(293, 198, 72, 96));

    szostka_pik.setTexture(texture);
    szostka_pik.setTextureRect(sf::IntRect(366, 198, 72, 96));

    siodemka_pik.setTexture(texture);
    siodemka_pik.setTextureRect(sf::IntRect(439, 198, 72, 96));

    osemka_pik.setTexture(texture);
    osemka_pik.setTextureRect(sf::IntRect(512, 198, 72, 96));

    dziewiatka_pik.setTexture(texture);
    dziewiatka_pik.setTextureRect(sf::IntRect(585, 198, 72, 96));

    dziesiatka_pik.setTexture(texture);
    dziesiatka_pik.setTextureRect(sf::IntRect(658, 198, 72, 96));

    walet_pik.setTexture(texture);
    walet_pik.setTextureRect(sf::IntRect(731, 198, 72, 96));

    dama_pik.setTexture(texture);
    dama_pik.setTextureRect(sf::IntRect(804, 198, 72, 96));

    krol_pik.setTexture(texture);
    krol_pik.setTextureRect(sf::IntRect(877, 198, 72, 96));

    as_karo.setTexture(texture);
    as_karo.setTextureRect(sf::IntRect(2, 296, 71, 96));

    dwojka_karo.setTexture(texture);
    dwojka_karo.setTextureRect(sf::IntRect(74, 296, 72, 96));

    trojka_karo.setTexture(texture);
    trojka_karo.setTextureRect(sf::IntRect(147, 296, 72, 96));

    czworka_karo.setTexture(texture);
    czworka_karo.setTextureRect(sf::IntRect(220, 296, 72, 96));

    piatka_karo.setTexture(texture);
    piatka_karo.setTextureRect(sf::IntRect(293, 296, 72, 96));

    szostka_karo.setTexture(texture);
    szostka_karo.setTextureRect(sf::IntRect(366, 296, 72, 96));

    siodemka_karo.setTexture(texture);
    siodemka_karo.setTextureRect(sf::IntRect(439, 296, 72, 96));

    osemka_karo.setTexture(texture);
    osemka_karo.setTextureRect(sf::IntRect(512, 296, 72, 96));

    dziewiatka_karo.setTexture(texture);
    dziewiatka_karo.setTextureRect(sf::IntRect(585, 296, 72, 96));

    dziesiatka_karo.setTexture(texture);
    dziesiatka_karo.setTextureRect(sf::IntRect(658, 296, 72, 96));

    walet_karo.setTexture(texture);
    walet_karo.setTextureRect(sf::IntRect(731, 296, 72, 96));

    dama_karo.setTexture(texture);
    dama_karo.setTextureRect(sf::IntRect(804, 296, 72, 96));

    krol_karo.setTexture(texture);
    krol_karo.setTextureRect(sf::IntRect(877, 296, 72, 96));

    hidden.setTexture(texture);
    hidden.setTextureRect(sf::IntRect(955, 2, 71, 96));

    empty.setTexture(texture);
    empty.setTextureRect(sf::IntRect(955, 100, 71, 96));

    x_orig = 200;
    y_orig = 100;
}

sf::Sprite boardView::getCard(cardFace karta)
{
    switch(karta)
    {
    case 0:return as_serce;
    case 1:return dwojka_serce;
    case 2:return trojka_serce;
    case 3:return czworka_serce;
    case 4:return piatka_serce;
    case 5:return szostka_serce;
    case 6:return siodemka_serce;
    case 7:return osemka_serce;
    case 8:return dziewiatka_serce;
    case 9:return dziesiatka_serce;
    case 10:return walet_serce;
    case 11:return dama_serce;
    case 12:return krol_serce;
    case 13:return as_karo;
    case 14:return dwojka_karo;
    case 15:return trojka_karo;
    case 16:return czworka_karo;
    case 17:return piatka_karo;
    case 18:return szostka_karo;
    case 19:return siodemka_karo;
    case 20:return osemka_karo;
    case 21:return dziewiatka_karo;
    case 22:return dziesiatka_karo;
    case 23:return walet_karo;
    case 24:return dama_karo;
    case 25:return krol_karo;
    case 26:return as_trefl;
    case 27:return dwojka_trefl;
    case 28:return trojka_trefl;
    case 29:return czworka_trefl;
    case 30:return piatka_trefl;
    case 31:return szostka_trefl;
    case 32:return siodemka_trefl;
    case 33:return osemka_trefl;
    case 34:return dziewiatka_trefl;
    case 35:return dziesiatka_trefl;
    case 36:return walet_trefl;
    case 37:return dama_trefl;
    case 38:return krol_trefl;
    case 39:return as_pik;
    case 40:return dwojka_pik;
    case 41:return trojka_pik;
    case 42:return czworka_pik;
    case 43:return piatka_pik;
    case 44:return szostka_pik;
    case 45:return siodemka_pik;
    case 46:return osemka_pik;
    case 47:return dziewiatka_pik;
    case 48:return dziesiatka_pik;
    case 49:return walet_pik;
    case 50:return dama_pik;
    case 51:return krol_pik;
    }
}

void boardView::draw(sf::RenderWindow & win)
{
    win.draw(background);

    //ma rysować karty w zależności od pozycji, w przypadku bycia zakrytymi ma rysować default sprite

    //górna karta w stacku
    if(tal.getDeckSize() == 0)
    {
        empty.setPosition(x_orig, y_orig);
        win.draw(empty);
    }
    else if(tal.getDeckSize() != 0)
    {
        hidden.setPosition(x_orig, y_orig);
        win.draw(hidden);
    }

    if(!tal.getStack().empty())
    {
        getCard(board.getCardEnum(tal.getStack(), tal.lengthOf(tal.getStack()))).setPosition(x_orig + 100, y_orig);
        win.draw(getCard(board.getCardEnum(tal.getStack(), tal.lengthOf(tal.getStack()))));
    }

    for (int j = 1 ; j<8 ; ++j) //dla planszy
    {
        //górna karta w planszy
        //win.draw(getCard(board.getCardEnum(pla.wybierz_pole(j), pla.getStackSize()-1)));
        for (int i = 0 ; i<pla.wybierz_pole(j).size() ; ++i)
        {
            if(!pla.wybierz_pole(j).empty())
            {
                (getCard(board.getCardEnum(pla.wybierz_pole(j), i))).setPosition(x_orig + 200 + (i * 100), 100);
                win.draw(getCard(board.getCardEnum(pla.wybierz_pole(j), i)));
            }
        }
    }

    for (int j = 1 ; j<5 ; ++j) //dla segregacji
    {
        //górna karta w segregacji
        //win.draw(getCard(board.getCardEnum(seg.wybierz_pole(j), seg.wybierz_pole(j).size()));
        for (int i = 0 ; i<seg.wybierz_pole(j).size() ; ++i)
        {
            if(!seg.wybierz_pole(j).empty())
            {
                (getCard(board.getCardEnum(seg.wybierz_pole(j), i))).setPosition(x_orig+800,100 + (100*i));
                win.draw(getCard(board.getCardEnum(seg.wybierz_pole(j), i)));
            }
        }
    }

//    empty.setPosition(200, 200);
//    win.draw(empty);

}
