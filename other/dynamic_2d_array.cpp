#include <iostream>

int main(void) {

    int rows = 5;
    int cols = 4;
    int **arr = new int*[rows];

    for (int i = 0; i < 5; i++) {
        arr[i] = new int[cols];
    }

    return 0;
}