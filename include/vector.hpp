#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <vector>
#include <istream>
#include <ostream>

class VectorType {
    private:
    std::vector<double> myVector;

    public:
    //Default & Paramaterized Constuctor
    VectorType();
    VectorType(size_t size);

    //Helper Functions for Error Handling
    void validateNotEmpty() const;
    void validateSameSize(const VectorType& other) const;
    void validateVector(const VectorType& other) const;

    //I/O Operators
    friend std::istream& operator>>(std::istream& is, VectorType& v);
    friend std::ostream& operator<<(std::ostream& os, const VectorType& v);

    //General Functions
    double vectorNorm() const;
    double dotProduct(const VectorType& other) const;

    //Aritmethic Operators
    VectorType operator+(const VectorType& other) const;
    VectorType operator-(const VectorType& other) const;
    VectorType operator*(const double scalar) const;
    VectorType operator/(const double scalar) const;

    //Bool Operators
    bool operator==(const VectorType& other) const;
    bool operator!=(const VectorType& other) const;
};

#endif