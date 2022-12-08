#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int X,Y,Z,res;
    cout<<"number of participants in quiz :";
    cin>>X;
    cout<<"number of participants in programming :";
    cin>>Y;
    cout<<"number of participants in both :"
    cin>>Z;

    res=X+Y-Z;

    cout<<"Total participants :"<<res;
    getch();


}
