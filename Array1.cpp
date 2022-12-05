#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
   cout<<"Enter the size of array :";
   cin>>n;
   int arr[n],i;
   cout<<"Enter the elements of array";
   for(i = 0; i<n;i++ ){
    cin>>arr[i];
    }
    cout<<"The elements are :"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    getch();
}
