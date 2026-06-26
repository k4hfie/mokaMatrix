#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <vector>
#include <cstddef>
#include <istream>
#include <ostream>

class VectorType {
    private:
    std::vector<double> myVector;

    public:
    //1. Default & Paramaterized Constuctor
    VectorType();
    VectorType(size_t size);

};

#endif