///4. Create a class called "Person" with a name and age attribute and two member functions called get_data and put_data.
///Create one object of the "Person" class, set the attributes from user with get_data, and print name  and age with put_data.
#include<iostream>
using namespace std;

class Person
{
    string name , age;
public:
    void get_data()
    {
        cout<<"Enter the name : ";
        getline( cin , name );
        cout<<"Enter the age:";
        getline( cin , age );
    }
    void put_data()
    {
        cout<<"name : "<<name<<endl<<"Age : "<<age<<endl;
    }
};
int main()
{
    Person ob;
    ob.get_data();
    ob.put_data();
}
