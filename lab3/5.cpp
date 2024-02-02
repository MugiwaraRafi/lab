///5.Write a function that gets three numbers and returns medium.
#include<iostream>

using namespace std;

int med(int a , int b , int c)
{
    if( a>b && a<c || a>c && a<b)
        return a;
    else if ( b>a && b<c || b>c && b<a)
        return b;
    else
        return c;
}
int main()
{
    int a , b , c;
    cin>>a>>b>>c;
    cout<<med(a,b,c);
1
    return 0;
}

