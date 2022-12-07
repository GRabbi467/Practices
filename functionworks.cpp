#include<iostream>
using namespace std;
//void fun2(int &x,int y,int z);

     void fun2(int &x,int y,int z)
     {
         x += y+z;
     }
     int fun1(int a,int b)
    {
        int result{};
        result = a + b;
        fun2(result,a,b);
        return result;
    }
    int main()
     {
         int x{10};
         int y{20};
         int z{};
         z=fun1(x,y);
         cout<<z<<endl;
         return 0;
     }


