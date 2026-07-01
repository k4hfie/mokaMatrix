#include "interface.h"
#include <iostream>

void clearTerminal(){
    std::cout << "\033[2J\033[H";
}

void displayTitle(){
    std::cout << "=============================\n";
    std::cout << "      mokaMatrix v1.0.0\n";
    std::cout << "           by moka\n";
    std::cout << "=============================\n";
}

void displayOptions(){
    std::cout << "Vector\n";
    std::cout << "Matrix\n";
    std::cout << "=============================\n";
}

void displayOptionsVector(){
    std::cout << "            INPUT\n";
    std::cout << "\n";
    std::cout << "Input U\n";
    std::cout << "Input V\n";
    std::cout << "Input Scalar\n";
    std::cout << "=============================\n";
    std::cout << "      VECTOR OPERATIONS\n";
    std::cout << "\n";
    std::cout << "Inner Product\n";
    std::cout << "Outer Product\n";
    std::cout << "=============================\n";
    std::cout << "      BASIC OPERATIONS\n";
    std::cout << "\n";
    std::cout << "U + V\n";
    std::cout << "U - V\n";
    std::cout << "U * Scalar\n";
    std::cout << "U / Scalar\n";
    std::cout << "U == V\n";
    std::cout << "U != V\n";
    std::cout << "=============================\n";
}
