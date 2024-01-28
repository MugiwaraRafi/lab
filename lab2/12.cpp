///12. C++ Program to Multiply Two Matrix Using Multi-dimensional Arrays.
#include<iostream>

using namespace std;
#define n 3

int main()
{
     int  i ,  j , sum ;
    int a[n][n] , b[n][n] , c[n][n];

    for( i=0 ; i<n ; i++ )
    {
        for( j=0 ; j<n ; j++)
        {
            cin>>a[i][j];
        }
    }

     for( i=0 ; i<n ; i++ )
    {
        for( j=0 ; j<n ; j++)
        {
            cin>>b[i][j];
        }
    }

    for( i=0 ; i<n ; i++ )
    {
        for( j=0 ; j<n ; j++ )
        {
            sum=0;
            for(int k=0 ; k<n ; k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            c[i][j]=sum;
        }
    }

    for( i=0 ; i<n ; i++ )
    {
        for( j=0 ; j<n ; j++)
        {
             cout<<c[i][j]<<" ";
        }
        cout<<"\n";
    }


    return 0;
}
