#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define trace(x) cerr<<#x<<": "<<x<<" "<<endl;
#define pb push_back
#define mp make_pair
#define ft first
#define sd second
#define lp(i, a, b) for(ll i = a; i < b; i++)
#define lpr(i, a, b) for(ll i = a; i >= b; i--)
ll power(ll x, ll y, ll mod){
    //(a – b) % M = (a % M – b % M + M) % M [Correct]
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
    ll a, b;
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    while(1){
        cin >> a >> b;
        if(a == 0 && b == 0)
            return 0;
        else{
            ll mod = 1e7 + 7;
            ll x = 2 * power(a - 1, b, mod);
            ll y = power(a, b, mod);
            ll z = 2 * power(a - 1, a - 1, mod);
            ll p = power(a, a, mod);
            cout << ((x + y)%mod +(z + p)%mod)%mod << endl;
        }
    }
}
