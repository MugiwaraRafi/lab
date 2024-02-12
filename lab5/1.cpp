///Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement
///member functions to set and get the values of these variables.
#include<iostream>
using namespace std;

class person
{
    string name , country;
    int age;
public:
    void set()
    {
        cout<<"Name : ";
        getline(cin, name);
        cout<<"Country : ";
        getline(cin,country);
        cout<<"Age : ";
        cin>>age;
    }
    void get()
    {
        cout<<endl<<"Name : "<<name<<endl<<"country : "<<country<<endl<<"Age : "<<age<<endl <<endl;
    }
};
int main()
{
    person obj1;
    obj1.set();
    obj1.get();
}

