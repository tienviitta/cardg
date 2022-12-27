#include "deck.h"
#include <algorithm>
#include <iostream>
#include <memory>

Deck::Deck()
    : deck_unq(), name("Dealer")
{
    // std::cout << "Constructor: " << __func__ << std::endl;
    for (size_t suit = Card::HEARTS; suit <= Card::SPADES; ++suit)
    {
        for (size_t rank = Card::TWO; rank <= Card::ACE; ++rank)
        {
            deck_unq.push_front(
                std::make_unique<Card>(
                    static_cast<Card::Rank>(rank),
                    static_cast<Card::Suit>(suit)));
        }
    }
}

Deck::Deck(std::string name)
    : deck_unq(), name(name)
{
    // std::cout << "Constructor: " << __func__ << std::endl;
}

Deck::~Deck()
{
    // std::cout << "Destructor: " << __func__ << std::endl;
}

void Deck::Shuffle()
{
    std::random_shuffle(deck_unq.begin(), deck_unq.end());
}

std::unique_ptr<Card> Deck::PopCard()
{
    // Take Card from the Deck
    std::unique_ptr<Card> card = std::move(deck_unq.front());
    deck_unq.pop_front();
    return card;
}

void Deck::PushCard(std::unique_ptr<Card> card)
{
    // Push Card to the fron of the Deck
    deck_unq.push_front(std::move(card));
}

std::ostream &operator<<(std::ostream &os, const Deck &deck)
{
    os << deck.name << ": ";
    for (size_t card = 0; card < deck.deck_unq.size(); card++)
    {
        // Dereference Card pointer
        os << *(deck.deck_unq[card]);
    }
    return os;
}
