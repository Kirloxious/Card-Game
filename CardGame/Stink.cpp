#include "Card.h"
#include <vector>
class Stink : public Card{

    private:
        // const std::string CARDNAME = "Strink";
        // const std::string PRINTNAME = "S";
        // const int COINVALUE1 = 3;
        // const int COINVALUE2 = 5;
        // const int COINVALUE3 = 7;
        // const int COINVALUE4 = 8;
        std::vector<int> cv = {3, 5, 7, 8};
    public: 
        Stink(std::string n = "Stink", std::string pn = "S") : Card(n, pn, cv){};
        ~Stink(){};
        // int getCardsPerCoin(int coins){
        //     switch (coins)
        //     {
        //     case 1:
        //         return COINVALUE1;
        //         break;
        //     case 2:
        //         return COINVALUE2;
        //         break;
        //     case 3:
        //         return COINVALUE3;
        //         break;
        //     case 4:
        //         return COINVALUE4;
        //         break;
            
        //     default:
        //         return 0;
        //         break;
        //     }
        // }

        // std::string getName(){
        //     return CARDNAME;
        // }

        // void print(std::ostream& out) const{
        //     out << PRINTNAME;
        // }

        // Stink(){};
        // ~Stink(){};

};

