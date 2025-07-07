#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int element=60;
    vector <int>arr= {10,20,30,40,50};
    cout<<"Before insertion: "<<endl;
    for (int i=0; i<arr.size(); i++)
    {
      cout<<arr[i]<<endl;
    }
    arr.push_back(element);
    cout<<"After insertion: "<<endl;
    for (int i=0; i<arr.size(); i++)
    {
       cout<<arr[i]<<endl;
    }
return 0;
}