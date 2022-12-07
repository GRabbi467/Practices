#include<iostream>
using namespace std;
int main()
{
    bool eqlres{false};
    bool noteqlres{false};

    cout<<boolalpha;

    int a,b;
    cout<<"enter the two values :";
    cin>>a>>b;

    eqlres = (a == b);
    noteqlres = ( a != b);

    cout<<"\nEqual " <<eqlres<<endl;
    cout<<"Not equal "<<noteqlres<<endl;






}
