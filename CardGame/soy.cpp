#include "Card.h"
#include <vector>
class soy : public Card{

    private:
        // const std::string CARDNAME = "soy";
        // const std::string PRINTNAME = "s";
        // const int COINVALUE1 = 2;
        // const int COINVALUE2 = 4;
        // const int COINVALUE3 = 6;
        // const int COINVALUE4 = 7;
        std::vector<int> cv = {2,4,6,7};
    public: 
        soy(std::string n = "soy", std::string pn = "s") : Card(n, pn, cv){};
        ~soy(){};
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

        // soy(){};
        // ~soy(){};

};

