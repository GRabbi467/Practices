#include<iostream>
using namespace std;

    const double pi{3.1416};

    double cal_area(double radius)
    {
        double area=pi*radius * radius;
        return area;

    }
    void area_circle()
    {
        double radius{};
        cout<<"enter radius :";
        cin>>radius;
        cout<<"Area of the circle with radius "<<radius<<" is : "<<cal_area(radius)<<endl;

    }
int main()


{
    area_circle();

}
