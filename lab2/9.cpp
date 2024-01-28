///9. C++ Program to Calculate Average of Numbers Using Arrays.
#include<iostream>

using namespace std;

int main()
{
    int n , i , avg , sum=0 ;
    cin>>n;
    int a[n];
    for( i=0 ; i<n ; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    avg=sum/n;
    cout<<avg;
    return 0;
}
