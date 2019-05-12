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
void yes(){
    cout << "YES" << endl;
}
void no(){
    cout << "NO" << endl;
}
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
    ll t, a;
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while(t--){
        cin >> a;
        if(a == 1)
            cout << 1 << endl;
        else if(a % 3 == 0){
            ll m = a/3;
            cout << power(3, m, 1e9 + 7) << endl;
        }
        else if(a % 3 == 1){
            ll m = 1e9 + 7;
            ll k = power(3, a/3 - 1, 1e9 + 7);
            cout << (k * 4) % m << endl;
        }
        else{
            ll m = 1e9 + 7;
            ll k = power(3, a/3, 1e9 + 7);
            cout << (k * 2) % m << endl;
        }
    }
}
