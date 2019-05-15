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
    ll n, arr[300005];
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    lp(i, 0, n)
        cin >> arr[i];
    vector <pair <int, int>> v1, v2;
    lp(i, 1, n){
        if(arr[i] <= arr[0])
            v1.pb(mp(arr[i], i));
    }
    lpr(i, n - 2, 0){
        if(arr[i] < arr[n - 1])
            v2.pb(mp(arr[i], i));
    }
    ll k = INT_MAX;
    lp(i, 0, v1.size()){
        ll p = v1[i].first/v1[i].second;
        if(p < k)
            k = p;
    }
    lp(i, 0, v2.size()){
        ll p = v2[i].first/(n - 1 - v2[i].second);
        if(p < k)
            k = p;
    }
    cout << k << endl;
}
