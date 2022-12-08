#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>nums{2,2,1,1,1,2,2,4};
    int count[10]{};
    for( int i=0 ; i < nums.size(); i++){
        if(nums[i] >= 0 && nums[i] <= 9){
            count[nums[i]]++;
        }
    }
    for( int j = 0 ; j < 10 ; j++){
            if( count[j] != 0){
                 cout<<j<<"-->"<<count[j]<<endl;
            }

    }

}

