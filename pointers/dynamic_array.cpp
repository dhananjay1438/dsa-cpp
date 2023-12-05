#include <iostream>


int main(void) {

    // This can be used
    int *arr = (int *) malloc(5 * sizeof(int));
    std::cout << sizeof(arr);

    // And also this can be used
    int *two = (int *) calloc(5, sizeof(int));
    std::cout << sizeof(two);


    // Is used to reallocate memory
    int *new_arr = (int *) realloc(arr, 10 * sizeof(int));
    std::cout << sizeof(new_arr);


    // Deletes the memory occupied by pointer to array 'two'
    free(two);

    // new and delete in c++

    int *example1 = new int[5];

    example1[0] = 10;


    // Deletes the memory occupied by pointer to array 'example1'
    delete example1;

    return 0;
}