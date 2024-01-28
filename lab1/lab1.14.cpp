///14. C++ Program to input marks in three subjects of a student and calculate the division according to the following conditions:
/*Percentage Division
>=60 First
50-59 Second
40-49 Third
<40 Fail*/
#include<iostream>
using namespace std;

int main()
{
     cout<<"Enter the number of following subjects/Bangla/English/Cse-101:\n\n"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<"Marks of subject "<<i+1<<":";
        int n;
        cin>>n;
        if(n>=60)
            cout<<"\nFirst division\n\n";
        else if(n>=50&&n<=59)
            cout<<"\nSecond division\n\n";
        else if(n>=40&&n<=49)
            cout<<"\nThird division\n\n";
        else
            cout<<"\nFail\n\n";

    }
    return 0;
}

