#include <iostream>
using namespace std;
int binarySearchIterative(int arr[], int size, int key) 
{
    int low = 0;
    int high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; 
}
int main() {
    int arr[] = {2, 4, 6, 8, 10, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "Enter element to search (Iterative Binary Search): ";
    cin >> key;
    int result = binarySearchIterative(arr, size, key);
    if (result != -1)
        cout << "Found at index: " << result << endl;
    else
        cout << "Not found" << endl;
    return 0;
}
