///7. C++ Program to Swap Two Numbers
#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"Before swapping\n\n"<<"a= "<<a<<" "<<"b= "<<b<<endl<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping\n\n"<<"a= "<<a<<" "<<"b= "<<b<<endl;

    return 0;
}

