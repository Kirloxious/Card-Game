#include "Card.h"
#include <vector>
class Red : public Card{

    private:
        // const std::string CARDNAME = "Red";
        // const std::string PRINTNAME = "R";
        // const int COINVALUE1 = 2;
        // const int COINVALUE2 = 3;
        // const int COINVALUE3 = 4;
        // const int COINVALUE4 = 5;

        std::vector<int> cv = {2, 3, 4, 5};

    public: 
        Red(std::string n = "Red", std::string pn = "R") : Card(n, pn, cv){};
        ~Red(){};

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

