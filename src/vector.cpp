#include <iostream>
#include <cmath>
#include <stdexcept>
#include <cstddef>
#include "vector.h"

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

void VectorType::validateVector(const VectorType& other) const {
    validateNotEmpty();
    other.validateNotEmpty();
    validateSameSize(other);
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
    validateVector(other);

    double result = 0;
    for(size_t i = 0; i < myVector.size(); i++){
        result += myVector[i] * other.myVector[i];
    }
    return result;
}

VectorType VectorType::operator+(const VectorType& other) const {
    validateVector(other);
    
    VectorType resultVector(myVector.size());
    for(size_t i = 0; i < myVector.size(); i++){
        resultVector.myVector[i] = myVector[i] + other.myVector[i];
    }
    return resultVector;
}

VectorType VectorType::operator-(const VectorType& other) const {
    validateVector(other);
    
    VectorType resultVector(myVector.size());
    for(size_t i = 0; i < myVector.size(); i++){
        resultVector.myVector[i] = myVector[i] - other.myVector[i];
    }
    return resultVector;
}

VectorType VectorType::operator*(const double scalar) const {
    validateNotEmpty();
    
    VectorType resultVector(myVector.size());
    for(size_t i = 0; i < myVector.size(); i++){
        resultVector.myVector[i] = myVector[i] * scalar;
    }
    return resultVector;
}

VectorType VectorType::operator/(const double scalar) const {
    validateNotEmpty();
    if (scalar == 0){
        throw std::invalid_argument("cannot divide by zero");
    }

    VectorType resultVector(myVector.size());
    for(size_t i = 0; i < myVector.size(); i++){
        resultVector.myVector[i] = myVector[i] / scalar;
    }
    return resultVector;
}

bool VectorType::operator==(const VectorType& other) const {
    validateVector(other);

    bool result = true;
    for (size_t i = 0; i < myVector.size(); i++){
        if (myVector[i] != other.myVector[i]){
            result = false;
        }
    }
    return result;
}

bool VectorType::operator!=(const VectorType& other) const {
    bool result = false;
    for (size_t i = 0; i < myVector.size(); i++){
        if (myVector[i] != other.myVector[i]){
            result = true;
        }
    }
    return result;
}
