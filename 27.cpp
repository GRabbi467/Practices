#include<iostream>
using namespace std;
int main(){
    int T,num,temp,val;cin>>T;
    while(T--){
            int res = 0;
        cout<<"Enter a 3 digit number"<<endl;
        cin>>num;
        temp = num;
        while( temp > 0){
                val = temp % 10;
                res = res+ (val*val*val);
                temp /= 10;

        }
        //cout<<res<<endl;

        if( num == res )
            cout<<num<<" is armstrong number."<<endl;

        else
            cout<<num<<" is not an armstrong number."<<endl<<endl;


    }
}
