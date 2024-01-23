///16. C++ Program to input a character and check that it’s a small letter, capital letter, a digit or a special symbol.
#include<iostream>
using namespace std;

int main()
{
     char n;
     cout<<"Enter the character:";
     cin>>n;
     if(n>='0'&&n<='9')
        cout<<"\n It's a Digit\n";
     else if(n>='a'&&n<='z')
        cout<<"\n It's a small letter\n";
     else if(n>='A'&&n<='Z')
        cout<<"\n It's a capital letter\n";
     else
        cout<<"\n It's a special symbol\n";

    return 0;
}

