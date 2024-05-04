///1. Write a C++ Program To Calculate Electricity Bill Of Person using Class. To Calculate Electricity Bill Of Person using
///Class , first we have to create and call get( ) function to take input details of the customer. After get( ) , we create and call a
///new function i.e calc_bill( ) to calculate the total bill of the customer on the behalf of units consumed by the customer . At last
/// we call the put( ) function to print or display a customer or person's electricity bill on the screen.

/// Between 0 – 100 Unit, price 5 taka per unit
/// Between 101 – 200 Unit, price 7 taka per unit
/// Between 201 – N Unit, price 9 taka per unit

#include<iostream>
using namespace std;
class bill
{
    string n , a;
    int b ;
public:
    void get()
    {
        cout<<"Name : ";
        getline(cin , n);
        cout<<"Address : ";
         getline(cin , a);
         cout<<"Electricity : ";
        cin>>b;
    }

    void calc_bill()
    {
        if(b<=100&&b>=0)
        b*=5;
        else if(b<=200)
            b*=7;
        else
            b*=9;

    }

    void put()
    {
        cout<<"The electricity bill : "<<b;
    }
};

int main()
{
    bill ob;
    ob.get();
    ob.calc_bill();
    ob.put();
}
