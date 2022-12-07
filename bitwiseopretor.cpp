#include<iostream>
using namespace std;

    //XOR operation between two numbers
//    int n1{5},n2{6},n3;
//    n3 = n1 ^ n2 ;
//    cout<<n3;

//


       //Checking wheather a number is odd or even.
//    int n;
//    cin>>n;
//    if ( n & 1)
//        cout<<n<<" is odd"<<endl;
//    else cout<<n<<" is even";


    //some bitwise operations

//    int a; cin>>a;
//    int b;
//
//    b= a<<1;
//    cout <<b;
//
//    return 0;
//



//    int n ; cin>>n;
//
//    if( n)
//        cout << " eita 1 "<<endl;
//    else cout<<" eita hoilo 0";


//     int a=97 , b= 95;
//
//     int c;
//     c= a& b;
//     cout<<c;


        //Complement operator

//       int a = -7;
//       int b = ~a;
//       cout<<b;



// Find the missing number in a given array
int getMissingNumber(int arr[], int n)
{
    // Compute XOR of all the elements in the array
    int xor = 0;
    for (int i = 0; i < n; i++) {
        xor = xor ^ arr[i];
    }

    // Compute XOR of all the elements from 1 to `n+1`
    for (int i = 1; i <= n + 1; i++) {
        xor = xor ^ i;
    }

    return xor;
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 7, 8, 9, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("The missing number is %d", getMissingNumber(arr, n));

    return 0;
}





