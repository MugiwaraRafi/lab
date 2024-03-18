/*4. Write a C++ Program To Calculate Electricity Bill Of Person using Class.
• To Calculate Electricity Bill Of Person using Class , first we have to create and call get( ) function to take input details of the
customer.
• After get( ) , we create and call a new function i.e calc_bill( ) to calculate the total bill of the customer on the behalf of units
 consumed by the customer .
• At last , we call the put( ) function to print or display customer or person electricity bill on the screen.
• Between 0 – 100 Unit, price 5 taka per unit
• Between 101 – 200 Unit, price 7 taka per unit
• Between 201 – N Unit, price 9 taka per unit*/
#include<iostream>
using namespace std;

class bill
{
    string name, adrs;
    int n;
public:
    void get()
    {
        cout<<"Name : ";
        getline(cin, name);
        cout<<"Address : ";
        getline(cin, adrs);
        cout<<"Electricity : ";
        cin>>n;
    }

    void calc_bill()
    {
        if(n>=0)
        {

            if(n<=100)
                n=5*n;
            else if(n<=200)
                n=7*n;
            else
                n=9*n;
        }
        else
            n=0;
    }
    void put()
    {
        cout<<"The Electricity bill : "<<n;
    }
};
int main()
{
    bill ob;
    ob.get();
    ob.calc_bill();
    ob.put();
}
