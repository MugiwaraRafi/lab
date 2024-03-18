///1. Create a class called "Shape" with width and height attributes. Create two objects of the "Shape" class,one is for rectangle and
///one is for square. Calculate the area and perimeter of the rectangle and square. (hint: square area = height*height, perimeter = 4*height)
#include<iostream>
using namespace std;

class shape
{
    int w , h;
public:
    shape(int wi , int he)
    {
        w=wi;
        h=he;
    }
    shape(int a)
    {
        h=a;
    }
    void rec()
    {
        cout<<"Area : "<<w*h<<endl;
        cout<<"Perimeter : "<<2*(w+h)<<endl;
    }

    void sq()
    {
         cout<<"Area : "<<h*h<<endl;
        cout<<"Perimeter : "<<4*h<<endl;
    }

};

int main()
{
    int h , w , a;
    cout<<"THe height and width : ";
    cin>>h>>w;
    cout<<"The height of square";
    cin>>a;
    shape ob(h,w) , ob1(a);
    cout<<"For Rectangle :";
    ob.rec();
    cout<<"For Square :";
    ob1.sq();
}
