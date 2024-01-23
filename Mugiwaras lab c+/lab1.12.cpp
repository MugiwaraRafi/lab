///12. C++ Program to Check Whether a Number is Positive or negative
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
     int n;
     cout<<"Enter the number:";
     cin>>n;
     if(n==0)
        cout<<"ZERO\n";
        else
     n>0 ? cout<<"positive\n" : cout<<"negative\n";

    return 0;
}

