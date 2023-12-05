#include <iostream>

// A function calling itself is recursion
int func(int num) {

    if (num == 0) {
        return 1;
    }
    std::cout << func(num - 1) << "\n";

    return 0;
}

int main(void) {

    std::cout << func(5);
    return 0;
}

