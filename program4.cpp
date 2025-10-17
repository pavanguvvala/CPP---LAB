// To demonstrate the use of custom namespaces in C++

#include <iostream>
using namespace std;
// Custom namespace
namespace Math {
    int add(int a, int b) {
        return a + b;
    }
}
namespace Physics {
    double add(double a, double b) {
        return a + b;
    }
}
