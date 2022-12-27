#ifndef CARD_H
#define CARD_H

#include <iostream>

class Card
{
public:
    constexpr static char SuitFace[4] = {'H', 'D', 'C', 'S'};
    enum Suit
    {
        HEARTS,
        DIAMONDS,
        CLUBS,
        SPADES
    };
    constexpr static char RankFace[15] = {'2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A'};
    enum Rank
    {
        TWO = 2,
        THREE,
        FOUR,
        FIVE,
        SIX,
        SEVEN,
        EIGHT,
        NINE,
        TEN,
        JACK,
        QUEEN,
        KING,
        ACE
    };
    Card(Rank rank, Suit suit);
    virtual ~Card();
    Rank getRank();
    Suit getSuit();
    virtual int getFaceValue();
    friend std::ostream &operator<<(std::ostream &os, const Card &card);

private:
    Rank rank;
    Suit suit;
};

#endif /* CARD_H */
