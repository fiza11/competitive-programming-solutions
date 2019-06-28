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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vi v(n);
        int c1 = 0, c0 = 0, c2 = 0;
        lp(i, 0, n){
            cin >> v[i];
            if(v[i] % 3 == 0)
                c0++;
            else if(v[i] % 3 == 1)
                c1++;
            else c2++;
        }
        cout << c0 + min(c1, c2) + (max(c1, c2) - min(c1, c2))/3<< endl;
    }
}
