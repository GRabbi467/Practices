#include <iostream>
using namespace std;
int longestSubSeq(int subArr[], int n) {
   int length[n] = { 0 }; //set all length to 0
   length[0] = 1;    //subsequence ending with subArr[0] is 1
   for (int i = 1; i < n; i++) {    //ignore first character, second to all
      for (int j = 0; j < i; j++) {    //subsequence ends with subArr[j]
         if (subArr[j] < subArr[i] && length[j] > length[i])
            length[i] = length[j];
      }
      length[i]++; //add arr[i]
   }
   int lis = 0;
   for (int i = 0; i<n; i++) // find longest increasing subsequence
      lis = max(lis, length[i]);
   return lis;
}
int main() {
    int n,i;
   int arr[n];
   cin>>n;
   for(i=0;i<n;i++){
    cin>>arr[i];
   }

   cout << "Length of Longest Increasing Subsequence is: " << longestSubSeq(arr, n);
   return 0;
}
