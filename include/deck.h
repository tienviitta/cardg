#ifndef DECK_H
#define DECK_H

#include "card.h"
#include <vector>
#include <iostream>

class Deck
{
private:
    std::vector<Card *> deck;
public:
    Deck();
    ~Deck();
    void Shuffle();
    Card * PopCard();
    friend std::ostream &operator<<(std::ostream &os, const Deck &deck);
};

#endif /* DECK_H */
