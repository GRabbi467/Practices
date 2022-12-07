#include<iostream>
using namespace std;
 int main(){
     int i,j,n;
     cout<<"Enter the number :";
     cin>>n;
     cout<<"Factors of the number"<<endl;

     for( i = 1 ; i<=  n ;i++){
        for( j = 1 ; j <= n ; j++){
            if ( i * j == n){
                cout<<i<<endl;
            }

        }
     }

 }
