#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int key, int index = 0)
{
    if (index == size)
        return -1;
    if (arr[index] == key)
        return index;
    return linearSearch(arr, size, key, index + 1);
}
int main()
{
    int arr[] = {5, 10, 15, 20};
    int key;
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Enter element to search using Recursive approach" << endl;
    cin >> key;
    int result = linearSearch(arr, size, key); 
    if (result != -1)
        cout << "Found at index: " << result << endl;
    else
        cout << "Not found" << endl;
    return 0;
}
