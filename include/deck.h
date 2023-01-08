#ifndef DECK_H
#define DECK_H

#include "card.h"
#include <deque>
#include <iostream>
#include <memory>
#include <random>
#include <algorithm>
#include <iterator>

class Deck
{
private:
    std::deque<std::unique_ptr<Card>> deck;
    std::string name;
    std::mt19937 urbg;
public:
    Deck();
    Deck(std::string name);
    ~Deck();
    void Shuffle();
    void Ascending();
    void Descending();
    std::unique_ptr<Card> PopCard();
    void PushCard(std::unique_ptr<Card>);
    friend std::ostream &operator<<(std::ostream &os, const Deck &deck);
};

#endif /* DECK_H */
