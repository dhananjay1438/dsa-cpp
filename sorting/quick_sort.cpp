#include <iostream>
#include <algorithm>
#include <vector>

int mid_partition(std::vector<int> &arr, int start, int end) {

    int i = start;
    int j = end;

    int mid = (start + end)  / 2;
    int pivot = arr[mid];

    while (i <= j) {

        // Finding element smaller than pivot elment
        while (arr[i] < pivot) {
            i++;
        }
        
        // Finding element greater than pivot element
        while (arr[j] > pivot) {
            j--;
        }

        // Swapping the element
        if (i <= j) {
            std::swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    return i;

}
int partition(std::vector<int> &arr, int start, int end) {

    // Find a pivot element
    /*
    We can have following elements as pivot elements
    1. Choose a random value from array
    2. Choose the middle element
    3. Choose the last or first element
    */

   int pivot = arr[end];

   int pivot_index = start;

   for (int i = start; i < end; i++) {

        if (pivot >= arr[i]) {
            std::swap(arr[i], arr[pivot_index]);
            pivot_index++;
        }

   }
    std::swap(arr[pivot_index], arr[end]);

    return pivot_index;

}

void quick_sort(std::vector<int> &arr, int start, int end) {

    // Find an element with parition function
    if (start < end) {
        int partition_index = partition(arr, start, end);
        quick_sort(arr, start, partition_index - 1);
        quick_sort(arr, partition_index + 1, end);

    }

}

int main(void) {

    std::vector<int> arr {500, 600, 200, 523};

    quick_sort(arr, 0, arr.size() - 1);

    for (int i = 0;i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}