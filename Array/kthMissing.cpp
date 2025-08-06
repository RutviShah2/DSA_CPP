#include <iostream>
#include <vector>
using namespace std;

int findKthPositive(vector<int>& arr, int k) {
    int missingCount = 0;
    int current = 1;
    int i = 0;

    while (true) {
        if (i < arr.size() && arr[i] == current) {
            i++;
        } else {
            missingCount++;
            if (missingCount == k) {
                return current;
            }
        }
        current++;
    }
}

int main() {
    int n, k;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " sorted positive integers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the value of k: ";
    cin >> k;

    int result = findKthPositive(arr, k);
    cout << "The " << k << "th missing positive integer is: " << result << endl;

    return 0;
}
