#ifndef MATRIX3N_H
#define MATRIX3N_H

#include <iostream>

namespace TinyEngine {

    class Matrix3n {

    private:

    public:
        float matrixData[9] = {0.0};
        
        //Constructors
        Matrix3n();
        Matrix3n(float m0, float m3, float m6, float m1, float m4, float m7, float m2, float m5, float m8);
        
        //Copy constructors
        Matrix3n& operator=(Matrix3n &value);

        //Deconstructor
        ~Matrix3n();

        //Overloading << operator for printing Matrix3n object
        friend std::ostream& operator<< (std::ostream &out, const Matrix3n &value);
    };
}

#endif