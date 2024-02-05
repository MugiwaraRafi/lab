/*7. Create a class called “Circle” that calculates and displays the area of a circle. The radius is a private data member of the class, and
the compute_area() function is responsible for computing and displaying the area based on the given radius. In the main function, create
an object of the Circle class, then display the area of the circle.*/
#include<iostream>
using namespace std;

#define p 3.1416

class Circle
{
    int r;
public:
    void computer_area( int a )
    {
        r=a;
        double area = r*r*p;
        cout<<area;
    }
};
int main()
{
    int n;
    cin>>n;
    Circle obj;
    obj.computer_area(n);

    return 0;
}

