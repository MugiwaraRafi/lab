///2. Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and
///marks. Include member functions to calculate the grade based on the marks
#include<iostream>
using namespace std;

class Student
{
    string name , cls , roll;
    int mark;
public:
    Student()
    {
        cout<<"Name : ";
        getline(cin , name);
         cout<<"Class : ";
        getline(cin , cls);
         cout<<"Roll Number : ";
        getline(cin , roll);
         cout<<"Mark : ";
         cin>>mark;
    }
    calc()
    {
        if(mark>100)
            cout<<" mark Invalid"<<endl;
        else if(mark>=80)
            cout<<"Grade : A+"<<endl;
        else if (mark>=70)
            cout<<"Grade : A"<<endl;
        else if (mark>=60)
            cout<<"Grade : A-"<<endl;
        else
            cout<<"Fail"<<endl;
    }
};

int main()
{
    Student ob;
    ob.calc();
}
