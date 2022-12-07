#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    const int n = 5;
    int src[] = {1, 3, 5, 7, 9};

    int dest[n];
    copy(begin(src),end(src),begin(dest));

    for (int &i: dest) {
        cout << i << ' ';
    }

    return 0;
}
