#include<bits/stdc++.h>
using namespace std;

int main(){


    int t;
    cin >> t;
    while(t--){
        long long  n;
        cin >> n;
        if(n%2!=0){
            n+=1;
        }
        long long  s = 6, m = 8, l = 10;
        long long  min1 = 0,d=0,x=0;

        long long  ss = n % s;
        long long  mm = n % m;
        long long  ll = n % l;
        if(n<s  n<m  n<l){
            ss =abs(s - n);
            mm = abs(m - n);
            ll = abs(l - n);
        }
        // cout << ss << " " << mm << " " << ll << endl;


        long long  mn = min(mm, ll);
        if(ss>mn){
             min1 = mn;
             n = n + min1;
             d = n / l;
              x = d * 25;
        }
        else{
             min1 = ss;
             n = n + min1;
            d = n / s;
              x = d * 15;
        }

        cout << x << endl;
    }
}
