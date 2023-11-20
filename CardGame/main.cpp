#include "main.h"

int main(int argc, char const *argv[]){
    
    cout << "hello";
    Card* card = new Blue();
    Card* card2 = new Blue();
    Chain<Blue> chain = Chain<Blue>(); 
    chain += card;
    chain += card2;

    std::cout << chain;
    return 0;

}
