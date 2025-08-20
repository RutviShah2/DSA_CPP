#include <iostream>
using namespace std;
int main() 
{
    int arr[5];
    cout << "Enter array: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int j = 0; 
    for (int i = 0; i < 5; i++) 
    {
        if (arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }
    while (j < 5) {
        arr[j] = 0;
        j++;
    }
    cout << "Array after moving zeroes to end: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
