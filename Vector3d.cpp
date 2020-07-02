#include <iostream>
#include <math.h>
#include "Vector3d.h"

namespace TinyEngine {
    //Constructors
    Vector3d::Vector3d():x(0.0), y(0.0), z(0.0) {}
    Vector3d::Vector3d(float x_val, float y_val, float z_val): x(x_val), y(y_val), z(z_val) {}

    //Deconstructor
    Vector3d::~Vector3d(){}

    //Copy constructors
    Vector3d::Vector3d(const Vector3d& v): x(v.x), y(v.y), z(v.z) {}
    Vector3d& Vector3d::operator=(const Vector3d& v) {
        this->x = v.x;
        this->y = v.y;
        this->z = v.z;
        return *this;
    }

    //Vector addition
    void Vector3d::operator+=(const Vector3d& v) {
        this->x += v.x;
        this->y += v.y;
        this->z += v.z;
    }
    Vector3d Vector3d::operator+(const Vector3d& v) const {
        return Vector3d(this->x+v.x, this->y+v.y, this->z+v.z);
    }

    //Vector subtraction
    void Vector3d::operator-=(const Vector3d& v) {
        this->x -= v.x;
        this->y -= v.y;
        this->z -= v.z;
    }
    Vector3d Vector3d::operator-(const Vector3d& v) const{
        return Vector3d(this->x-v.x, this->y-v.y, this->z-v.z);
    }

    //Scalar multiplication
    void Vector3d::operator*=(float s) {
        this->x *= s;
        this->y *= s;
        this->z *= s;
    }
    Vector3d Vector3d::operator*(float s) const {
        return Vector3d(this->x*s, this->y*s, this->z*s);
    }

    //Division by scalar
    void Vector3d::operator/=(float s) {
        this->x /= s;
        this->y /= s;
        this->z /= s;
    }
    Vector3d Vector3d::operator/(float s) const {
        return Vector3d(this->x/s, this->y/s, this->z/s);
    }

    //Dot product (* operator can be used)
    float Vector3d::operator*(const Vector3d& v) const {
        return this->x*v.x + this->y*v.y + this->z*v.z;
    }
    float Vector3d::dot(const Vector3d& v) const {
        return this->x*v.x + this->y*v.y + this->z*v.z;
    }

    //Cross product (% operator can be used)
    Vector3d Vector3d::cross(const Vector3d& v) const {
        return Vector3d(this->y*v.z - this->z*v.y,
                        this->z*v.x - this->x*v.z,
                        this->x*v.y - this->y*v.x);
    }
    void Vector3d::operator%=(const Vector3d& v) {
        *this = this->cross(v);
    }
    Vector3d Vector3d::operator%(const Vector3d& v) const {
        return Vector3d(this->y*v.z - this->z*v.y,
                        this->z*v.x - this->x*v.z,
                        this->x*v.y - this->y*v.x);
    }

    //Magnitude
    float Vector3d::magnitude() const {
        float magnitude = std::sqrt(x*x + y*y + z*z);
        return magnitude;
    }

    //Unit vector
    void Vector3d::normalize() {

        float magnitude = this->magnitude();
        float oneOverMag = 1.0f/magnitude;

        this->x = this->x / oneOverMag;
        this->y = this->y / oneOverMag;
        this->z = this->z / oneOverMag;
    }

    //Overloading << operator for printing class object.
    std::ostream& operator<<(std::ostream &out, const Vector3d& v) {
        out << "Vector3d(" << v.x << ", " << v.y << ", " << v.z << ")";
        return out;
    }
}
