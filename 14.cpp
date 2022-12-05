#include<iostream>
#include<string>
using namespace std;

int main(){
    int cnt{0},i;
    char key;
    string str;
    cout<<"Enter the string :";
    getline(cin,str);
    cout<<"Enter key :"<<endl;


    for( int i = 0 ; i < str.length() ; i++)
    {
        cin>>key;
        if( str[i] == key)
        cnt++;
    }

    cout<<cnt;
    cout<<"\n"<<str[i];


}
