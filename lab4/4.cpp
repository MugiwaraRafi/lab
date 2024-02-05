///4.Write a program that will print Fibonacci series upto n value (using user defined function).
#include<iostream>
using namespace std;
void fibo(int a )
{
    int n=1 , m , s=0;
    for(int i=0 ; i<a/2 ; i++)
    {
        cout<<s<<" , ";
        s=s+n;

        cout<<n<<" , ";
        n=s+n;

    }

}

int main()
{
    int a;
    cin>>a;
    fibo(a);

    return 0;
}

