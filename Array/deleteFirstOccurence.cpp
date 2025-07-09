#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
vector<int> arr={10,20,20,20,30};
int element=20;

cout<<"Before deletion"<<endl;
    for(int i=0; i<arr.size(); i++)
    {
        cout << arr[i]<<endl;
    }

auto it =find(arr.begin(),arr.end(),element);
if(it!=arr.end())
{
    arr.erase(it);
}

    cout<<"After deletion"<<endl;
    for(int i=0; i<arr.size(); i++)
    {
        cout << arr[i]<<endl;
    }
    return 0;
}
