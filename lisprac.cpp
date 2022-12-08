#include<iostream>
using namespace std;
int LIS(int Arr[],int n)
{
    int length[n]={1};
    length[0]=1;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(Arr[i]>Arr[j] && (length[j]+1)>length[i])
                length[i]=length[j];
        }
        length[i]++;
    }
    int lis=0;
    for(int i=0;i<n;i++)
        lis=max(lis,length[i]);
    return lis;

}
int main()
{
    int arr[]={5,3,7,10,2,15};
    int n=6;
    cout<<LIS(arr,n);
    return 0;

}
