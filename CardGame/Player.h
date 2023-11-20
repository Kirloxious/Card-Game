#ifndef PLAYER_H_
#define PLAYER_H_

#include "Chain.h"
#include "Card.h"

class Player{
    private:
        /* data */
    public:

        //Creates a Player with given name.
        Player(std::string&);

        //Get the name of the Player.
        const std::string getName();

        //get then number of coins currently held by the player.
        int getNumCoins();

        //Add a number of coins
        Player& operator+=(int);

        //Returns either 2 or 3;
        int getMaxNumChains();

        //Returns the number of non-zero chains.
        int getNumChains();

        //Returns the chain at position i.
        Chain<Card>& operator[](int i);

        //Adds an empty third chain to the player for three coins. The function reduces the coin count for the player by two. 
        //If the player does not have enought coins than an exception NotEnoughCoins is thrown.
        void buyThirdChain();

        //Prints the top card of the player's hand (false) or all of the player's hand (true) to the supplied ostream. 
        void printHand(std::ostream&, bool);

        //Print a player to an std::ostream. 
        friend std::ostream& operator << (std::ostream& o, const Player& player);

        //Reconstruct from file.
        Player(std::istream&, const CardFactory*);


        Player(/* args */);
        ~Player();
};

#endif