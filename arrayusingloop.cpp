#include<iostream>
#include<array>
using namespace std;
int main()
{
    int n;
    cout<<"How many data do you have?";
    cin>>n;

    int arr[n];

    for(int i=1;i<=n;i++){
    cout<<"Enter the "<<i<<"th data :";

    cin>>arr[i];
    }
    cout<<"The data you inputed :";

    for(int i=1;i<=n;i++)
    cout<<arr[i]<<endl;



}
