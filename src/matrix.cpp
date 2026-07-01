#include "matrix.h"
#include <iostream>
#include <stdexcept>
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
