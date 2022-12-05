#include <bits/stdc++.h>
using namespace std;

int main()
{
	int numRay[] = { 2,2,1 };
	int arr_size = sizeof(numRay) / sizeof(numRay[0]);
	// count the frequency
	for (int i = 0; i < arr_size; i++) {
		numRay[numRay[i] % arr_size]
			= numRay[numRay[i] % arr_size] + arr_size;
	}

	cout << "The repeating elements are : " << endl;
	for (int i = 0; i < arr_size; i++) {
//		if (numRay[i] >= arr_size * 2) {
//			cout << i << " " << endl;
//		}
            cout<<numRay[i]<<endl;
	}
	return 0;
}

// This code is contributed by aditya kumar (adityakumar129)
