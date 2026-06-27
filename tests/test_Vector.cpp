#include <iostream>
#include "vector.hpp"

int main(){
    VectorType vec1(1);
    VectorType vec2(2);
    std::cin >> vec1 >> vec2;
    std::cout << vec1 << vec2;
    try {
        double norm = vec1.vectorNorm();
        double dotproduct = vec1.dotProduct(vec2);
        std::cout << "norm: " << norm << "\ndot product: " << dotproduct;
    }

    catch (const std::invalid_argument& e){
        std::cout << "error: " << e.what();
    }
}