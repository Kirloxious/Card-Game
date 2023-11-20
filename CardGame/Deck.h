#ifndef DECK_H_
#define DECK_H_

#include <vector>
#include "CardFactory.h"
#include "Card.h"


class Deck : public std::vector<Card*>{

    public:

        //Returns and removes the top card from the deck.
        Card* draw(){
            Card* card = this->front();
            this->erase(begin());
            return card;
        }

        //Insertion operator to insert all the cards in the deck to an std::ostream.
        friend std::ostream& operator << (std::ostream& o, const Deck& deck);

        //Reconstructs the deck from file.
        // Deck(std::istream&, const CardFactory*);


        Deck(){};
        virtual ~Deck(){};
};

#endif