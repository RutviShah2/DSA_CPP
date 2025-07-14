#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    int element;
    cout << "Enter the element to search: ";
    cin >> element;

    int index = -1;  

    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            index = i;
            break;
        }
        if (arr[i] > element) break;
    }

    if (index != -1) {
        cout << "Element " << element << " found at index " << index << endl;
    } else {
        cout << "Element " << element << " not found in the array." << endl;
    }

    return 0;
}
