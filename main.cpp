#include "deck.h"
#include <iostream>

int main(int, char **)
{
    Deck deck;
    Deck hand_p("Pete");
    Deck hand_j("Juho");
    std::cout << "Deck: " << std::endl
              << deck << std::endl;
    deck.Shuffle();
    std::cout << "Deck: " << std::endl
              << deck << std::endl;
    for (size_t i = 0; i < 5; ++i)
    {
        hand_p.PushCard(std::move(deck.PopCard()));
        hand_j.PushCard(std::move(deck.PopCard()));
    }
    std::cout << "Deck: " << std::endl
              << deck << std::endl;
    std::cout << "Hand: " << std::endl
              << hand_p << std::endl;
    std::cout << "Hand: " << std::endl
              << hand_j << std::endl;
}
