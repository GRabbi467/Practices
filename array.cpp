#include<iostream>
//#include<iterator>
using namespace std;
int main()
 {
     int arr1[]{1,2,43,54,65,78,68,6,45};
     int length = sizeof (arr1)/sizeof(arr1[0]);
     int arr2[length]{};

     for (int  i=0 ; i < length ; i++)
        {
         arr2[i] = arr1[i];
        }


        for ( auto i : arr2)
            cout<<i<<endl;
 }
