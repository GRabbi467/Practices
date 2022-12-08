#include<iostream>
using namespace std;
int main()
{
    int n,largest;
    cout<<"Enter the size of an array :";
    cin>>n;
    cout<<"Enter the elements :";
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int arr[0]=largest;

    if(arr[i]>arr[0]){
        arr[i]=largest;
    }
    for(i=0;i<n;i++){
        cout<<largest;
    }
}
