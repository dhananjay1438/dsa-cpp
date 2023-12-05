#include <iostream>

int main(void) {


    std::unique_ptr<int> u_ptr;
    int a = 10;

    u_ptr = std::make_unique<int>(10); 

    // Can't do this
    // std::unique_ptr<int> another_ptr = u_ptr;

    std::cout << *u_ptr << " ";

    int *ptr = &a;
    *ptr = 30;

    std::cout << *u_ptr << " ";
    std::cout << *ptr << " ";

    std::cout << u_ptr << " " << ptr << " " << &a;

    return 0;
}