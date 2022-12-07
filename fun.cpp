#include<iostream>
using namespace std;
int func( int &x){
    cout<<x;
}
int main()
{
   int a;
   cin>>a;
   func(a);

}
