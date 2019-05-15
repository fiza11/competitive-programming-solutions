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
    ll n, arr[105];
    char a;
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    lp(i, 0, n){
        cin >> a;
        if(a == '-')
            arr[i] = -1;
        else arr[i] = 1;
    }
    ll p = 0, min = INT_MAX;
    lp(i, 0, n){
        p += arr[i];
        if(p < min)
            min = p;
    }
    if(min < 0)
        cout << -min + p << endl;
        else cout << p << endl;

}
