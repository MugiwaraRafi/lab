///4. Take an array in parent class and calculate the average of that array elements in child class.
#include<iostream>
using namespace std;

class parent
{
public:
    float sum=0;
    int a[5];
    parent()
    {
        cout<<"Enter The numbers : ";
    }
};

class child : public parent
{
public:
    child()
    {
        for(int i=0; i<5;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        cout<<"The average of given numbers : "<<sum/10<<endl;
    }

};
int main()
{
    child ob;
}
