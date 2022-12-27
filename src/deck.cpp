#include "deck.h"
#include <algorithm>

Deck::Deck()
    : deck()
{
    deck.reserve(52);
    for (size_t suit = Card::HEARTS; suit != Card::SPADES; ++suit)
    {
        for (size_t rank = Card::TWO; rank != Card::ACE; ++rank)
        {
            deck.push_back(
                new Card(
                    static_cast<Card::Rank>(rank),
                    static_cast<Card::Suit>(suit)));
        }
    }
}

Deck::~Deck()
{
    for (Card *card : deck)
    {
        delete card;
    }
    deck.clear();
}

void Deck::Shuffle()
{
    std::random_shuffle(deck.begin(), deck.end());
}

Card* Deck::PopCard()
{
    return deck.front();
}

std::ostream &operator<<(std::ostream &os, const Deck &deck)
{
    for (size_t card = 0; card < deck.deck.size(); card++)
    {
        os << *(deck.deck[card]);
    }
    return os;
}
