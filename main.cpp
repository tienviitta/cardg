#include "deck.h"
#include <iostream>
// #include <ncurses.h>

int main(int, char **)
{
    // // init screen and sets up screen
    // initscr();

    // // print to screen
    // printw("Hello World");

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

    deck.Ascending();
    hand_p.Ascending();
    hand_j.Ascending();
    std::cout << "Deck: " << std::endl
              << deck << std::endl;
    std::cout << "Hand: " << std::endl
              << hand_p << std::endl;
    std::cout << "Hand: " << std::endl
              << hand_j << std::endl;

    deck.Descending();
    hand_p.Descending();
    hand_j.Descending();
    std::cout << "Deck: " << std::endl
              << deck << std::endl;
    std::cout << "Hand: " << std::endl
              << hand_p << std::endl;
    std::cout << "Hand: " << std::endl
              << hand_j << std::endl;

    // // refreshes the screen
    // refresh();

    // // pause the screen output
    // getch();

    // // deallocates memory and ends ncurses
    // endwin();

    return 0;
}
