#include "Vector.h"

using namespace std;

// Konstruktoren
Vector::Vector() {
    x = 0;
    y = 0;
    z = 0;
}

Vector::Vector(double x, double y, double z): x(x), y(y), z(z) {};

// Operator-Überladungen
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

ostream& operator<<(ostream& stream, const Vector &vector) {
    stream << "(" << vector.x << ", " << vector.y << ", " << vector.z << ")";
    return stream;
}