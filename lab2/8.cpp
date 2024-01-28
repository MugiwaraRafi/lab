///8. Write a C++ program to input any number from user and displays the total of its digits ( I/p : 321 o/p : 6)

#include<iostream>

using namespace std;

int main()
{
    int n , m , sum=0;
    cin>>n;
    for( n ; n>0 ; n/=10)
    {
        m=n%10;
        sum+=m;
    }
    cout<<sum<<endl;

    return 0;
}
