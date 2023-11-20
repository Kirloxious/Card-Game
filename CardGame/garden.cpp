#include "Card.h"
#include <vector>
class garden : public Card{

    private:
        // const std::string CARDNAME = "garden";
        // const std::string PRINTNAME = "g";
        // const int COINVALUE2 = 2;
        // const int COINVALUE3 = 3;

        std::vector<int> cv = {2, 3};
        
    public: 
        garden(std::string n = "garden", std::string pn = "g") : Card(n, pn, cv){};
        ~garden(){};
        // int getCardsPerCoin(int coins){
        //     switch (coins)
        //     {
        //     case 2:
        //         return COINVALUE2;
        //         break;
        //     case 3:
        //         return COINVALUE3;
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

        // garden(){};
        // ~garden(){};
};

