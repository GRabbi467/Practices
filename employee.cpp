#include<iostream>
using namespace std;
class employee
{
    public:
    string name;
    string company;
    int age;
    void intro (){
        cout<<"I am "<<name<<endl<<company<<" " <<age;

    }



};

int main(){
    employee employee1;
    employee1.name = " Kabir";
    employee1.company = "ABC";
    employee1.age = 20;
    employee1.intro();



}
