#include <iostream>
#include "vector.hpp"

VectorType::VectorType(){
    myVector = {};
}

VectorType::VectorType(size_t size){
    myVector.resize(size);
}

std::istream& operator>>(std::istream& is, VectorType& v){
    for (int i = 0; i < v.myVector.size(); i++){
        is >> v.myVector[i];
    }
    return is;
}

std::ostream& operator<<(std::ostream& os, const VectorType& v){
    os << "|";
    for (int i = 0; i < v.myVector.size(); i++){
        if (i == v.myVector.size()-1){
            os << v.myVector[i];
        }
        else {
            os << v.myVector[i] << ", ";
        }
    }
    os << "|";
    return os;
}
