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
main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    vector <ll> v(n + 1);
    ll an = 1e9;
    lp(i, 0, n)
        cin >> v[i];
    lp(i, 0, n){
        ll p = v[i];
        ll ct = 0;
        lp(j, 0, i){
            if((p - v[j])% 2 != 0)
                ct++;
            else continue;
        }
        lp(j, i, n){
            if((v[j] - p)% 2 != 0)
                ct++;
            else continue;
        }
        an = min(ct, an);
    }
    cout << an << endl;
}
