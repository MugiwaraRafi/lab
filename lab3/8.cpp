///8.Write a function that gets any positive number and returns digital root.
#include<iostream>

using namespace std;

int root(int n)
{
     int m,sum=0,s;
    for(n ; n>0 ; n/=10)
    {
        m=n%10;
        sum+=m;
    }
    if(sum<10)
        return sum;
    else
    {
        while (sum>9)
        {
            int i=sum;
            sum=0;
            for(  i ; i>0 ; i/=10)
            {
                s=i%10;
                sum=sum+s;
            }
        }
        return sum;
    }

}

    int main()
    {
        int a;
        cin>>a;
        int r=root(a);

        cout<<"Digital root : "<<r<<"\n";
    }

