///1.  C++ program to check prime number using user defined function.
#include<iostream>
using namespace std;

int prime(int a )
{
    int pr=0;
    for(int i =2 ; i<=a/2 ; i++)
    {
        if( a%i==0)
        {
            pr=1;
            break;
        }
    }

    return pr;

}
int main()
{
    int a ;
    cin>>a;
    if(a==0 || a==1)
        cout<<"It is not a prime number";
    else
    {
        int p = prime(a);
        if(p==0)
            cout<<"It is a Prime number\n"<<endl;
        else
            cout<<"It is not a Prime number\n"<<endl;
    }
    return 0;
}
