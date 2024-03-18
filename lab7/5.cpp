///5. Create a class called Employee with a name, salary, and hire date as private attributes. With help of a friend function,
///calculate the total year of service.

#include<iostream>
using namespace std;

class Employee
{
   string name , salary ;
   int year;
   public:
       Employee()
    {
        cout<<"Name : ";
        getline(cin , name);
         cout<<"Address : ";
        getline(cin , salary);
         cout<<"Joining Year : ";
         cin>>year;
    }
       friend void h_date( Employee ob)
       {
           cout<<"Total years of service is : "<<2024-ob.year<<endl;
       }

};

int main()
{
    Employee ob;
    h_date(ob);
}
