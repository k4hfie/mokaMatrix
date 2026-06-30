#include "tokenizer.h"
#include <sstream>

std::vector<std::string> tokenizeLine(const std::string& line){
    std::vector<std::string> tokenList;
    std::istringstream iss(line);
    std::string token;

    while (iss >> token){
        tokenList.push_back(token);
    }

    return tokenList;
}