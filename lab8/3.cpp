///3. Base class name is student and that has private data Name, ID , Mark. Print that information with help of a
///derived class named Result.

#include<iostream>
using namespace std;

class student
{
    string name , id  ;
    int mark;
public:
    student()
    {
         cout<<"Name : ";
        getline(cin , name);
        cout<<"Id : ";
         getline(cin , id);
         cout<<"mark : ";
        cin>>mark;
    }
    void show()
    {
        cout<<"Name of student : "<<name<<endl<<"His id : "<<id<<endl<<"His Marks : "<<mark<<endl;
    }
};

class result : public student
{
public:
    result()
    {
        show();
    }
};
int main()
{
    result ob;
}
