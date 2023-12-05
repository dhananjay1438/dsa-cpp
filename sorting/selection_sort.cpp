#include <iostream>

void selection_sort(std::vector<int> &arr) {
    // Selection sort method
    for (int i = 0; i < arr.size(); i++) {

        int selected_element = arr[i];
        int index_to_replace_with = i;

        for (int j = i; j < arr.size(); j++) {
            if (arr[j] < selected_element) {
                selected_element = arr[j];
                index_to_replace_with = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[index_to_replace_with];
        arr[index_to_replace_with] = temp;
    }

}

int main(void) {

    std::vector<int> arr {1, 2, 9, 6, 3, 5};

    selection_sort(arr);

    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}