#include<iostream>
using namespace std;

    const double pi{3.1416};
    void area()
    {
        double radius;
        cout<<"Enter the radius "<<endl;
        cin>>radius;

      double area = pi*radius*radius;
      cout<<area;
    }
int main()
{
    area();


}
