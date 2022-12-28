#include "card.h"

Card::Card(Rank rank, Suit suit)
    : rank(rank), suit(suit)
{
    // std::cout << "Constructor: " << __func__ << std::endl;
    // Nothing here!
}

Card::~Card()
{
    // std::cout << "Destructor: " << __func__ << std::endl;
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

bool Card::operator<(const Card &card) const
{
    if (suit != card.suit)
    {
        return (suit < card.suit);
    }
    else
    {
        return (rank < card.rank);
    }
}

std::ostream &operator<<(std::ostream &os, const Card &card)
{
    // Note! Rank is from 2 to 14!
    os << Card::RankFace[static_cast<int>(card.rank) - 2] << Card::SuitFace[static_cast<int>(card.suit)] << ", ";
    return os;
}
