#include<iostream>
#include<string>
#include<vector>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(vector<string>);


void print(int num)
{
    cout<<"The number is "<<num<<endl;

}
 void print(double num)
{
    cout<<"The number is "<<num<<endl;

}
void print(string s)
{
    cout<<s<<endl;
}
void print(string s,string t)
{
    cout<<s<<t<<endl;
}

void print(vector<string>v)
{
   for(auto z:v)
    {
        cout<<z + " ";
    }

}


int main()
{
    print(100);
    print(20.12);
    print ('A');
    print("Rabbi");
    print("Hello ","Motherfuckers");
    string s{"Hi there!"};
    print(s);
    print("Hey ",s);
    vector<string>v{"Moe","Larry","Curly"};
    print(v);


}
