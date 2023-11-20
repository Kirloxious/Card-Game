#ifndef HAND_H_
#define HAND_H_

#include <queue>
#include <list>
#include "Card.h"

class Hand{
    private:

        std::list<Card> hand;
    public:
        //Adds the card to the rear of the hand.
        Hand& operator+=(Card*);

        //Returns and removes the top card from the player's hand.
        Card* play();

        //Returns but does not remove the top card form the players hand.
        Card* top();

        //Returns and removes the Card at a given index.
        Card* operator[](int);

        //Print Hand on an std::ostream. Prints all the cards from the hand in order.
        friend std::ostream& operator << (std::ostream& o, const Hand& hand);

        //Reconstruct from file.
        Hand(std::istream&, const CardFactory*);

        Hand(/* args */);
        ~Hand();
};

#endif