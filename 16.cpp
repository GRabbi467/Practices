#include<bits/stdc++.h>
#include<string>
using namespace std;

void rev(string word, int length){
    for( int i = length-1 ; i >= 0 ; i--){
         cout<<word[i];
    }
    cout<<" " ;
}

    int main(){
        int k{0};
        string sen,word;
        cout<<"Enter the sentence :";
        getline(cin,sen);
        int l = sen.length();
        //rev(sen,length);
        for( int j = 0 ; j<l ;j++ ){
            if ( sen [j] != 32){
                word[k] = sen[j];
                k++;
            }
            else if ( k > 0){
                int len = word.length();
                rev(word,len);
            }
        }
        if(k > 0){
            word[k] = '\0';
            int l = word.length();
            rev(word,l);
        }
        else{
            cout<<"ki hoitse";
        }
        cout<<"\n";



}
