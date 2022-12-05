#include<iostream>
using namespace std;

int gcd(int a, int b){
    int t;
    while( b != 0 ){
        t = b;
        b = a % b;
        a = t;

    }
    return a;
}
int main(){
    int a,b,T;cin>>T;
    while(T--){
    cin>>a>>b;
    int x = gcd(a,b);
    int lcm = (a*b) / x;
    cout<<"LCM :"<<lcm<<endl;
    }
}
