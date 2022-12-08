#include<iostream>
using namespace std;

int main(){
    int i,n;
    cin>>n;
    for( i = 2 ; i < n ; i++){
        if( i % 1 == 0 && i % i ==0){
            cout<<i;
        }
    }

}
