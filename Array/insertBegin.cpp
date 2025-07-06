#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int element=60;
    vector <int>arr= {10,20,30,40,50};
    cout<<"Before insertion: ";
    for (int i=0; i<5; i++)
    {
    cout<<arr[i]<<endl;
    }
    arr.insert(arr.begin(),element);
    cout<<"After insertion: ";
    for (int i=0; i<6; i++)
    {
    cout<<arr[i]<<endl;
    }

    
}