#ifndef VECTOR3D_H
#define VECTOR3D_H

#include <iostream>

namespace TinyEngine {
    class Vector3d {

    private:

    public:
        float x;
        float y;
        float z;

        //Constructors
        Vector3d();
        Vector3d(float x_val, float y_val, float z_val);

        //Deconstructor
        ~Vector3d();

        //Copy constructors
        Vector3d(const Vector3d &v);
        Vector3d& operator=(const Vector3d &v);

        //Vector addition
        void operator+=(const Vector3d &v);
        Vector3d operator+(const Vector3d &v) const;

        //Vector subtraction
        void operator-=(const Vector3d &v);
        Vector3d operator-(const Vector3d &v) const;

        //Scalar multiplication
        void operator*=(float s);
        Vector3d operator*(float s) const;

        //Division by scalar
        void operator/=(float s);
        Vector3d operator/(float s) const;

        //Dot product (* operator can be used)
        float operator*(const Vector3d &v) const;
        float dot(const Vector3d &v) const;

        //Cross product (% operator can be used)
        Vector3d cross(const Vector3d &v) const;
        void operator%=(const Vector3d &v);
        Vector3d operator%(const Vector3d &v) const;

        //Magnitude
        float magnitude() const;

        //Unit vector
        void normalize();

        //Overloading << operator for printing class object.
        friend std::ostream& operator<< (std::ostream &out, const Vector3d &v);
    };
}

#endif
