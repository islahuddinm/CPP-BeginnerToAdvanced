#include <iostream>

// static_cast<> is a type of casting operator. it is operator used for conversions.

int main() {

    int x = 3.14;
    double y = (int) 3.17; // a traditional casting method inherited from C.
    double z = static_cast<int>(3.17); // a modern casting method.

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << z << '\n';
    std::cout << '\n';
    std::cout << ((int) 5.17) << '\n';
    std::cout << static_cast<int>(5.17) << '\n';

    return 0;
}