///2. Create a class called "Employee" with a name, salary, and hire date attributes, and a method to calculate years of service.
#include<iostream>
using namespace std;

class Employee
{
    string name ;
    int year[3];
    double salary;
public:
    Employee()
    {
        cout<<"Name of employee : ";
        getline(cin , name);
        cout<<"Salary : ";
        cin>>salary;
        cout<<"Date : ";
        cin>>year[0];
        cout<<"Month : ";
        cin>>year[1];
        cout<<"Year : ";
        cin>>year[2];
    }
   int  calculate_year(Employee ob )
    {

        return 2024-ob.year[2];
    }

    void output()
    {
        cout<<"Name : "<<name<<endl<<"Salary : "<<salary<<endl<<"Date of hire : "<<year[0]<<"/"<<year[1]<<"/"<<year[2]<<endl;
    }
};

int main()
{

    Employee p;
    p.output();
    cout<<"The years service : "<<p.calculate_year(p);
}
