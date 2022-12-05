#include<bits/stdc++.h>
using namespace std;
vector<int> findDisappearedNumbers(vector<int>& nums) {
       //sort(nums.begin(),nums.end());
       vector<int>::iterator it;
       vector<int>a{}; int j=1;
       for(auto i: nums){
           while(j <= nums.size()){
            if(i == j){

            }

           }
           j++;

   }
   return a;
}
  void print(vector <int> a) {
    cout << "The vector elements are : ";

   for(int i=0; i < a.size(); i++)
   cout << a.at(i) << ' ';
}


    int main(){
       vector<int>nums{4,3,2,7,8,2,3,1};
       print(findDisappearedNumbers(nums));
       print(nums);





    }
