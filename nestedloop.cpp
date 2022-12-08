#include<iostream>
using namespace std;
int main()
{
    int n{};
    for(int i{1};i<=10;++i)
        {
            n++;
            for(int j{1};j<=10;++j){
                    n++;
                            }
            cout<<n<<endl;


}
}
