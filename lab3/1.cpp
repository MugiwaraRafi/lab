///1.Write a C++ program that take four functions that gets two integer and returns its sum ,subtraction, multiplication, division.
#include<iostream>

using namespace std;

int sum(int a , int b)
{
    return a+b;
}
int sub(int a , int b)
{
    return a-b;
}
int multi(int a , int b)
{
    return a*b;
}
double div(float a , float b)
{
    return a/b;
}

int main()
{
    int a, b;
    cin>>a>>b;
    cout<<"sum = "<<sum(a,b)<<endl<<"Subtraction = "<<sub(a,b)<<endl<<"multiplication = "<<multi(a,b)<<endl<<"Division = "<<div (float(a),float(b))<<endl;

    return 0;
}
