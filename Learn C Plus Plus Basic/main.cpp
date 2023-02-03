#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;

    int x = 10;

    std::cout << "x = " << x << std::endl;

    // create a var with address of x
    int *p = &x;

    // print the address of x
    std::cout << "p = " << p << std::endl;

    return 0;
}
