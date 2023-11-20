#ifndef DISCARDPILE_H_
#define DISCARDPILE_H_

#include "CardFactory.h"
#include <vector>

class DiscardPile{
    private:
        
        std::vector<Card> discardPile;

    public:

        //Discards the card to the pile
        DiscardPile& operator+=(Card*);

        //Returns and removes the tope card from the discard pile
        Card* pickUp();

        //Returns but does not remove the top card from the discard pile.
        Card* top();

        //Insert all the cards in the DiscardPile to an std::ostream.
        void print(std::ostream&);

        //Insertion operator to insert only the top card of the discard pile to and std::ostream.
        friend std::ostream& operator << (std::ostream& o, const DiscardPile& pile);

        //Reconstruct from file.
        DiscardPile(std::istream&, const CardFactory*);

        DiscardPile(/* args */);
        ~DiscardPile();
};

#endif