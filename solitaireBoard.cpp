//
// Created by janna on 02.06.2019.
//

#include "solitaireBoard.h"
solitaireBoard::solitaireBoard(talia t, segregacja s, plansza p)
        :tal(t), seg(s), pla(p)
{}



///FUNKCJA isRevealed która sprawdza czy karta jest na wierzchu i dająca zezwolenie na wyświetlanie

///Funkcja zaznaczająca kartę i pozwalająca kontrolerowi na poruszanie jej
//void solitaireBoard::selectCard(card wsk) { aktualna_karta = get_number(wsk); } ?

GameState solitaireBoard::get_gamestate()
{
    if(seg.isComplete())
        return FINISHED;
    return RUNNING;
}


