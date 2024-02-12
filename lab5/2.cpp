///2. Create a class called Box that contains one public function (print_volume) and three public
/// variables (height and length and width). Declare the height, length and width as integer value.
/// Use public function print_volume () to calculate the volume of a box and display the volume.
#include<iostream>
using namespace std;

class Box
{
public:
    int height , length , width;
    int print_volume()
    {
        return height*length*width;
    }

};
int main()
{
    Box obj;
    cout<<"Length . height . width :";
    cin>>obj.length>>obj.height>>obj.width;
    cout<<"The volume of a Box is : "<<obj.print_volume()<<endl;


}
