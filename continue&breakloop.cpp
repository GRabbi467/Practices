#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vals{-1,3,-3,2,-6,5};

    for(auto n:vals){

        if(n==-6)
           continue;
        else if(n == -1 || n==-3)
            break;
        else
            cout<<n<<endl;
    }
}
