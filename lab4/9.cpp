///9. Create a class called "Rectangle" with the PRIVATE variables length,width. Implement the constructor to initialize the length and width
/// when an object is created. Implement the "getArea()" method to calculate the area of the rectangle.
#include<iostream>
using namespace std;

class Rectangle
{
    int length, width;
public:
    Rectangle(int l, int w)
    {
        length=l;
        width=w;
        cout<<"The area is : "<<getArea(length,width)<<endl;
    }
    int getArea(int len, int wid)
    {

        return length*width;
    }
};

int main()
{
    int a,b;
    cin>>a>>b;
    Rectangle obj(a,b);
    ///cout<<"The area is : "<<obj.getArea()<<endl;

    return 0;
}

