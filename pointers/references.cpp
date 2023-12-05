#include <iostream>

void some(int &a, int &b) {
    a = 100;
    b = 200;
}

void no_ref(int a, int b) {

    a = 1000;
    b = 2000;
}

int main(void) {

    int a = 10;
    int b = 20;
    some(a, b);
    std::cout << a << " " << b;
    no_ref(a, b);
    std::cout << a << " " << b;



    return 0;
}