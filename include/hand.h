#ifndef HAND_H
#define HAND_H

#include "card.h"
#include <vector>

class Hand
{
private:
    std::vector<Card *> hand;
public:
    Hand();
    ~Hand();
};

#endif /* HAND_H */
