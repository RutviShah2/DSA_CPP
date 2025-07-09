#include <iostream>
#include <vector>
using namespace std;
int main()
{
vector<int> arr={10,20,30,40};
int pos=2;
cout<<"Before deletion"<<endl;
    for(int i=0; i<arr.size(); i++)
    {
        cout << arr[i]<<endl;
    }
    arr.erase(arr.begin()+pos-1);
    cout<<"After deletion"<<endl;
    for(int i=0; i<arr.size(); i++)
    {
        cout << arr[i]<<endl;
    }
    return 0;
}
