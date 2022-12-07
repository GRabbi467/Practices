#include<iostream>
using namespace std;
unsigned long long  factorial( unsigned long long  n)
{
    if ( n > 1 )
        return n*factorial(n-1);
    else
        return 1;

}
int main()
{
    cout<<"Enter the number to calculate factorial :";
    int a; cin>>a;
    cout<<factorial(a);
}
