///15. C++ Program to check that a given year is a leap year or not.If not then calculate the nearest leap year.
#include<iostream>
using namespace std;

int main()
{
    int n,z,y;

    cout<<"Enter the year:";
    cin>>n;
    z=y=n;
    if (n%4==0&&n%100!=0||n%400==0)
        cout<<"Leap year\n" ;
    else
    {
        cout<<"Not leap year\n\n";
        for(int i=0; i<4; i++)
        {
            y++;
            if (y%4==0&&y%100!=0||y%400==0)
                break;

        }
        for(int i=0; i<4; i++)
        {
            z--;
            if (z%4==0&&z%100!=0||z%400==0)
                break;
        }
        if(abs(n-y)>abs(n-z))
            cout<<"nearest leap year: "<<z<<endl;
            else if(abs(n-y)==abs(n-z))
                cout<<"nearest leap year: "<<z<<" & "<<y<<endl;
        else
        cout<<"nearest leap year: "<<y<<endl;
    }


    return 0;
}

