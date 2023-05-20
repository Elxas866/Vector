#include <iostream>
#include "Vector.h"

using namespace std;

int main() {
    Vector v1(1, 2, 3);
    Vector v2(4, 5, 6);

    Vector v3 = v1 + v2;
    Vector v4 = v1 - v2;
    Vector v5 = v2;

    cout << v3 << endl;
    cout << v4 << endl;
    cout << v5 << endl;

    return 0;
}
