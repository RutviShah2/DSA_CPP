#include <iostream>
using namespace std;
int main()
{
    int number, count=0;
    cout<<"Enter a number: "<<endl;
    cin>>number;
    int temp=number;
    if(temp==0)
    {
        count=1;
    }
    while(temp!=0)
    {
        temp=temp/10;
        count++;
    }
    cout<<"Number of digits: "<<count <<endl;
    return 0;
}