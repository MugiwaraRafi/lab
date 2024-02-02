///10. Print length of a string
#include<iostream>

using namespace std;
int len(string a)
{
    int l , i;
    for( i=0 ; a[i]!='\0'; i++ )
    {
        l++;
    }

    return l;
}
int main()
{
    string n;
    cin>>n;
    cout<<"The length of this string is: "<<len(n)<<endl;
}

