#include <iostream>
#include <vector>

int main(void) {
    std::vector<int> arr {1, 3, 5, 2, 9, 1, 3, 9};
    
    int element_to_find = 0;
    int i = 0;

    for (; i < arr.size(); i++) {

        if (arr[i] == element_to_find) {
            std::cout << "Found";
            break;
        }
    }

    if (i == arr.size()) {
        std::cout << "Not Found";
    }

    return 0;
}