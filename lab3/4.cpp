///4.Write a function that gets radius of a circle and returns area.
#include<iostream>

using namespace std;
#define p 3.1416
double circle(int r)
{
    return p*r*r;
}
int main()
{
    int r;
    cin>>r;
    cout<<"area = "<<circle(r)<<"\n";

    return 0;
}

