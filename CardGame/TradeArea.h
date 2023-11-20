#ifndef TRADEAREA_H_
#define TRADEAREA_H_
#include <list>
#include "CardFactory.h"

class TradeArea{

    private:
    
        std::list<Card> cards;

    public:

        //Adds the card to the TradeArea but it does not check if it is legal to place the card
        TradeArea& operator+=(Card*);

        //Returns true if the card can be legally added to the TradeArea.
        //i.e., a card of the same bean is already in the TradeArea
        bool legal(Card*);

        //Removes a card of the corresponding bean name fomr the trade area
        Card* trade(std::string);

        //Returns the numebr of cards currently in the trade area.
        int numCards();

        //Insertion operator to insert all the crads of the trade area to an std::ostream
        friend std::ostream& operator << (std::ostream& o, const TradeArea& pile);

        //Reconstruct from file.
        TradeArea(std::istream&, const CardFactory*);


};

#endif