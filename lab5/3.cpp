///3. Create a class called person that maintains a register. In the register, it contains name and address and blood group, date of birth
///   and an identification number. Store the name, address and blood group as string and the identification number as an integer value.
///   Use two public functions contain () to store the name, address, date of birth, blood group and identification number.
///   And another public function display () will display the information .
#include<iostream>
using namespace std;

class person
{
    string name , address , bgroup , bd ;
    int  id;
public:
    void contain()
    {
        cout<<"Name : ";
        getline(cin , name);
         cout<<"Address : ";
        getline(cin , address);
         cout<<"Blood Group : ";
        getline( cin , bgroup);
         cout<<"Birth Date : ";
        getline(cin , bd );
         cout<<"Identification Number : ";
        cin>>id;
    }
    void display()
    {
        cout<<"\nName : "<<name<<"\nAddress : "<<address<<"\nBlood Group : "<<bgroup<<"\nBirth Date : "<<bd<<"\nIdentification Number : "<<id<<endl;
    }

};
int main()
{
    person p1;
    p1.contain();
    p1.display();

}
