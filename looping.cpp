#include<iostream>
using namespace std;
int main()
{
//    for(int i=0;i<10;i+=3)
//        cout<<i<<endl;

    cout<<"Enter the number :";
    int n;
    cin>>n;
    cout<<n<<"er namta"<<endl<<endl;

    for(int i{n},j{1};j <= 10;j++)
            cout<<i<< "*"<<j<<"="<<(i*j)<<endl;


}
