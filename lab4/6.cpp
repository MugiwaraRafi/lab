///6. Write a C++ program that take four functions that get integer values and
///returns its sum, subtraction, multiplication, division using function overloading (number of argument different).
#include<iostream>
using namespace std;
int math(int a, int b, int c, int d )
{
    return a+b+c+d;
}
int math(int a )
{
    return a*a;
}
double math( int a, int b)
{
    return double(a)/double(b);
}
int math(int a, int b, int c)
{
    return a-b-c;
}
int main()
{
    cout<<"\nSUm = "<<math(11,2,12,3)<<"\nsubtraction = "<<math(12,3,5)<<"\nmultiplication = "<<math(3)<<"\nDivision = "<<math(12,5)<<endl;

    return 0;
}

