#include "tokenizer.h"
#include <iostream>

int main(){
    std::string line = "i am hello groot";
    std::vector<std::string> list = tokenizeLine(line);
    for (const auto& token : list){
        std::cout << token << ' ';
    }
}


