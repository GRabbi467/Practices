#include<iostream>
using namespace std;
 int main()
 {
     int grid [5][3]{};
     int row,column;
     for ( int row {0} ; row < 5 ; row++)
        {
            for ( int column {0} ; column < 3 ; column++)
                grid [row][column]=0;
        }

    for ( int row {0} ; row < 5 ; row++)
        {
            for ( int column {0} ; column < 3 ; column++)
              cout<< "["<< grid [row][column]<< "]";
              cout<<endl;
        }

 }
