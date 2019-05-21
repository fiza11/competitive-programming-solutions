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
typedef vector <ll> vect;
typedef pair<int, int> pii;
void yes(){
    cout << "YES" << endl;
}
void no(){
    cout << "NO" << endl;
}
main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll a, b, flag = 0;
        vect v, r;
        cin >> a;
        lp(i, 0, a){
            cin >> b;
            v.pb(b);
        }
        sort(v.begin(), v.end());
        ll po = v[a - 1]*v[0];
        trace(po);
        int ct = 0;
        trace(sqrt(po));
        trace(floor(sqrt(po)));
        lp(i, 2, floor(sqrt(po)) + 1){
            if(po % i == 0){
                if(i*i == po)
                    r.pb(i);//, ct++;
                else{
                    r.pb(i);
                    r.pb(po/i);
                }
            }
        }
        sort(r.begin(), r.end());
        lp(i, 0, r.size())
            trace(r[i]);
        if(r != v)
            flag = 1;
        if(flag == 1)
            cout << -1 << endl;
        else cout << po << endl;
        // if(ct - 2 == a){
        //
        //     cout << po << endl;
        // }
        // else cout << -1 << endl;
    }
}
