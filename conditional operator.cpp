#include<iostream>
using namespace std;
int main()
{
    int num{};
    cout<<"Enter the integer :";
    cin>>num;

//    if(num%2 == 0 )
//        cout<<num<<" Is even"<<endl;
//    else
//        cout<<num<<" Is odd"<<endl;

        cout<<num<<" is "<< ((num%2 == 0)? "even":"odd")<<endl;
    return 0;

}
