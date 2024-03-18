///6. Create a class called "Library". Create three book objects which have attributes like title, author, publication year
#include<iostream>
using namespace std;
class Libary
{
    string title , author , py;
public:
    Libary()
    {
        cout<<"Enter the title of a Book:";
        getline(cin,title);
        cout<<"Enter the name of the Author:";
        getline(cin , author);
        cout<<"Enter the publication Year of Book:";
        getline( cin , py );
        cout<<endl;
    }
    ~Libary()
    {
        cout<<" ' "<<title<<" ' "<<"Written by ' "<<author<<" ' in "<<py<<endl;
    }
};
int main()
{
    Libary ob1 , ob2 , ob3;
}
