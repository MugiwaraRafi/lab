/// 6. Class name will be student that have two private type data (id &amp; CGPA). Input this for 30 students. Now find the
/// maximum, average and minimum CGPA with help of three different member functions.
#include<iostream>
#include<limits>
using namespace std;

class student
{
    long long id;
    double cg;

public:
    double input()
    {
        cout<<"Id : ";
        cin>>id;
        cout<<"CGPA : ";
        cin>>cg;
        return cg;

    }
    void calcu( student ob )
    {
         double s=0 , sum=0 , max=INT_MIN , min=INT_MAX ;
    int n;
    cout<<"Number of students : ";
    cin>>n;
    student a[n];
    for( int i=0 ; i<n ; i++ )
    {
          s=a[i].input();
        sum+= s;
          if( max<s)
            max=s;
        if(min>s)
            min=s;
    }
    a[0].avg(sum , n);
    a[0].maxi(max);
    a[0].mini(min);
    }
    void avg(double sum , int n)
    {
       cout<<"Average CGPA : "<<sum/double (n)<<endl;
    }

    void maxi( double m)
    {
        cout<<"Maximum CGPA : "<<m<<endl;
    }

    void mini( double n)
    {
        cout<<"Minimum CGPA : "<<n<<endl;
    }


};
int main()
{
    student s1 ,  s2 , s3;
    s1.calcu(s1);
    s2.calcu(s2);
    s3.calcu(s3);


}
