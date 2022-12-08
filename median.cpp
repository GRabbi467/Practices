#include<bits/stdc++.h>
using namespace std;
class Solution{

public:

    int median(vector<vector<int>> &matrix, int R, int C){

        // code here

        int m=R*C;

        int arr[m];

        int count=0;

        for(int r=0;r<R;r++){

            for(int c=0;c<C;c++){

                arr[count]=matrix[r][c];

                count++;

            }

        }

        sort(arr,arr+m);

        int p=(m)/2;

        return arr[p];

    }

    int main(){
        Solution obj;
       int x =3;
       int y =3;
        vector<vector<int>> vec{
            {1,2,3},
            {4,5,6},
            {7,8,9}
        };
        obj.median(vec,x,y);


        }
};

