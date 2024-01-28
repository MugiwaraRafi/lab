///11. C++ program to Find all Roots of a Quadratic equation
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float det=0,a,b,c;
    cout<<"Enter the Coefficients of a , b & c below:\n";
    cin>>a>>b>>c;
    det=b*b-4*a*c;
    if(det>0)
    cout<<"Roots are real and different.\n root1: "<<(-b+sqrt(det))/(2*a)<<endl<<" root2: "<<(-b-sqrt(det))/(2*a)<<endl;
    else if(det==0)
        cout<<"Roots are real and equal\n root1: "<<-b/(2*a)<<endl<<" root2: "<<-b/(2*a)<<endl;
    else
    {
        float real , img;
        real=-b/(2*a);
        img=sqrt(-det)/(2*a);
        cout<<"Roots are complex and different\n root1: "<<real<<"+ i"<<img<<endl<<" root2: "<<real<<"- i"<<img<<endl;
    }

    return 0;
}

