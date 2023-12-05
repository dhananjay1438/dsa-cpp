#include <iostream>


// passing array as parameter
void do_some(int *arr) {

    arr[0] = 20;

}

void do_else(int arr[]) {
    arr[0] = 30;
}

int main(void) {

    int arr[] = {1, 2, 3, 4, 5};

    do_else(arr);

    std::cout << arr[0];



    return 0;
}