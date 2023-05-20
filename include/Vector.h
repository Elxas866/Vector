#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

class Vector {
public:
    // Variables
    double x;
    double y;
    double z;

    // Constructors
    Vector();
    Vector(double x, double y, double z);

    // Operator-overloading
    Vector& operator=(const Vector &vector);

    Vector operator+(const Vector &vector);

    Vector operator-(const Vector &vector);

    friend std::ostream& operator<<(std::ostream& stream, const Vector &vector);
};

#endif //VECTOR_H
