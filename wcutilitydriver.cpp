#include "wcutility.h"
#include <string>
#include <iostream>

int main(){

    std::string str;
    while (std::getline(std::cin,str))
    {
        SNGSIY006::wcutils(str);
        std::string str;
    }
    SNGSIY006::countLinesWordsLetter();
    
    return 0; 
}
