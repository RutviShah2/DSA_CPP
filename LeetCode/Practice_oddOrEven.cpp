#include <iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter an integer: ";
    cin>>number;
    if(number%2==0)
    {
        cout<<"The number is Even";
    }
    else
    {
        cout<<"The number is Odd";
    }
    return 0;
}