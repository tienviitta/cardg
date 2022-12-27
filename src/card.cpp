#include "card.h"

Card::Card(Rank rank, Suit suit)
    : rank(rank), suit(suit)
{
    // Nothing here!
}

Card::~Card()
{
    // Nothing here!
}

Card::Rank Card::getRank()
{
    return rank;
}

Card::Suit Card::getSuit()
{
    return suit;
}

int Card::getFaceValue()
{
    return static_cast<int>(rank);
}

std::ostream &operator<<(std::ostream &os, const Card &card)
{
    os << "[" << card.suit << ", " << card.rank << "], ";
    return os;
}
