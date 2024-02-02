///11. Join two strings
#include<iostream>


using namespace std;
string str( string a , string b)
{
   return a+" " +b;
}

int main()
{
    string a ,b;
    cin>>a>>b;
    cout<<str(a,b);

}
