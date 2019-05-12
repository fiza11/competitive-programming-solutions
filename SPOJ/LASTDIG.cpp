#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
ll mod = 1e9;
ll power(ll x, ll y, ll mod){
    ll res = 1;
    x = x % mod;
    while (y > 0){
        if (y & 1)
            res = (res * x) % mod;
        y = y >> 1;
        x = (x * x) % mod;
    }
    return res;
}
main(){
    ll n, t, y;
    cin >> n;
    while(n--){
        ll a, b;
        cin >> a >> b;
        if(b == 0)
            cout << 1 << endl;
        else{
            t = a % 10;
            cout << power(t, b, mod) % 10 << endl;
        }
    }
}
