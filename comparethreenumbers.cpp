#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers :";
    cin>>a>>b>>c;
    if(a>b && a>c &&b>c)
    {
        cout<<a<<"Is largest"<<b<<"is the mddle"<<c<<"is the smallest"<<endl;

    }
    else{
        cout<<"I dunno";
    }
    getch();


}
