#include<bits/stdc++.h>
using namespace std;

 int singleNumber(vector<int>& nums) {
     vector<int>::iterator itr;
     vector<int>::iterator itr1;
     vector<int>::iterator itr2;

     for( itr1 = nums.begin() ; itr1 != nums.end() ; itr1++){
        for(itr2 = itr1+1 ; itr2 != nums.end() ; itr2++){
            if(*itr1 == *itr2){
                    //cout<<*itr1<<" "<<*itr2<<endl;
                nums.erase(itr1);
//                nums.erase(itr2);
            }


     }


     for (auto itr = nums.begin(); itr != nums.end(); ++itr)
        cout << ' ' << *itr;

 }
 }


 int main(){
    vector<int>a{4,1,2,1,2};
    singleNumber(a);

}

