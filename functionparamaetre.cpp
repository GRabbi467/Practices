#include<iostream>
using namespace std;

    void para(int formal){
        //int foraml;
        cout<<"1st  "<<formal<<endl;
        formal=100;
        cout<<"2nd  "<<formal<<endl;
    }

int main()
{
    int actual{50};
    cout<<"3rd  "<<actual<<endl;
    para(actual);
    cout<<"4th  "<<actual<<endl;
    return 0;


}
