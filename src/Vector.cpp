#include "Vector.h"

using namespace std;

// Constructors
Vector::Vector() {
    x = 0;
    y = 0;
    z = 0;
}

Vector::Vector(double x, double y, double z): x(x), y(y), z(z) {};

// Operator-overloading
Vector& Vector::operator=(const Vector &vector) {
    if (&vector != this) {
        x = vector.x;
        y = vector.y;
        z = vector.z;
    }
    return *this;
}

Vector Vector::operator+(const Vector &vector) {
    Vector result;
    result.x = this->x + vector.x;
    result.y = this->y + vector.y;
    result.z = this->z + vector.z;

    return result;
}

Vector Vector::operator-(const Vector &vector) {
    Vector result;
    result.x = this->x - vector.x;
    result.y = this->y - vector.y;
    result.z = this->z - vector.z;

    return result;
}

Vector Vector::operator*(const Vector &vector) {
    Vector result;
    result.x = (this->y * vector.z) - (this->z * vector.y);
    result.y = (this->z * vector.x) - (this->x * vector.z);
    result.z = (this->x * vector.y) - (this->y * vector.x);

    return result;
}

Vector Vector::operator*(int t) {
    Vector result;
    result.x = (this->x * t);
    result.y = (this->y * t);
    result.z = (this->z * t);

    return result;

}

ostream& operator<<(ostream& stream, const Vector &vector) {
    stream << "(" << vector.x << ", " << vector.y << ", " << vector.z << ")";
    return stream;
}

// Functions
double Vector::scalar_product(const Vector &v) {
    double result = 0;
    result += this->x * v.x;
    result += this->y * v.y;
    result += this->z * v.z;

    return result;
}

bool Vector::isNormalTo(const Vector &v) {
    return this->scalar_product(v) == 0;
}