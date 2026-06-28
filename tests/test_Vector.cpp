#include <iostream>
#include "vector.hpp"

int main(){
    VectorType vec1(2);
    VectorType vec2(2);
    std::cin >> vec1 >> vec2;
    std::cout << vec1 << vec2 << "\n";
    try {
        double norm = vec1.vectorNorm();
        double dotproduct = vec1.dotProduct(vec2);
        std::cout << "norm: " << norm << "\ndot product: " << dotproduct << "\n";

        VectorType result = vec1 + vec2;
        std::cout << "addition vector: " << result << "\n";

        result = vec1 - vec2;
        std::cout << "subtraction vector: " << result << "\n";

        result = vec1 * 10;
        std::cout << "scalar multiplication vector: " << result << "\n";

        result = vec1 / 10;
        std::cout << "scalar division vector: " << result << "\n";
    }

    catch (const std::invalid_argument& e){
        std::cout << "error: " << e.what();
    }
}