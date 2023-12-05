#include <iostream>
#include <vector>

using namespace std;

vector<int> selection_sort(vector<int> &arr){
    int i=0, j=1;
    while(i <arr.size()-1){
        if(arr[i] > arr[j]){
            swap(arr[i], arr[j]);
            for(int x = i; x>0; x--){
                if(arr[x] < arr[x-1])
                    swap(arr[x], arr[x-1]);
            }
        }
        i++; j++;
    }
    return arr;
}

int main(void) {

    vector<int> arr {1, 2, 9, 6, 3, 5};
    selection_sort(arr);

    for (auto i: arr) {
        cout << i << " ";
    }

    return 0;
}