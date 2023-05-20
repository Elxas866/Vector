#include <iostream>
#include "Vector.h"

using namespace std;

int main() {
    // Initialize Vectors
    Vector v1(1, 2, 3);
    Vector v2(4, 5, 6);

    // Test operators
    Vector v3 = v1 + v2;
    Vector v4 = v1 - v2;
    Vector v5 = v2;
    double scalar_product = v1*v2;

    // Print results
    cout << v3 << endl;
    cout << v4 << endl;
    cout << v5 << endl;
    cout << scalar_product << endl;

    return 0;
}
