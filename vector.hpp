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
    //Default & Paramaterized Constuctor
    VectorType();
    VectorType(size_t size);

    //I/O Operators
    friend std::istream& operator>>(std::istream& is, VectorType& v);
    friend std::ostream& operator<<(std::ostream& os, const VectorType& v);
};

#endif