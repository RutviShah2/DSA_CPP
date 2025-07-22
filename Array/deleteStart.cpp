#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
int element=10;
vector <int> arr = {10, 20, 30, 40,50,};
cout<<"Before Deletion"<<endl;
for (int i=0; i<arr.size(); i++)
{
    cout<< arr[i]<<endl;
}
    auto it = find(arr.begin(), arr.end(), element);
    if (it != arr.end()) {
        arr.erase(it);
    }

cout<<"After Deletion"<<endl;
for (int i=0; i<arr.size(); i++)
{
    cout<< arr[i]<<endl;
}
return 0;
}
