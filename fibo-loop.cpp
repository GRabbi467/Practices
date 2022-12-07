#include<iostream>
using namespace std;
int num,n1=0,n2=1,n3;
int fibo( int num)
{
    for(int i{2} ; i < num ; i++)
        {
            n3=n1+n2;
            cout<<" "<<n3;
            n1=n2;
            n2=n3;
        }
}
int main()
{
    cout<<"Enter the no. of elements ";

    cin>>num;
    cout<<n1<<" "<<n2;
    fibo(num);

}
