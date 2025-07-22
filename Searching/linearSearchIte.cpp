#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int key)
{
for(int i=0; i<size; i++)
{
    if(arr[i]==key)
    return i;
}
return -1;
}
int main()
{
int arr[]={5,10,15,20,25,30};
int key;
cout<<"Enter element to search"<<endl;
cin>>key;
int result= linearSearch(arr,6,key);
if(result!=-1)
cout << "Found at index: "<<result << endl;
else
cout<<"Not found"<<endl;
};

