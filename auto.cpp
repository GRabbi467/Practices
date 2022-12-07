#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    for( auto x : str){
        if( x == 'a')
        {
            cout<<"a found";
        }
        else cout<<" a not found";
    }

}
