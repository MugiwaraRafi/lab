///7.Write a function that gets any positive number and returns sum of its digit.
#include<iostream>

using namespace std;
int sum(int n)
{
    int m,sum=0,i;
    for(n ; n>0 ; n/=10)
    {
        m=n%10;
        sum+=m;
    }
    return sum;

}
int main()
{
    int a;
    cin>>a;
    if(a>0)
    {
        cout<<"sum = "<<sum(a);
    }
    else
        cout<<"Invalid";

    return 0;
}

