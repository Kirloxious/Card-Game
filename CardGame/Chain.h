#ifndef CHAIN_H_
#define CHAIN_H_

#include <vector>
#include "IllegalType.h"
#include "Chain_base.h"
template <typename T>
class Chain : public Chain_Base{
    private:
        T* cardType;
        std::vector<Card*> cardChain;

        //Returns the size of the chain
        int size() const{
            return cardChain.size();
        }

        //Returns the first elem of the chain
        Card* getFirstElem()const {
            return cardChain.front();
        }
    public:
        //Adds card to the Chain. If the run-time type does not match the template type of the chain 
        //an exception of type IllegalType is raised 
        Chain<T>& operator +=(Card* c){
            try
            {
                if(typeid(*c) != typeid(T)){
                    throw(IllegalType("\nType Mistmatch"));
                }
                cardChain.push_back(c);
            }
            catch(IllegalType e)
            {
                std::cout << "\n Exception: Type Mismatch in insert of new elem to chain";
                exit(-1);
            }
            return *this;            
        };

        //Counts the number of cards in the current chain and returns the number coins according to the function Card::getCardsPerCoin.
        int sell(){
            int numOfCard = cardChain.size();
            return cardType.getCardsPerCoin(numOfCard);
        };

        
        //Print Chain to and std::ostream. Hand prints full name and all bean. Ex: Red   R R R R 
        friend std::ostream& operator << (std::ostream& o, const Chain<T>& chain){
                if(chain.size()>0){
                    o << '\n'<< chain.getFirstElem()->getName() << '\t';
                    for(int i = 0; i < chain.size(); i++){
                        o << chain.getFirstElem()->getPrintName() << " ";
                    }
                }
                return o;
            };

        //Reconstructs the chain from file when a game is resumed.
        Chain(std::istream&, const CardFactory*);

        Chain(){};

        ~Chain(){};
};

#endif