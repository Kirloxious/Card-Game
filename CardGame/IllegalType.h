#ifndef ILLEGALTYPE_CPP_
#define ILLEGALTYPE_CPP_

#include <iostream>

class IllegalType : std::exception{
    private:
        std::string message;
    public:

        std::string what(){
            return message;
        }
        IllegalType(std::string msg) : message(msg){}
};

#endif

