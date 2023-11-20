#include "Card.h"
#include <vector>
class Green : public Card{

    private:
        // const std::string CARDNAME = "Green";
        // const std::string PRINTNAME = "G";
        // const int COINVALUE1 = 3;
        // const int COINVALUE2 = 5;
        // const int COINVALUE3 = 6;
        // const int COINVALUE4 = 7;

        std::vector<int> cv = {3, 5, 6, 7};

    public: 

        Green(std::string n = "Green", std::string pn = "G") : Card(n, pn, cv){};
        ~Green(){};

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
        // out << PRINTNAME;
        // }
};

