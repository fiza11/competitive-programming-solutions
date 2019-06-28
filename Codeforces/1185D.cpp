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
    int n;
    ll i;
    cin >> n;
    vector <ll> v(n), f(n - 1), g(n);
    lp(i, 0, n){
        cin >> v[i];
        g[i] = v[i];
    }
    sort(all(v));
    lp(i, 0, n - 1){
        f[i] = v[i + 1] - v[i];
    }
    int y = 0;
    //trace(f.size());
    lp(i, 1, f.size()){
        //trace(i);
        trace(y);
        if(f[i] == f[0])
            y++;
    }
    trace(y);
    if(y == n - 2){
        //cout << "hi";
        trace(y);
        cout << 1 << endl;
        return 0;
    }
    y = 0;
    lp(i, 1, sz(f) - 1){
        if(f[i + 1] == f[i])
            y++;
    }
    if(y == n - 3 && f[0] != f[1]){
        //cout << "o";
        //trace(y);
        lp(i, 0, n){
            if(g[i] == v[0])
                cout << i + 1 << endl;
        }
        return 0;
    }
    y = 0;
    //trace(y);
    lp(i, 0, sz(f) - 2){
        //trace(f[i]);
        if(f[i + 1] == f[i])
            y++;
        //trace(y);
    }
    if(y == n - 3  && f[sz(f) - 1] != f[sz(f) - 2]){
        // trace(f[sz(f) - 1]);
        // trace(f[sz(f) - 2]);
        // //cout << "fdg";
        // trace(y);
        lp(i, 0, n){
            if(g[i] == v[n - 1])
                cout << i + 1 << endl;
        }
        return 0;
    }
    //ll i;
    int fp = 0, ct = 0, cr = 0, k;
    lp(i, 0, f.size() - 2){
        if(fp == 1){
            if(f[i] == k)
                ct++;
        }
        if(f[i] != f[i + 1] && (f[i] + f[i + 2] == f[i + 3]) && fp == 0){
            fp = 1;
            cr = i;
            k = f[i + 3];
            i = i + 2;
        }
    }
    if(fp == 0){
        cout << -1 << endl;
        return 0;
    }
    trace(ct);
    trace(cr);
    if(ct + cr + 4 == n){
        cout << cr + 3 << endl;
    }
    else cout << -1 << endl;
}
