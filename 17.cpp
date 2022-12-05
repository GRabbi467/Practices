#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main(){
    int n;
     char sen[101];
    cin>>n;
    while(n--){
            int cnt=0,i;
     scanf(" %[^\n]",sen);

        for( i = 0 ; sen[i] != '\0' ; i++){
            if(sen[i] == 'a' || sen[i] == 'e' || sen[i] == 'i' || sen[i] == 'o' || sen[i] == 'u' || sen[i] == 'A' || sen[i] == 'E' || sen[i] == 'I' || sen[i] == 'O' || sen[i] == 'U'){
                          cnt++;
            }

        }
        cout<<"The number of vowels are :"<<cnt<<endl;

    }


}
