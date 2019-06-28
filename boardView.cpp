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

sf::Sprite & boardView::getCard(const std::vector<card> & baza, const int & n)
{
    if(baza[n].get_symbol() == "serce" && baza[n].get_liczba() == "as")
        return as_serce;
    if(baza[n].get_symbol() == "serce" && baza[n].get_liczba() == "dwojka")
        return dwojka_serce;
    if(baza[n].get_symbol() == "serce" && baza[n].get_liczba() == "trojka")
        return trojka_serce;
    if(baza[n].get_symbol() == "serce" && baza[n].get_liczba() == "czworka")
        return czworka_serce;
    if(baza[n].get_symbol() == "serce" && baza[n].get_liczba() == "piatka")
        return piatka_serce;
    if(baza[n].get_symbol() == "serce" && baza[n].get_liczba() == "szostka")
        return szostka_serce;
    if(baza[n].get_symbol() == "serce" && baza[n].get_liczba() == "siodemka")
        return siodemka_serce;
    if(baza[n].get_symbol() == "serce" && baza[n].get_liczba() == "osemka")
        return osemka_serce;
    if(baza[n].get_symbol() == "serce" && baza[n].get_liczba() == "dziewiatka")
        return dziewiatka_serce;
    if(baza[n].get_symbol() == "serce" && baza[n].get_liczba() == "dziesiatka")
        return dziesiatka_serce;
    if(baza[n].get_symbol() == "serce" && baza[n].get_liczba() == "walet")
        return walet_serce;
    if(baza[n].get_symbol() == "serce" && baza[n].get_liczba() == "dama")
        return dama_serce;
    if(baza[n].get_symbol() == "serce" && baza[n].get_liczba() == "krol")
        return krol_serce;
    if(baza[n].get_symbol() == "karo" && baza[n].get_liczba() == "as")
        return as_karo;
    if(baza[n].get_symbol() == "karo" && baza[n].get_liczba() == "dwojka")
        return dwojka_karo;
    if(baza[n].get_symbol() == "karo" && baza[n].get_liczba() == "trojka")
        return trojka_karo;
    if(baza[n].get_symbol() == "karo" && baza[n].get_liczba() == "czworka")
        return czworka_karo;
    if(baza[n].get_symbol() == "karo" && baza[n].get_liczba() == "piatka")
        return piatka_karo;
    if(baza[n].get_symbol() == "karo" && baza[n].get_liczba() == "szostka")
        return szostka_karo;
    if(baza[n].get_symbol() == "karo" && baza[n].get_liczba() == "siodemka")
        return siodemka_karo;
    if(baza[n].get_symbol() == "karo" && baza[n].get_liczba() == "osemka")
        return osemka_karo;
    if(baza[n].get_symbol() == "karo" && baza[n].get_liczba() == "dziewiatka")
        return dziewiatka_karo;
    if(baza[n].get_symbol() == "karo" && baza[n].get_liczba() == "dziesiatka")
        return dziesiatka_karo;
    if(baza[n].get_symbol() == "karo" && baza[n].get_liczba() == "walet")
        return walet_karo;
    if(baza[n].get_symbol() == "karo" && baza[n].get_liczba() == "dama")
        return dama_karo;
    if(baza[n].get_symbol() == "karo" && baza[n].get_liczba() == "krol")
        return krol_karo;
    if(baza[n].get_symbol() == "trefl" && baza[n].get_liczba() == "as")
        return as_trefl;
    if(baza[n].get_symbol() == "trefl" && baza[n].get_liczba() == "dwojka")
        return dwojka_trefl;
    if(baza[n].get_symbol() == "trefl" && baza[n].get_liczba() == "trojka")
        return trojka_trefl;
    if(baza[n].get_symbol() == "trefl" && baza[n].get_liczba() == "czworka")
        return czworka_trefl;
    if(baza[n].get_symbol() == "trefl" && baza[n].get_liczba() == "piatka")
        return piatka_trefl;
    if(baza[n].get_symbol() == "trefl" && baza[n].get_liczba() == "szostka")
        return szostka_trefl;
    if(baza[n].get_symbol() == "trefl" && baza[n].get_liczba() == "siodemka")
        return siodemka_trefl;
    if(baza[n].get_symbol() == "trefl" && baza[n].get_liczba() == "osemka")
        return osemka_trefl;
    if(baza[n].get_symbol() == "trefl" && baza[n].get_liczba() == "dziewiatka")
        return dziewiatka_trefl;
    if(baza[n].get_symbol() == "trefl" && baza[n].get_liczba() == "dziesiatka")
        return dziesiatka_trefl;
    if(baza[n].get_symbol() == "trefl" && baza[n].get_liczba() == "walet")
        return walet_trefl;
    if(baza[n].get_symbol() == "trefl" && baza[n].get_liczba() == "dama")
        return dama_trefl;
    if(baza[n].get_symbol() == "trefl" && baza[n].get_liczba() == "krol")
        return krol_trefl;
    if(baza[n].get_symbol() == "pik" && baza[n].get_liczba() == "as")
        return as_pik;
    if(baza[n].get_symbol() == "pik" && baza[n].get_liczba() == "dwojka")
        return dwojka_pik;
    if(baza[n].get_symbol() == "pik" && baza[n].get_liczba() == "trojka")
        return trojka_pik;
    if(baza[n].get_symbol() == "pik" && baza[n].get_liczba() == "czworka")
        return czworka_pik;
    if(baza[n].get_symbol() == "pik" && baza[n].get_liczba() == "piatka")
        return piatka_pik;
    if(baza[n].get_symbol() == "pik" && baza[n].get_liczba() == "szostka")
        return szostka_pik;
    if(baza[n].get_symbol() == "pik" && baza[n].get_liczba() == "siodemka")
        return siodemka_pik;
    if(baza[n].get_symbol() == "pik" && baza[n].get_liczba() == "osemka")
        return osemka_pik;
    if(baza[n].get_symbol() == "pik" && baza[n].get_liczba() == "dziewiatka")
        return dziewiatka_pik;
    if(baza[n].get_symbol() == "pik" && baza[n].get_liczba() == "dziesiatka")
        return dziesiatka_pik;
    if(baza[n].get_symbol() == "pik" && baza[n].get_liczba() == "walet")
        return walet_pik;
    if(baza[n].get_symbol() == "pik" && baza[n].get_liczba() == "dama")
        return dama_pik;
    if(baza[n].get_symbol() == "pik" && baza[n].get_liczba() == "krol")
        return krol_pik;

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

    if(tal.getStack().empty())
    {
        empty.setPosition(x_orig + 100, y_orig);
        win.draw(empty);
    }
    else
    {
        getCard(tal.getStack(), tal.lengthOf(tal.getStack())).setPosition(x_orig + 100, y_orig);
        win.draw(getCard(tal.getStack(), tal.lengthOf(tal.getStack())));
    }

    for (int j = 1 ; j<8 ; ++j) //dla planszy
    {
        //górna karta w planszy
        //win.draw(getCard(board.getCardEnum(pla.wybierz_pole(j), pla.getStackSize()-1)));
        for (int i = 0 ; i<pla.wybierz_pole(j).size() ; ++i)
        {
            if(!pla.wybierz_pole(j).empty())
            {
                getCard(pla.wybierz_pole(j), i).setPosition(x_orig + 200 + (i * 100), 200);
                win.draw(getCard(pla.wybierz_pole(j), i));
            }
            else if(pla.wybierz_pole(j).empty())
            {
                empty.setPosition(x_orig + 200 + (i * 100), 200);
                win.draw(empty);
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
                getCard(seg.wybierz_pole(j), i).setPosition(x_orig + 800, 100 + (100 * i));
                win.draw(getCard(seg.wybierz_pole(j), i));
            }
            else if(seg.wybierz_pole(j).empty())
            {
                empty.setPosition(x_orig + 800, 100 + (100 * i));
                win.draw(empty);
            }
        }
    }

//    empty.setPosition(200, 200);
//    win.draw(empty);

}
