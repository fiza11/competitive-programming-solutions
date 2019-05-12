#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
ll power(ll a, ll b){
    ll res = 1;
    while(b > 0){
        if(b & 1)
            res *= a;
        a *= a;
        b /= 2;
    }
    return res;
}
main(){
    ll n;
    cin >> n;
    cout << (power(4, n - 3) * 24) + (36 * (n - 3) * power(4, n - 4)) << endl;
}
