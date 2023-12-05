#include<iostream>


int main(void) {


    int arr[5] = { 1, 2, 3, 4, 5 };
    int *ptr = arr;
 
    std::cout << ptr << "\n";
    std::cout << arr << "\n";
    std::cout << *ptr << "\n";
    std:: cout << *arr << "\n";

    ptr++;
    std::cout << ptr << "\n";
    std::cout << *ptr << "\n";

    for (int i = 0; i < 4; i++) {

        std::cout << *(ptr + i) << " ";
        // Instead of ptr[i]
    }

    return 0;
}