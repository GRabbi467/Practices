#include<iostream>
using namespace std;
int fibo(int n);
 int main()
 {
     int n,i{0};
     cin>>n;
     while( i < n)
     {
         cout<< " "<<fibo(i);
         i++;

     }



 }
 int fibo( int n)
 {
     if( n <= 1)
        return n;
     else
        return fibo(n-1)+fibo(n-2);
 }

