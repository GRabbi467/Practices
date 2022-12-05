#include<iostream>
using namespace std;
int main(){
    int i,j;
    int arr[26];
    for( i = 1,j = 'A'; i < 26,j<='Z' ; i++,j++){
        arr[i]=j;
        //cout<<i<<"-->"<<j<<endl;
        char x;int y;cin>>y;
        for( int k = 0 ; k < y ;k++ ){
        cin>>x;
        if( x == j){
                cout<<i<<"-->"<<j<<endl;
        char z = char(j);
        cout<<z;


        }
    }


    }

}
