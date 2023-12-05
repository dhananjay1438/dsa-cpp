#include <iostream>

void handle(int **pointer_to_pointer) {

    **pointer_to_pointer = 20;
    std::cout << pointer_to_pointer << "\n";
    std::cout << *pointer_to_pointer << "\n";

}

void handle_simple(int *ptr) {

    std::cout << ptr << "\n";
    std::cout << *ptr << "\n";

}

int main(void) {

    int x = 10;
    int *ptr = &x;

    std::cout << ptr << "\n";
    handle(&ptr);
    std::cout << x << " " << *ptr << " ";



    return 0;
}