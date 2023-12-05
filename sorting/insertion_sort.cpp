#include <iostream>
#include <vector>

void insertion_sort(std::vector<int> &arr) {

    // We start from the second element (1st index) because an array with length one
    // will always be sorted
    for (int i = 1; i < arr.size(); i++) {

        int unsorted_element = arr[i];
        int prev_index = i - 1;
        
        while (prev_index >= 0 && arr[prev_index] > unsorted_element) {
            arr[prev_index + 1] = arr[prev_index];
            prev_index--;
        } 
        arr[prev_index + 1] = unsorted_element;

    }

}
int main(void) {

    std::vector<int> arr = {1, 2, 9, 6, 3, 5};

    insertion_sort(arr);

    for (auto &i: arr) {
        std::cout << i << " ";
    }

    return 0;
}