#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define trace(x) cerr<<#x<<": "<<x<<" "<<endl;
#define pb push_back
#define mp make_pair
#define ft first
#define sd second
#define lp(i, a, b) for(ll i = a; i < b; i++)
#define lpr(i, a, b) for(ll i = b; i >= a; i--)
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
ll vis[100000];
main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll n, arr[100000];
    cin >> n;
    lp(i, 0, n)
    cin >> arr[i];
    ll count = 0;
    ll max = 0;
    lp(i, 0, n){
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] == i + 1 && arr[i] >= max)
            count++;
    }
    cout << count << endl;
}
