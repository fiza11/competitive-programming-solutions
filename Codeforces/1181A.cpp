#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
typedef vector< int > vi;
typedef vector< vi > vvi;
typedef pair< int,int > ii;
#define sz(a) int((a).size())
#define trace(x) cerr<<#x<<": "<<x<<" "<<endl;
#define pb push_back
#define mp make_pair
#define ft first
#define sd second
#define lp(i, a, b) for(i = a; i < b; i++)
#define lpr(i, a, b) for(ll i = a; i >= b; i--)
#define all(c) c.begin(), c.end()
#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
void yes(){
    cout << "YES" << endl;
}
void no(){
    cout << "NO" << endl;
}
void nl(){
    cout << endl;
}

main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll x, y, z, i;
    cin >> x >> y >> z;
    ll max = 0;
    max = x/z + y/z;
    if(x%z == 0 || y%z == 0){
        cout <<  max << " " << "0" << endl;
        return 0;
    }
    ll a = 0;
    ll p = x%z;
    if(max < (x-p)/z + (y+p)/z){
        max = (x-p)/z + (y+p)/z;
        a = p;
    }
    ll o = y%z;
    if(max < (x+o)/z + (y-o)/z){
        max = (x+o)/z + (y-o)/z;
        a = o;
    }
    if(max == (x+o)/z + (y-o)/z){
        if(o < a)
            a = o;
    }
    ll k = z*(x/z + 1) - x;
    if(max < (x+k)/z + (y-k)/z && y >= k){
        max = (x+k)/z + (y-k)/z;
        a = k;
    }
    if(max == (x+k)/z + (y-k)/z && y >= k){
        if(k < a)
            a = k;
    }
    ll kk = z*(y/z + 1) - y;
    if(max < (y+kk)/z + (x-kk)/z && x >= kk){
        max = (y+kk)/z + (x-kk)/z;
        a = kk;
    }
    if(max == (y+kk)/z + (x-kk)/z && x >= kk){
        if(kk < a)
            a = kk;
    }
    cout << max << " " << a << endl;
}
