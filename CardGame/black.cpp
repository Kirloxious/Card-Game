#include "Card.h"
#include <vector>
class black : public Card{

    private:
        // const std::string CARDNAME = "black";
        // const std::string PRINTNAME = "b";
        // const int COINVALUE1 = 2;
        // const int COINVALUE2 = 4;
        // const int COINVALUE3 = 5;
        // const int COINVALUE4 = 6;
        std::vector<int> cv = {2, 4, 5, 6};

    public: 

        black(std::string n = "black", std::string pn = "b") : Card(n, pn, cv){};
        ~black(){};

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

