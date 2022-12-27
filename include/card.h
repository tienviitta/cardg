#ifndef CARD_H
#define CARD_H

#include <iostream>

class Card
{
public:
    enum Suit
    {
        HEARTS,
        DIAMONDS,
        CLUBS,
        SPADES
    };
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
