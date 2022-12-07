#include <iostream>
using namespace std;

int main()
{
    int cnt{0},i;
    int arr [] = {1,2,3,4,5,6,9,6,7,8,4,5,7,9,4,3};
    int length = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of the array "<<length<<endl<<endl;
    cout<<"Duplicates are "<<endl;
    for ( int i{0} ; i < length ; i++)
        for ( int j = i+1 ; j < length ; j++)
        {
             if ( arr [i] == arr [j] )
             {
                 cout<<arr[j]<<endl; cnt++;
             }
        }
        cout<<"Total Duplicates :"<<cnt<<endl;
        if (cnt == 0)
                cout<<"No Duplicates"<<endl;
        cout<<" ====After Removing the duplicates==== "<<endl;
        for ( int i{0} ; i < length ; i++)
        for ( int j = i+1 ; j < length ; j++)
        {
             if ( arr [i] == arr [j] )
             {
                 for( int k  = j ; k < length - 1 ; k ++)
                    arr[k] = arr[k+1];
                length--;
             }
}
        for ( i = 0 ; i < length ; i++)
            cout<< arr[i]<< " ";


        return 0;
}
