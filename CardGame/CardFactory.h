#ifndef CARDFACTORY_H_
#define CARDFACTORY_H_

#include "Deck.h"

class CardFactory{
    private:
        /* data */
    public:
        //Returns a pointer to the only instance of CardFactory.
        static CardFactory* getFactory();

        //Returns a deck with all 104 bean cards that are shuffled.
        Deck getDeck();

        //Create all the cards in the numbers needed for the game as presented in the table.
        CardFactory();

        ~CardFactory();
};

CardFactory::CardFactory(){
}

CardFactory::~CardFactory()
{
}

#endif