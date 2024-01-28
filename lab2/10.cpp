///10. C++ Program to Find Largest Element and shortest of an Array .
#include<iostream>
#include<limits>

using namespace std;

int main()
{
    int n , max , min ;
    cin>>n;
    int a[n];
    max=INT_MIN;
    min=INT_MAX;
    for( int i=0 ; i<n ; i++ )
    {
        cin>>a[i];
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
    }
    cout<<"Largest element: "<<max<<endl<<"smallest element: "<<min;

    return 0;
}
