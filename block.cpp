#include<iostream>
using namespace std;
int fun(int var);

int var{10};

int main()
{
    int var{4};
    {
        int var{3};
        cout<<var<<endl;
        cout<<"\n\n";

    }
    cout<<var;
    //fun();

    return 0;
}

    int fun(int var)
    {

        cout<<var;
    }
