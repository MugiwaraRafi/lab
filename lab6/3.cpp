///3. Create a class called "online_shopping_platform" and create objects for products. Each product object should
///contain information such as name, description, price.
#include<iostream>
using namespace std;

class online_shopping_platform
{
    string name , des, price;
public:
    void get_data()
    {
        cout<<"Product name : ";
        getline(cin , name);
        cout<<"Description :\n";
        getline( cin , des);
        cout<<"Price : ";
        getline(cin , price);
    }
    void put_data()
    {
        cout<<"Product name : "<<name<<endl<<"Description :\n"<<des<<endl<<"Price : "<<price;
    }

};

int main()
{
    online_shopping_platform pr;
    pr.get_data();
    pr.put_data();
}



