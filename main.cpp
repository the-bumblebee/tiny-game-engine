#include <iostream>
#include "Vector3d.h"

using namespace std;
using namespace TinyEngine;

int main() {
    Vector3d x = Vector3d(2, 4, 5);
    Vector3d y = Vector3d(1, 1, 1);
    Vector3d z = Vector3d(1.1, 0, 1);
    Vector3d k = z % x;
    cout<<k<<" "<<z<<"\n";
    return 0;
}
