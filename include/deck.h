#ifndef DECK_H
#define DECK_H

#include "card.h"
#include <deque>
#include <iostream>
#include <memory>

class Deck
{
private:
    std::deque<std::unique_ptr<Card>> deck_unq;
    std::string name;
public:
    Deck();
    Deck(std::string name);
    ~Deck();
    void Shuffle();
    std::unique_ptr<Card> PopCard();
    void PushCard(std::unique_ptr<Card>);
    friend std::ostream &operator<<(std::ostream &os, const Deck &deck);
};

#endif /* DECK_H */
