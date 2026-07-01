#ifndef MATRIX_H
#define MATRIX_H

#include <vector>
#include <istream>
#include <ostream>

class MatrixType {
    private:
    std::vector<std::vector<double>> myMatrix;

    public:
    //Default & Paramaterized Constuctor
    MatrixType();
    MatrixType(size_t row, size_t column);

    //Row & Column Initiator
    size_t size_row() const;
    size_t size_column() const;
    
    //Element Access
    

    //I/O Operators
    friend std::istream& operator>>(std::istream& is, MatrixType& m);
    friend std::ostream& operator<<(std::ostream& os, const MatrixType& m);

    //Matrix Functions
    double matrixNorm();
    MatrixType transpose();

    //Aritmethic Operators
   

    //Bool Operators
    


};

#endif