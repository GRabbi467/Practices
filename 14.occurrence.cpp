#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,cnt{0};char ch[2];
    cin>>T;
    fflush(stdin);
    while(T--){
            string str; getline(cin,str);
             cin>>ch;
            fflush(stdin);
            for( int i =0 ; i < str.length() ; i++){
                if(ch[0] == str[i])
                {

                    cnt++;
                }
                else
                {
                    if( cnt == 0)
                    cout<<"There is no match"<<endl;

            }




    }

}

}
