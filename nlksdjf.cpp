#include<iostream>
using namespace std;


int is_prime(int n){
    int i;
    if( n < 2){
        return 0;
    }
    for( i = 2 ;  i < n ; i++){
        if( n % i  == 0){
            cout<<"prime not";
        }
    }
    cout<<"prime";
}


int main(){
    int n;
    while(1){
        cout<<"Please enter a number:(0 to exit)";
        cin>>n;

        if ( n == 0){
            break;
        }

        if ( is_prime(n) == 1){

        }

        else{

        }
    }

    return 0;
}
