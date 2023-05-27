#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

class Vector {
public:
    // Attributes
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

    Vector operator*(const Vector &vector);
    Vector operator*(int t);


    friend std::ostream& operator<<(std::ostream& stream, const Vector &vector);

    // Functions
    double scalar_product(const Vector &v);
    bool isNormalTo(const Vector &v);
};

#endif //VECTOR_H
