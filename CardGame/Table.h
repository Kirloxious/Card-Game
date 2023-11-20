#ifndef TABLE_H_
#define TABLE_H_

#include "Player.h"
#include "Deck.h"
#include "DiscardPile.h"
#include "TradeArea.h"
#include "CardFactory.h"
//Main game manager class.
class Table{
    private:
        Player player1; 
        Player player2;
        Deck deck;
        DiscardPile discardPile;
        TradeArea tradeArea;
    public:
        //Returns true whena  player has won.
        //The name of the player is returned by reference (in argument)
        //The winning condition is that all cards from the deck must have been picked up and then the player with the most coins wins.
        bool win(std::string&);

        //Prints the top card of the player's hand (false) or all of the player's hand (true)
        void printHand(bool);

        //Print a Table to an std::ostream.
        //Both players, discard pile and trading area are printed. 
        friend std::ostream& operator << (std::ostream& o, const Table& table);

        //Reconstruct from file.
        Table(std::istream&, const CardFactory*);
};

#endif