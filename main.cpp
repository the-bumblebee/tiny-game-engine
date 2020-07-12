#include <iostream>
#include "Vector3d.h"
#include "Matrix3n.h"

using namespace std;
using namespace TinyEngine;

int main() {
    Matrix3n x = Matrix3n(1,2,3,4,5,6,7,8,9);
    cout << "\n" << x << "\n";
    return 0;
}
