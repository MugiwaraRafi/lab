///6. Write a C++ Program to Count Number of Digits of an Integer.
#include<iostream>

using namespace std;

int main()
{
    int n  , count=0 ;

    for(  cin>>n ; n>0 ; n/=10 )
    {
        count++;

    }
    cout<<count;

    return 0;
}
