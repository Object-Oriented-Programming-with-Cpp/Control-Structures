#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"Enter a number:\n";
    cin>>i;
    if(i>15)
    {
        cout<<i<<" is greater than 15\n";
    }
    else if(i>10)
    {
        cout<<i<<" is greater than 10\n";
    }
    else if(i<10)
    {
        cout<<i<<" is lesser than 10\n";
    }
    else
    {
        cout<<i<<" is equal to 10\n";
    }
    return 0;
}