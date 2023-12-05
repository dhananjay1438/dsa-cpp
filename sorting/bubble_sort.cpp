#include <iostream>

void bubble_sort(int arr[], int n) {
    // Sorting array using bubble sort in ascending order

    for (int i = 0; i < n; i++) {
        // n - 1 because we are checking the next element with j+1.
        // and - i because for each iteration we are getting the largest element at the end
        for (int j = 0; j < n - 1 - i; j++) {
            // Swapping in case the previous number is greater than the current number
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

}
int main(void) {

    int arr[6] = {1, 3, 9, 6, 2, 5};

    bubble_sort(arr, 6);

    for (int i = 0; i < 6; i++) {
        std::cout << arr[i] << " ";
    }


    return 0;
}