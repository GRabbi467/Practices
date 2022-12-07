#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements :"<<endl;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int z;
    cout<<"Enter the data wanna search :";
    cin>>z;

    int l=1,h=n,mid=0,flag=0;
    //mid=l+h/2;
    while(l<=h && flag==0)
    {
        mid=(l+h)/2;
        if(arr[mid]<z)
            l=mid+1;
        if(arr[mid]>z)
            h=mid-1;
        if(arr[mid]==z)
            flag=1;
    }
    if(flag==1)
        cout<<"The data "<<z<<" Found in position "<<mid;
    else{
        cout<<"Not Found";
    }
    return 0;
}


