#include <iostream>
#include "vector.hpp"

VectorType::VectorType(){
    myVector = {};
}

VectorType::VectorType(size_t size){
    myVector.resize(size);
    for (double value : myVector){
        value = 0;
    }
}