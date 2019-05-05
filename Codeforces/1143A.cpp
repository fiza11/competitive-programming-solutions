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
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll n, arr[200005], l = 0, r = 0;
    cin >> n;
    lp(i, 0, n){
        cin >> arr[i];
        if(arr[i] == 0)
            l++;
        else r++;
    }
    ll z = 0, o = 0, k = 0;
    lp(i, 0, n){
        k++;
        if(arr[i] == 0)
            z++;
        else o++;
        if(o == r || z == l)
            break;
    }
    cout << k << endl;
}
