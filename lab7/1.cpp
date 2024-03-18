///1. Write a C++ program to implement a class called Date that has private member variables for day, month, and year.
///Include member functions to set and get these variables, as well as to validate if the date is valid.
#include<iostream>
using namespace std;
class Date
{
    int dd , mm , yy ;
public:
    void set()
    {
        cout<<"Day : ";
        cin>>dd;
        cout<<"Month : ";
        cin>>mm;
        cout<<"Year : ";
        cin>>yy;
    }

    void get()
    {
        if((dd>=1&&dd<=31)&&(mm>=1&&mm<=12)&&yy>=1)
            cout<<dd<<"\\"<<mm<<"\\"<<yy<<endl;
    }
};

int main()
{
    Date ob;
    ob.set();
    ob.get();
}
