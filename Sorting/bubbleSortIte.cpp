#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
    for (int i=0; i<n-1; i++)
    {
        for ( int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1]) //ascending order
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}


void printArray(int arr[], int n)
{
    for (int i=0; i<n; i++)
    cout<<arr[i]<<endl;
}

int main()
{
int arr[]={45,46,87,23,90,64};
int n=sizeof(arr)/sizeof(arr[0]);

cout<<"Array before sorting"<<endl;
printArray(arr,n);

bubbleSort(arr,n);

cout<<"After Sorting"<<endl;
printArray(arr,n);

return 0;

}
