///11. C++ Program to Add Two Matrix Using Multi-dimensional Arrays.
#include<iostream>

using namespace std;

int main()
{
    int n , m , i ,  j ;
    cout<<"The row & column:";
    cin>>n>>m;
    int a[n][m] , b[n][m] ;

    for( i=0 ; i<n ; i++ )
    {
        for( j=0 ; j<m ; j++)
        {
            cin>>a[i][j];
        }
    }

     for( i=0 ; i<n ; i++ )
    {
        for( j=0 ; j<m ; j++)
        {
            cin>>b[i][j];
        }
    }


     for( i=0 ; i<n ; i++ )
    {
        cout<<endl;
        for( j=0 ; j<m ; j++)
        {
            cout<<a[i][j]<<" ";
        }
    }
cout<<endl;
     for( i=0 ; i<n ; i++ )
    {
        cout<<endl;
        for( j=0 ; j<m ; j++)
        {
            cout<<b[i][j]<<" ";
        }
    }

    return 0;
}
