#include <bits/stdc++.h>
#include<string>
using namespace std;

void rev( string str , int length ){
    for( int i = length-1 ; i >= 0 ; i--){
        cout<<str[i];
    }
    cout<<" ";
}


int main()
{
    int i,j,T;
    cin>>T;
    while(T--){
    string str;
    char word[101];
    getline( cin,str);
    for( i = 0,j=0 ; str[i] != '\0' ; i++){
        if( str[i] != 32){
            word[j] = str[i];
            j++;
        }

        else if(j > 0){
           word[j] ='\0';
           int length = strlen(word);
           rev(word,length);
           j=0;
        }
    }
    if( j > 0){
        word[j] = '\0';
        int length = strlen(word);
        rev(word,length);
    }
    }


}
