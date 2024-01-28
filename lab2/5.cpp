///5. Write a C++ program to find out factorial value of given number.
#include<iostream>

using namespace std;

int main()
{
    int n , i , fact=1 ;
    cin>>n;
    for( i=n ; i>=1 ; i-- )
    {
        fact*=i;
    }
    cout<<fact;

    return 0;
}
