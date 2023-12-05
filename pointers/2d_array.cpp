#include <iostream>

int main(void) {


    int **two_d_array = new int* [5];

    for (int i = 0; i < 5; i++) {
        // same as *(two_d_array + i)
        two_d_array[i] = new int[10];
    }


    return 0;
}