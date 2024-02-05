///3. Write a function that has one character argument and displays that it’s a small letter, capital letter, a digit or a special symbol.
#include<iostream>
using namespace std;

void cha(char n)
{
    switch (n)
    {
    case 'a'...'z':
        cout<<"Small letter"<<endl;
        break;
    case 'A'...'Z':
        cout<<"Capital letter"<<endl;
        break;
    case '0'...'9':
        cout<<"Digits"<<endl;
        break;
    default:
        cout<<"Special symbols"<<endl;

    }
}
int main()
{
    char a;
    cin>>a;
    cha(a);

    return 0;
}

