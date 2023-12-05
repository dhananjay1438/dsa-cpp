#include <iostream>

int main(void) {

    int a = 10;
    int *ptr = &a;

    // &a = address of a
    std::cout << "value of &a = " << &a << "\n";
    std::cout << "Value of a = " << a << "\n";
    std::cout << "value of ptr = " << ptr << "\n";
    std::cout << "value of *ptr = " << *ptr << "\n";

    return 0;
}