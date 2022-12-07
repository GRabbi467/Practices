#include<iostream>
using namespace std;
int main()
{
    bool done{false};

    int num{};

    while(!done)
    {
        cout<<"Enter a number between 1 to 5 :"<<endl;
        cin>>num;

        if(num<=1 || num>=5)
            cout<<"out of range! try again"<<endl;
        else
            cout<<"You're right"<<endl;

        done=true;
    }


}
