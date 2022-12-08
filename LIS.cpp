#include<iostream>
using namespace std;
int LIS(int arr[],int n)
{
    int i,j,maxx;
    int length[100];

    for(i=0;i<n;i++)
        length[i]=1;

    for(i=1;i<n;i++)
        for(j=0;j<i;j++)
    {
        if(arr[i]>arr[j] && length[i]<(length[j]+1))
            length[i]=length[j]+1;

    }
    for(i=0;i<n;i++)
        if(maxx<length[i])
    {
        maxx=length[i];

    }
    return maxx;

}

int main()
{
    int arr[]={5,3,7,10,2,15};
     int n = sizeof(arr)/sizeof(arr[0]);

    //int len=LIS(a,7);
    cout<<LIS(arr,n);


}

