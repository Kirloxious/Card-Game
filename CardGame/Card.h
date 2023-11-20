#ifndef CARD_H_
#define CARD_H_
#include <iostream>
#include <cstdlib>
#include <vector>

//Abstract Card Class
class Card{
    protected:
        Card(std::string cardName, std::string printName, std::vector<int> coinValues) : CARDNAME(cardName), PRINTNAME(printName), COINVALUES(coinValues){};
        std::string CARDNAME;
        std::string PRINTNAME;
        std::vector<int> COINVALUES;

    public:
        //Global stream insertion operator for printing any object of the class.
        friend std::ostream& operator << (std::ostream& o, const Card& card){
            card.print(o); // delegate the work to a polymorphic member function.
            return o;
        }

        //Check how many cards are necessary to receive the corresponding number of coins
        virtual int getCardsPerCoin(int coins){
            switch (coins)
            {
            case 1:
                return COINVALUES[0];
                break;
            case 2:
                return COINVALUES[1];
                break;
            case 3:
                return COINVALUES[2];
                break;
            case 4:
                return COINVALUES[3];
                break;
            
            default:
                return 0;
                break;
            }
        }; 

        //Returns the full name of the card.
        virtual std::string getName(){ return CARDNAME; };

        //Returns the print name of the card.
        virtual std::string getPrintName(){ return PRINTNAME; };


        //Inserts the first character for the card into the output stream suplied as argument.
        //If the first character is the same for two cards, user uppercase for the first one and lowercase for the second one.
        virtual void print(std::ostream& out) const {out << PRINTNAME;};

        virtual ~Card(){};
};
#endif

