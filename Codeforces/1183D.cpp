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
    int q;
    cin >> q;
    while(q--){
        ll n, i;
        cin >> n;
        vector <ll> v(n);
        ll maxx = 0;
        lp(i, 0, n){
            cin >> v[i];
            if(maxx < v[i])
                maxx = v[i];
        }
        ll a[maxx + 1], b[maxx + 1];
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(a));
        lp(i, 0, n){
            a[v[i]]++;
        }
        vector <ll> c;
        lp(i, 0, n){
            if(b[v[i]] == 0){
                c.pb(a[v[i]]);
                b[v[i]] = 1;
            }
        }
        sort(all(c));
        ll max = c[sz(c) - 1];
        ll sum = max;
        max -= 1;
        for(i = sz(c) - 2; i >= 0; i--){
            if(max <= 0)
                break;
            if(c[i] >= max){
                sum += max;
                max--;
            }
            else {
                sum += c[i];
                max = c[i] - 1;
            }
        }
        cout << sum << endl;
    }
}
