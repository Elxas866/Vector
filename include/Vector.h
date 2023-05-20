#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

class Vector {
public:
    // Variablen
    double x;
    double y;
    double z;

    // Konstruktoren
    Vector();
    Vector(double x, double y, double z);

    // Operator-Überladungen
    Vector& operator=(const Vector &vector);

    Vector operator+(const Vector &vector);

    Vector operator-(const Vector &vector);

    friend std::ostream& operator<<(std::ostream& stream, const Vector &vector);
};

#endif //VECTOR_H
