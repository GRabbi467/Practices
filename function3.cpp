#include<iostream>
using namespace std;

 double area(double radius)
 {
     double pi{3.1416};
     return pi*radius*radius;

 }


int main()
{
    int a;
    cin>>a;
    cout<<area(a);

}

