/*3. Write a program that would print the information (name, year of joining, salary,
address) of three employees by creating a class named 'Employee'. The output
should be as follows:
Name  Year of joining    Address
Robert  1994             64C-WallsStreat
Sam     2000             68D-WallsStreat
John     1999             26B- WallsStreat*/
#include<iostream>
using namespace std;

class Employee
{
    string name , year , salary , adrs;
public:
    Employee()
    {
        cout<<"Name : ";
        getline(cin , name);
         cout<<"Address : ";
        getline(cin , adrs);
         cout<<"Salary : ";
        getline(cin , salary);
         cout<<"Joining Year : ";
         getline(cin , year);
    }

    void display()
    {
        cout<<name<<"\t"<<year<<"\t\t\t"<<adrs<<endl;
    }
};

int main()
{
    Employee ob , ob1 , ob2 ;
    cout<<"Name\tYear of joining\t\tAddress"<<endl;
    ob.display();
    ob1.display();
    ob2.display();
}
