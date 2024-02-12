///5. Simple class program to find prime number using class prime.
///   And take the input value as a private member and declare two public member function get_input() to get the input from user.
///   And another function is calculate ()to calculate the input is prime or not and display it using calculate ()function
#include<iostream>
using namespace std;

class prime
{
    int n;
public:
    void get_input()
    {
        cin>>n;
    }
    void   calculate()
    {
        int i;
        bool pr=1;
        if( n==1 || n==0)
        {
         cout<<"Not prime";
        }

        else
        {
        for( i=2 ; i<n/2 ; i++ )
        {
            if(n%i==0)
            {
                pr=0;
                break;
            }
        }

        if(pr)
            cout<<"prime \n";
        else
            cout<<"Not prime \n";
        }

    }
};
int main()
{
    prime p;
    p.get_input();
    p.calculate();
}

