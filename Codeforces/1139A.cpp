#include "bits/stdc++.h"
using namespace std;
#define trace(x) cerr<<#x<<": "<<x<<" "<<endl;
#define pb push_back
#define mp make_pair
#define ft first
#define sd second
typedef long long ll;
#define lp(i, a, b) for(ll i = a; i < b; i++)
#define lpr(i, a, b) for(ll i = b; i >= a; i--)
main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll n;
    string x;
    cin >> n;
    cin >> x;
    ll count = 0;
    lp(i, 0, n){
        if(x[i] % 2 == 0)
        count += i + 1;
    }
    cout << count << endl;
}
