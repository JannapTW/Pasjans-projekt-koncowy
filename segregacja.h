//
// Created by janna on 19.06.2019.
//

#ifndef PASJANS_PROJEKT_KONCOWY_SEGREGACJA_H
#define PASJANS_PROJEKT_KONCOWY_SEGREGACJA_H

#include "card.h"
#include <vector>

class segregacja : public card
{
    std::vector<card> segregacja_serce;
    std::vector<card> segregacja_karo;
    std::vector<card> segregacja_trefl;
    std::vector<card> segregacja_pik;
public:
    segregacja();
    void put_card(std::vector<card> &, std::vector<card> &); /// odkładasz push.backiem, wklejasz kartę
    void take_card(std::vector<card> &); /// zabierasz popbackiem

    const bool isOneHigher(const std::vector<card> &,const std::vector<card> &); // Do segregacji
    const bool isOneLower(const std::vector<card> &,const std::vector<card> &); // Do planszy
    const int lengthOf(const std::vector<card> &);

    std::vector<card> & wybierz_pole(const int &);


    bool isComplete();
};

#endif //PASJANS_PROJEKT_KONCOWY_SEGREGACJA_H
