#include <iostream>
#include <vector>

bool binary_search(std::vector<int> &arr, int element) {

    int start = 0;
    int end = arr.size();

    while (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] == element) {
            return true;

        } else if (element < arr[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }

    }
    return false;
}

int main(void) {

    // Array must be sorted
    std::vector<int> arr {1, 2, 3, 4, 5, 6, 7, 8};

    if (binary_search(arr, 2)) {
        std::cout << "Found";
    } else {
        std::cout << "Not Found";
    }

    return 0;
}