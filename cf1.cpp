#include<iostream>
#include<cmath>
using namespace std;
int main(){
    unsigned long long  n ;
    int T,height = 1,i,area =0; cin>>T;

    while ( T--){
         cin>>n;
         int length[n];
         for( i = 0 ; i < n ; i++){
              double len = (i+1);
              double x = len/2;
             length [i] = ceil(x);
             area   += length[i];
         }
         cout<<area<<endl;

         if( length[n-1] * length[n-1] == area){
            cout<<length[n-1];
         }
         else{
            cout<<length[n-1];
         }

    }

}
