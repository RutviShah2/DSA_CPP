#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j] > key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
void printArray(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<""<<endl;
    }
}
int main()
{
    int arr[]={12,10,6,8,19};
    int n =sizeof(arr)/sizeof(arr[0]);
    
    insertionSort(arr,n);
    printArray(arr,n);
    return 0;
}