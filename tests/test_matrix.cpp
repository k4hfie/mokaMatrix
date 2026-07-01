#include "matrix.h"
#include <iostream>

int main(){
    MatrixType mat1(3, 3), mat2(3,3);
    std::cin >> mat1 >> mat2;
    std::cout << '\n' << mat1 << "\n\n" << mat2 << "\n\n";
    
    double norm = mat1.matrixNorm();
    std::cout << "norm: " << norm << "\n\n";
    MatrixType transpose = mat1.transpose();
    std::cout << "transpose:" << "\n" << transpose << "\n\n";
}