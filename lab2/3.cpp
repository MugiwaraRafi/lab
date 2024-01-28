///3. Write a C++ program to find out the sum of series 1^2 + 2^2 + …. + n^2.
#include<iostream>

using namespace std;

int main()
{
    int n,i,sum=0;
    cin>>n;
    for(int i=1 ; i<=n ; i++)
    {
        sum+=i*i;
    }
    cout<<sum<<endl;

    return 0;
}
