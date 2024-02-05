///8. Create a class called "summation" with the PRIVATE variables number1 and number2.
///Use a constructor to initialize these private variables. calculate the sum of these numbers.
#include<iostream>
using namespace std;

class summation
{
    int number1, number2;
public :
    summation(int n1, int n2)
    {
        number1=n1;
        number2=n2;
    }
    int calculate()
    {
        return number1+number2;
    }
};

int main()
{

    int a,b;
    cin>>a>>b;
    summation obj(a,b);
    cout<<"The sum: "<<obj.calculate()<<endl;

    return 0;
}

