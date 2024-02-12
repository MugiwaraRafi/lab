///7. A class has two string type private variables (first_name & last_name). Now access these with help of a friend function and
/// print the full name by a single string.
#include<iostream>
using namespace std;

class name
{
    string first_name , last_name ;
public:
     name()
    {
        cout<<"First name : ";
        getline(cin,first_name);
        cout<<"Last name : ";
        getline(cin , last_name);
    }
    friend string full( name ob );
};
string full(name ob)
{
    return ob.first_name+" "+ob.last_name;
}
int main()
{
    name o;
    cout<<full(o);
}
