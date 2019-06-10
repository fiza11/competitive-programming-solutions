#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector< ll > vi;
typedef vector< vi > vvi;
typedef pair< int,int > ii;
#define sz(a) int((a).size())
#define trace(x) cerr<<#x<<": "<<x<<" "<<endl;
#define pb push_back
#define mp make_pair
#define ft first
#define sd second
#define lp(i, a, b) for(ll i = a; i < b; i++)
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
vi add(ll p){
    ll o;
    vi a;
    lp(i, 0, p){
        cin >> o;
        a.pb(o);
    }
    return a;
}
main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll a, b, c, d, k, t;
    vi va, vb, v;
    cin >> a >> b >> c >> d >> k;
    lp(i, 0, a){
        cin >> t;
        va.pb(t + c);
    }
    lp(i, 0, b){
        cin >> t;
        vb.pb(t);
    }
    if(k >= a || k >= b){
        cout << -1 << endl;
        return 0;
    }
    lp(i, 0, a){
        v.pb(lower_bound(all(vb), va[i]) - vb.begin());
        //trace(v[i]);
    }
    ll max = 0, po = k, sum = 0;
    if(k + v[0] < b){
        sum = vb[v[0] + po] + d;
        if(sum > max)
            max = sum;
    }
    else{
        cout << -1 << endl;
        return 0;
    }
    lp(i, 0, a - 1){
        po = k - i - 1;
        //sum = 0;
        if(po < 0)
            break;
        if(po + v[i + 1] < b){
            sum = vb[v[i + 1] + po] + d ;
            if(sum > max)
                max = sum;
        }
        else{
            cout << -1 << endl;
            return 0;
        }
    }
    // if(max > vb[b - 1] + d){
    //     cout << -1 << endl;
    //     return 0;
    // }
    cout << max << endl;
}
//sort(X.rbegin(), X.rend()); // Sort array in descending order using with reverse iterators
