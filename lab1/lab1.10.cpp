///10. C++ Program to Find the Largest Number Among Three numbers
#include<iostream>
using namespace std;

int main()
{
    int n,a,b;
    cout<<"Enter Three numbers below:\n";
    cin>>n>>a>>b;

    if(n==a==b)
        cout<<"Every numbers Are equal";
        else if(n>=a&&n>=b)
            cout<<n<<" is the biggest number among "<<n<<" , "<<a<<" & "<<b;
        else if(a>=n&&a>=b)
            cout<<a<<" is the biggest number among "<<n<<" , "<<a<<" & "<<b;
        else
            cout<<b<<" is the biggest number among "<<n<<" , "<<a<<" & "<<b;

    return 0;
}

