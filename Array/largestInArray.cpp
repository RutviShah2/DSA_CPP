#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector <int>arr={3,2,1,5,2};
    int largest=arr[0];
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>largest)
        largest=arr[i];
    }
cout<<largest;
return 0;
}