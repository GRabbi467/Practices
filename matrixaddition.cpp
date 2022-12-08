#include<iostream>
using namespace std;
int main()
{
    int arr1[10][10],arr2[10][10],sum[10][10],r,c,i,j;

    cout<<"enter the size of the row :";
    cin>>r;

    cout<<"enter the size of the column :";
    cin>>c;

    cout<<"Enter elements of 1st matrix:"<<endl;
    for(int i{};i<r;++i)
        {
        for(int j{};j<c;++j){
            cout<<"Enter a"<<i <<j<<" ";
            cin>>arr1[i][j];

        }

        }
    cout<<"Enter the elements of 2nd matrix :"<<endl;
    for( int i{};i<r;++i)
        {
            for(int j{};j<c;++j)
                {
                  cout<<"Enter b"<<i<<j<<" ";
                  cin>>arr2[i][j];
                }
        }

        for(int i{};i<r;++i)
            for(int j{};j<c;++j){
               sum[i][j] = arr1[i][j]+arr2[i][j];
            }



        cout<<"Addition of the matrices is :"<<endl;
        for(int i{};i<r;++i){
            for(int j{};j<c;++j){
                cout<<sum[i][j]<<" ";
                if(j+1==c)
                cout << endl;
            }

        }


    return 0;




}
