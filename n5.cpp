#include<iostream>
using namespace std;
int main()
{
    int ID;
    cout<<"Enter your ID:";
    cin>>ID;

    if(ID % 3 == 0)
        cout<<"Congratulations FIFO";

    else if(ID%7 ==0)
    cout<<"Congratulations FIFO";

    else if(ID%5 ==0)
    cout<<"Congratulations SJF";

    else cout<<"Congratulations SJF";




}
