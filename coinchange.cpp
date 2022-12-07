#include<bits/stdc++.h>
using namespace std;

int coinchange(int coin[],int n,int v)
{
    int count=0;
    vector <int> ans;
    for(int i=n-1;i>=0;i--)
    {
        while(coin[i]<=v)
        {
            v-=coin[i];
            //ans.push_back(coin[i]);
            count++;

        }
    }
    return count;
}

int main()
{
    int n,i,v;
    cout<<"Enter the number of coin :";
    cin>>n;
    int coin[n];
    cout<<"Enter the value of coins :";
    for(i=0;i<n;i++){
        cin>>coin[i];
    }
    cout<<"Enter the amount :";
    cin>>v;
    int count=coinchange(coin,n,v);
    cout << "Minimal number of change  " <<count<< ": ";
    return 0;
}
