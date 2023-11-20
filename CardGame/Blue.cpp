#include "Card.h"
#include <vector>
class Blue : public Card{

    private:
        // const std::string CARDNAME = "Blue";
        // const std::string PRINTNAME = "B";
        // const int COINVALUE1 = 4;
        // const int COINVALUE2 = 6;
        // const int COINVALUE3 = 8;
        // const int COINVALUE4 = 10;
        std::vector<int> cv = {4, 6, 8, 10};
    public: 
        Blue(std::string n = "Blue", std::string pn = "B") : Card(n, pn, cv){};
        ~Blue(){};

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

        // std::string getPrintName(){ 
        //     return PRINTNAME; 
        // }

        

        // void print(std::ostream& out) const{
        //     out << PRINTNAME;
        // }

        
};

