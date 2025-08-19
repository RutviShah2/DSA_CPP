#include <iostream>
using namespace std;
int main()
{
int arr[]={1,2,3,4,5};
int n=sizeof(arr)/sizeof(arr[0]);
int largest=arr[0];
for(int i=0;i<n;i++)
{
    if(arr[i]>largest)
    {
        largest=arr[i];
    }
}
cout<<"Largest element in array is: "<<largest<<endl;
return 0;
}