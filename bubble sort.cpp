#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

int main() {
    vector<int> arr = { 5, 3, 8, 4, 2 };
    bubbleSort(arr);
    for (int i : arr)
        cout << i << " ";
    cout << endl;
    return 0;
}
