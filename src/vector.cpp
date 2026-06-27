#include <iostream>
#include <cmath>
#include <stdexcept>
#include <cstddef>
#include "vector.hpp"

VectorType::VectorType(){
    myVector = {};
}

VectorType::VectorType(size_t size){
    myVector.resize(size);
}

void VectorType::validateNotEmpty() const {
    if (myVector.empty()){
        throw std::invalid_argument("vector must be not empty");
    }
}

void VectorType::validateSameSize(const VectorType& other) const {
    if (myVector.size() != other.myVector.size()){
        throw std::invalid_argument("vectors must be the same size");
    }
}

std::istream& operator>>(std::istream& is, VectorType& v){
    for (size_t i = 0; i < v.myVector.size(); i++){
        is >> v.myVector[i];
    }
    return is;
}

std::ostream& operator<<(std::ostream& os, const VectorType& v){
    os << "|";
    for (size_t i = 0; i < v.myVector.size(); i++){
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

double VectorType::vectorNorm() const {
    validateNotEmpty();

    double result = 0;
    for (double value : myVector){
        result += pow(value, 2);
    }
    return sqrt(result);
}

double VectorType::dotProduct(const VectorType& other) const {
    validateNotEmpty();
    other.validateNotEmpty();;
    validateSameSize(other);

    double result = 0;
    for(size_t i = 0; i < myVector.size(); i++){
        result += myVector[i] * other.myVector[i];
    }
    return result;
}
