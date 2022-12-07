#include<iostream>

using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter the two values :";
    cin>>num1>>num2;

    if(num1 != num2)
    {

        cout<<"Largest  "<<((num1 > num2)?num1:num2)<<endl;

        cout<<"Smallest  "<<((num1 < num2)?num1:num2)<<endl;
    }

    else
        cout<<"They are equal"<<endl;


    return 0;
}
