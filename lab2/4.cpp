///4. Write a C++ program to find out the sum of series 1 + 2 + 4 + 8 … to infinity.
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n , sum=0 ;
    cin>>n;
    for (int i=0 ; i<n ; i++)
    {
        sum+=pow(2,i);
    }
    cout<<sum;

    return 0;
}
