#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n],i,mx,maximum;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    if(arr[i]>arr[mx]){
        arr[mx]=maximum;
    }
    for(i=0;i<n;i++){
        cout<<arr[i];
    }

}
