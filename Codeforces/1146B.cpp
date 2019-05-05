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
main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string x;
    cin >> x;
    ll l = x.length();
    ll ct = 0;
    lp(i, 0, l)
        if(x[i] == 'a')
            ct++;
    ll ha = l - ct;
    if(ha == 0){
        cout << x << endl;
        return 0;
    }
    else if(ha % 2 != 0){
        cout << ":(" << endl;
        return 0;
    }
    else{
        lpr(i, l - 1, l - ha/2){
            if(x[i] == 'a'){
                cout << ":(" << endl;
                return 0;
            }
        }
        ll po = l - ha/2;
        lp(i, 0, l - ha/2){
            if(x[i] == 'a')
                continue;
            if(x[i] != 'a' && x[i] != x[po]){
                cout << ":(" << endl;
                return 0;
            }
            po++;
        }
        lp(i, 0, ha/2 + ct)
            cout << x[i];
        cout << endl;
    }
}
