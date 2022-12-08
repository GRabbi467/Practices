#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    int arr[5];

    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    int maxx;
    maxx=arr[0];
    for(i=0;i<5;i++){
       if(maxx<arr[i])
       maxx=arr[i];
    }
    cout<<maxx;
}
