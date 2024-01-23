///13. C++ Program to input a number. If the number is even, print its square otherwise print its cube.
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    n%2==0 ? cout<<n<<" is even\nSo the square of "<<n<<" : "<<n*n : cout<<n<<" is not even\nSo the Cube of "<<n<<" : "<<n*n*n<<endl;

    return 0;
}

