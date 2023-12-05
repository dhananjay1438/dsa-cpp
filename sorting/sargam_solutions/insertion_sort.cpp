#include <iostream>
#include <vector>

using namespace std;

vector<int> Insertion_sort(vector<int> &arr){
    int x=0;
    while(x <arr.size()-1){
        int small = arr[x];
        int small_ind = x;
        int i = x+1;
        for(;i<arr.size();i++){
            if(small > arr[i]){
                small = arr[i];
                small_ind = i;
                arr[i+1] = arr[i]
            }
        }
        int temp = arr[x];
        arr[x] = arr[small_ind];
        arr[small_ind] = temp;
        x++;
    }
    return arr;
}

int main(void) {

    vector<int> arr {1, 2, 9, 6, 3, 5};

    Insertion_sort(arr);
    
    for (auto i : arr) {
        std::cout << i << " ";
    }

    return 0;
}