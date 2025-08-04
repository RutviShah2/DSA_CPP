#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool isSorted(vector<int> &arr){
    
    // is_sorted() is a built-in method
    if(is_sorted(arr.begin(), arr.end()))
    return true;
    
    return false;
}

int main() {
    
    vector<int> arr = { 10, 20, 30, 40, 50 };
    if(isSorted(arr))
        cout<<"true"<<endl;
    else 
        cout<<"false"<<endl;
    return 0;
}