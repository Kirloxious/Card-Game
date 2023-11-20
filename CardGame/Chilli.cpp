#include "Card.h"
#include <vector>
class Chilli : public Card{

    private:
        // const std::string CARDNAME = "Chilli";
        // const std::string PRINTNAME = "C";
        // const int COINVALUE1 = 3;
        // const int COINVALUE2 = 6;
        // const int COINVALUE3 = 8;
        // const int COINVALUE4 = 9;
        std::vector<int> cv = {3, 6, 8, 9};
    public: 

        Chilli(std::string n = "Chilli", std::string pn = "C") : Card(n, pn, cv){};
        ~Chilli(){};

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



};

