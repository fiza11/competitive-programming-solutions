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
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector <ll> v(n), a(n);
        lp(i, 0, n){
            cin >> v[i];
            a[i] = 0;
        }
        stack<ll> s;
        ll ct = 0;
        s.push(v[0]);
        lp(i, 1, n){
            if (s.empty()){
                s.push(v[i]);
                continue;
            }
            while(s.empty() == false && s.top() > v[i]) {
                s.pop();
            }
            s.push(v[i]);
        }
        while (s.empty() == false) {
            ct++;
            s.pop();
        }
        cout << n - ct << endl;
    }
}
