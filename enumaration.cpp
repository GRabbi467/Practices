#include<iostream>
using namespace std;
int main()
{
    enum direction{left,right,up,down};

    direction heading {left};

    switch(heading)
    {
        case left:
        cout<<"GO right"<<endl;
        break;

        case right:
        cout<<"GO left"<<endl;
        break;

        case up:
        cout<<"GO down"<<endl;
        break;

        case down:
        cout<<"GO up"<<endl;
        break;

        default:"OK";

        return 0;

    }

    }
