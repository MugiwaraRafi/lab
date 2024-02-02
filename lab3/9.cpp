///9.Write a function that gets any positive integer and returns its reverse.
#include<iostream>

using namespace std;

int rev( int a )
{
    int n , r=0;
    while(a>0)
    {
        n=a%10;
        r=r*10+n;

        a/=10;
    }
    return r;
}
int main()
{
    int n;
    cin>>n;
    if(n>0)
        cout<<"reverse: "<<rev(n);
    else
        cout<<"Invalid";

}

