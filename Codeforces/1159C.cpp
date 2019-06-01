#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector< int > vi;
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
    int n, m;
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    vi v, w;
    v = add(n);
    w = add(m);
    ll sv = 0, sw = 0, mv = 0, mw = INT_MAX;
    lp(i, 0, n){
        sv += v[i];
        if(v[i] > mv)
            mv = v[i];
    }
    lp(i, 0, m){
        sw += w[i];
        if(w[i] < mw)
            mw = w[i];
    }
    if(mv > mw){
        cout << -1 << endl;
        return 0;
    }
    sort(all(v));
    sort(all(w));
    ll ct;
    if(mv == w[0])
        ct = sv * m + sw - mv * m;
    else ct = sv * m + sw - mv * (m - 1) - v[n - 2];
    // lp(i, po + 1, n)
    //     ct += v[i];
    cout << ct << endl;
}
//sort(X.rbegin(), X.rend()); // Sort array in descending order using with reverse iterators
