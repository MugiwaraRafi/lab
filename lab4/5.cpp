///5. .Write a C++ program that take four functions that gets two values and returns its sum ,subtraction, multiplication, division
///using function overloading(data type different).
#include<iostream>
using namespace std;
double math(int a, float b, double c, int d )
{
    return a+b+c+d;
}
int math(int a )
{
    return a*a;
}
double math( double a, double b)
{
    return a/b;
}
double math(int a, double b )
{
    return a-b;
}
int main()
{
    cout<<"\nSum = "<<math(11,2.23,12.1,3)<<"\nsubtraction = "<<math(12,3.5)<<"\nmultiplication = "<<math(3)<<"\nDivision = "<<math(12.5,5.4)<<endl;

    return 0;
}

