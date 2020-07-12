#include <iostream>
#include "Matrix3n.h"

namespace TinyEngine {

    //Consturctors
    Matrix3n::Matrix3n() {

        for(int i = 0; i < 9; i++) {
            this->matrixData[i] = 0.0f;
        }

        this->matrixData[0] = 1.0f;
        this->matrixData[4] = 1.0f;
        this->matrixData[8] = 1.0f;
    }

    Matrix3n::Matrix3n(float m0, float m3, float m6, float m1, float m4, float m7, float m2, float m5, float m8) {

        // Column major format
        // m0 m3 m6
        // m1 m4 m7
        // m2 m5 m8

        this->matrixData[0] = m0;
        this->matrixData[3] = m3;
        this->matrixData[6] = m6;

        this->matrixData[1] = m1;
        this->matrixData[4] = m4;
        this->matrixData[7] = m7;

        this->matrixData[2] = m2;
        this->matrixData[5] = m5;
        this->matrixData[8] = m8;
    }

    // //Copy constructor
    Matrix3n& Matrix3n::operator=(Matrix3n &value)  {

        for(int i = 0; i < 9; i++) {
            this->matrixData[i] = value.matrixData[i];
        }

        return *this;

    }

    //Deconstructor
    Matrix3n::~Matrix3n() {}

    //Overloading << operator for printing class object.
    std::ostream& operator<<(std::ostream &out, const Matrix3n &value) {
        out << "Matrix3n(";
        for (int i = 0; i < 3; i++) {
            out << "\n" << value.matrixData[i] << " " << value.matrixData[i + 3] << " " << value.matrixData[i + 6];
        }
        out << ")";
        return out;
    }
}