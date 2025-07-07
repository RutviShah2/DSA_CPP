#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>arr = {10, 20, 30, 40};
    int ele=50;
    int pos=2;
    cout<<"Before insertion"<<endl;
    for(int i=0; i<arr.size(); i++)
    {
        cout << arr[i]<<endl;
    }
    arr.insert(arr.begin()+pos-1,ele);
        cout<<"After insertion"<<endl;
     for(int i=0; i<arr.size(); i++)
     {
        cout << arr[i]<<endl;
     }
     return 0;
}