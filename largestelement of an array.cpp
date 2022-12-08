#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of an array :";
    cin>>n;
    int arr[n];
    int i=0;

    while( i <n )
    {

       cin>>arr[i];
       i++;
    }
    for(i=0;i<n;i++) cout<<arr[i]<<endl;
    //cin>>arr[i];
    getch();
}
