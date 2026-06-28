#include <cstdio>
#include "interface.hpp"

void clearTerminal(){
    printf("\033[2J\033[H");
}

void displayTitle(){
    printf("=============================\n");
    printf("      mokaMatrix v1.0.0\n");
    printf("           by moka\n");
    printf("=============================\n");
}

void displayOptions1(){
    printf("1. Vector\n");
    printf("2. Matrix\n");
    printf("=============================\n");
}
