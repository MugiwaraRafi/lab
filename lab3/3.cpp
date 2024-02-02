///3.Write a function that gets length and width of a rectangle and returns area.
#include<iostream>

using namespace std;

int area(int l , int w)
{
    return l*w;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<area(a,b);

    return 0;
}

