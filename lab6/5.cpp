///5. Create a class called "Rectangle" with width and height attributes. Calculate the area with a member function called calculate_area
///and calculate perimeter with a member function called calculate_perimeter of the rectangle using the object of the created class.
///(hint: area = height*width, perimeter = 2*(height+width)
#include<iostream>
using namespace std;
class Rectangle
{
    int w , h ;
public:
    Rectangle()
    {
        cout<<"Enter the width : ";
        cin>>w;
        cout<<"Enter the height : ";
        cin>>h;
        cout<<endl;
    }
    int calculate_area(Rectangle ob)
    {
        return ob.w*ob.h;

    }
    int calculate_perimeter(Rectangle ob)
    {
        return 2*(ob.w+ob.h);
    }
};
int main()
{
    Rectangle ob;
    cout<<"The area is : "<<ob.calculate_area(ob)<<endl<<"The perimeter is : "<<ob.calculate_perimeter(ob)<<endl;
}

