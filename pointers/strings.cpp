#include <iostream>

int main(void) {

    const char *str = "hello world";


    for (int i = 0; i < 5; i++){
        std::cout << *(str+i);
    }

    // str[i] = *(str+i)
    // (*str) + i
    return 0;
}