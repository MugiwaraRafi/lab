///9. C++ Program to Check Vowel or Consonant
#include<iostream>
using namespace std;

int main()
{
    char n;
    cin>>n;
    n=tolower(n);
    if(n>='a'&&n<='z')
    {
        (n=='a' || n=='e' || n=='i' || n=='o' || n=='u') ? cout<<"Vowel" : cout<<"Consonant";
    }
    else
        cout<<"Not valid"<<endl;

    return 0;
}

