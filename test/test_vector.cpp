#include <iostream>
#include "vector.h"
#include "matrix.h"

int main(){
    VectorType vec1(2);
    VectorType vec2(2);
    std::cin >> vec1 >> vec2;
    std::cout << vec1 << vec2 << "\n";
    try {
        double norm = vec1.vectorNorm();
        double dotproduct = vec1.innerProduct(vec2);
        std::cout << "norm: " << norm << "\ndot product: " << dotproduct << "\n";

        VectorType result = vec1 + vec2;
        std::cout << "addition vector: " << result << "\n";

        result = vec1 - vec2;
        std::cout << "subtraction vector: " << result << "\n";

        result = vec1 * 10;
        std::cout << "scalar multiplication vector: " << result << "\n";

        result = vec1 / 10;
        std::cout << "scalar division vector: " << result << "\n";

        std::cout << vec1 << " == " << vec2 << ": " << (vec1 == vec2) << "\n";
        std::cout << vec1 << " != " << vec2 << ": " << (vec1 != vec2) << "\n";

        std::cout << "vec1[0]: " << vec1[0] << '\n';
        std::cout << "vec2[0]: " << vec2[0] << '\n';

        MatrixType outerproduct = vec1.outerProduct(vec2);
        std::cout << "outerproduct: \n" << outerproduct;
    }

    catch (const std::invalid_argument& e){
        std::cout << "error: " << e.what();
    }
}