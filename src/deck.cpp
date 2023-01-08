#include "deck.h"
#include <algorithm>
#include <iostream>
#include <memory>
#include <random>

Deck::Deck()
    : deck(), name("Dealer"), urbg()
{
    // std::cout << "Constructor: " << __func__ << std::endl;
    for (size_t suit = Card::HEARTS; suit <= Card::SPADES; ++suit)
    {
        for (size_t rank = Card::TWO; rank <= Card::ACE; ++rank)
        {
            deck.push_front(
                std::make_unique<Card>(
                    static_cast<Card::Rank>(rank),
                    static_cast<Card::Suit>(suit)));
        }
    }
    // TODO: Seed with time when finished etc.?!
    urbg.seed(654321);
}

Deck::Deck(std::string name)
    : deck(), name(name), urbg()
{
    // std::cout << "Constructor: " << __func__ << std::endl;
    // TODO: Seed with time when finished etc.?!
    urbg.seed(123456);
}

Deck::~Deck()
{
    // std::cout << "Destructor: " << __func__ << std::endl;
}

void Deck::Shuffle()
{
    std::shuffle(deck.begin(), deck.end(), urbg);
}

void Deck::Ascending()
{
    std::sort(deck.begin(), deck.end());
}

void Deck::Descending()
{
    std::sort(deck.rbegin(), deck.rend());
}

std::unique_ptr<Card> Deck::PopCard()
{
    // Take Card from the Deck
    std::unique_ptr<Card> card = std::move(deck.front());
    deck.pop_front();
    return card;
}

void Deck::PushCard(std::unique_ptr<Card> card)
{
    // Push Card to the fron of the Deck
    deck.push_front(std::move(card));
}

std::ostream &operator<<(std::ostream &os, const Deck &deck)
{
    os << deck.name << ": ";
    for (size_t card = 0; card < deck.deck.size(); card++)
    {
        // Dereference Card pointer
        os << *(deck.deck[card]);
    }
    return os;
}
