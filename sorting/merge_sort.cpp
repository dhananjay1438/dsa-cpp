#include <iostream>
#include <vector>

std::vector<int> merge_vectors(std::vector<int> &left, std::vector<int> &right) {

    int i = 0;
    int j = 0;

    std::vector<int> result;

    while (i < left.size() && j < right.size()) {
        if (left[i] < right[j]) {
            result.push_back(left[i]);
            i++;
        } else {
            result.push_back(right[j]);
            j++;
        }
    }

    while (i < left.size()) {
        result.push_back(left[i]);
        i++;
    }

    while (j < right.size()) {
        result.push_back(right[j]);
        j++;
    }
    return result;

}
void merge_sort(std::vector<int> &arr, int start, int mid, int end) {

    int length_of_first_array = mid - start + 1;
    int length_of_second_array = end - mid;


    int left[length_of_first_array];
    int right[length_of_second_array];

    for (int i = 0; i < length_of_first_array; i++) {
        left[i] = arr[start + i]; 
    }

    for (int i = 0; i < length_of_second_array; i++) {
        right[i] = arr[mid + 1 + i];
    }

    std::cout << "Left Subarray: ";
    for (auto i: left) {
        std::cout << i << " ";
    }
    std::cout << "\nRight Subarray: ";

    for (auto i: right) {
        std::cout << i << " ";
    }

    std::cout << "\n";

    int i = 0, j = 0;
    int k = start;
    while (i < length_of_first_array && j < length_of_second_array) {
        if (left[i] < right[j]) {
            arr[k] = left[i];
            i++;

        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < length_of_first_array) {
        arr[k] = left[i];
        k++;
        i++;
    }

    while (j < length_of_second_array) {
        arr[k] = right[j];
        k++;
        j++;
    }

    std::cout << "Sorted Array: ";
    for (int i = start; i < k; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";



}

void merge(std::vector<int> &arr, int start, int end) {


    if (start < end) {
        int mid = (start + end) / 2;

        merge(arr, start, mid);
        merge(arr, mid + 1, end);
        
        merge_sort(arr, start, mid, end);

    }

}

int main(void) {

    std::vector<int> arr {1, 100, 200, 523, 2, 5, 4, 9};

    //std::vector<int> result = merge_vectors(left, right);

    merge(arr, 0, arr.size()-1);


    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }


    return 0;
}