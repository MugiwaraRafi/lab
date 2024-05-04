///2. Write a C++ Program to Access Protected Data Members using Inheritance.

#include<iostream>
using namespace std;

class A
{
protected:
    int n;
public:
    A()
    {
        cout<<"Input some number : ";
        cin>>n;
    }
};

class B : public A
{
public:
    B()
    {
        cout<<"showing the number : " << n;
    }

};

int main()
{
    B ob;
}
