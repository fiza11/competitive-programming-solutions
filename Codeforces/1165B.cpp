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
main(){
    ll n, a;
    vector <ll> v;
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    lp(i, 0, n){
        cin >> a;
        v.pb(a);
    }
    sort(v.begin(),v.end());
    ll po = 1, ct = 0;
    lp(i, 0, v.size()){
        if(po > v[i])
            continue;
        else ct++, po++;
    }
    cout << ct << endl;
}
