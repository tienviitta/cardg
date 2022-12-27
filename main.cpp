#include "deck.h"
#include <iostream>

int main(int, char **)
{
    Deck deck;
    std::cout << "Deck: " << std::endl
              << deck << std::endl;
    deck.Shuffle();
    std::cout << "Deck: " << std::endl
              << deck << std::endl;
    Card * take = deck.PopCard();
    std::cout << "Card: " << std::endl
              << *(take) << std::endl;
    std::cout << "Deck: " << std::endl
              << deck << std::endl;
}

