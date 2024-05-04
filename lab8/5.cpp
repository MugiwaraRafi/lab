///5. Input a string in a base class. Convert that string into uppercase in child class
#include<iostream>
#include<algorithm>

using namespace std;

class base
{
public:
    string s;
    base()
    {
        cin>>s;
    }
};

class child : public base
{
public:
    child()
    {
        transform(s.begin() , s.end() , s.begin() , :: toupper);
        cout<<"The uppercase string : "<<s;
    }
};
int main()
{
    child ob;
}
