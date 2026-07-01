#include "matrix.h"
#include <iostream>
#include <stdexcept>
#include <cmath>
#include <cstddef>

MatrixType::MatrixType(){
    myMatrix = {};
}

MatrixType::MatrixType(size_t row, size_t column){
    myMatrix.resize(row);
    for (auto& r : myMatrix){
        r.resize(column);
    }
}

size_t MatrixType::size_row() const {
    return myMatrix.size();
}

size_t MatrixType::size_column() const {
    return myMatrix[0].size();
}

std::istream& operator>>(std::istream& is, MatrixType& m){
    for (size_t i = 0; i < m.size_row(); i++){
        for (size_t j = 0; j < m.size_column(); j++){
            is >> m.myMatrix[i][j];
        }
    }
    return is;
}

std::ostream& operator<<(std::ostream& os, const MatrixType& m){
    for (size_t i = 0; i < m.size_row(); i++){
        for (size_t j = 0; j < m.size_column(); j++){
                 os << m.myMatrix[i][j] << " ";
        }

        if (i < m.size_row()-1){
            os << '\n';
        }
    }
    return os;
}

double MatrixType::matrixNorm(){
    double result;
    for (size_t i = 0; i < size_row(); i++){
        for (size_t j = 0; j < size_column(); j++){
            result += myMatrix[i][j];
        }
    }
    return sqrt(result);
}

MatrixType MatrixType::transpose(){
    MatrixType result(size_row(), size_column());
    for (size_t i = 0; i < size_row(); i++){
        for (size_t j = 0; j < size_column(); j++){
            if (i != j){
                result.myMatrix[i][j] = myMatrix[j][i];
            }
            else {
                result.myMatrix[i][j] = myMatrix[i][j];
            }
        }
    }
    return result;
}
