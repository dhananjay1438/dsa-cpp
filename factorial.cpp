#include <iostream>


long fact(long num) {
    if (num <= 1) {
        return 1;
    }
    return num * fact(num-1);
}

int main(void) {

    // std::cout << fact(30);

    int num = 5;
    int ans = 1;

    std::cout << ans;

    // branch prediction

    }

    return 0;
}