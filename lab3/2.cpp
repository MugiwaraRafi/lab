///2.Write a C++ program that take two functions that gets three integers and returns maximum and minimum.
#include<iostream>

using namespace std;

int max(int a, int b, int c)
{
    if(a>b&&a>c)
        return a;
    else if(b>c && b>a)
        return b;
    else
        return c;
}
int min(int a, int b, int c)
{
    if(a<b&&a<c)
        return a;
    else if(b<c && b<a)
        return b;
    else
        return c;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<"maximum : "<<max(a,b,c)<<endl<<"minimum : "<<min(a,b,c)<<endl;

    return 0;
}
