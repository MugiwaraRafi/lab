///6.Write a function that gets any positive number and returns its factorial.
#include<iostream>

using namespace std;

int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}

int main()
{
    int a;
    cin>>a;
    if(a>0)
    cout<<"factorial: "<<fact(a)<<"\n";
    else
        cout<<"invalid\n";

    return 0;
}
