#include<iostream>
using namespace std;

bool duplicates(int arr[] ,int  n)
    {
        for( int i{0} ; i < n ; i++)
        for ( int j = i+1 ; j < n ; j++)
        {
            if (arr[i] == arr[j])
                return 1;

            else 0;
        }
    }

int main()
{
    int nums []= {1,2,3,1};
    int length = sizeof(nums)/sizeof(nums[0]);
    duplicates(nums,length);




}
