#include <iostream>
using namespace std;
void reverseArray(int arr[], int n) 
{
    int start = 0;
    int end = n - 1;

    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main() {
    int arr[5];
    cout<<"Enter your array"<<endl; 
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<endl;
    }
    reverseArray(arr, n);
    cout << "\nReversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
