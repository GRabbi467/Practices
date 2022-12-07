#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool flag = false;
        for(int i =0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i] == nums[j]) return true;
            }
        }
        return flag;
    }
};

int main(){
    Solution soln;
    bool res;
    vector<int>arr{1,2,4,3,6,5};
    res = soln.containsDuplicate(arr);
    if(res){
        cout<<"Contains duplicates"<<endl;
    }
    else cout<<" No duplicates "<<endl;

}

