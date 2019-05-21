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
main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, a;
    cin >> n;
    vi x, y, z;
    lp(i, 0, n){
        cin >> a;
        if(a >= 0)
            x.pb(a);//, z.pb(a);
        else if(a < 0)
            x.pb(-a);//, z.pb(a);
    }
    sort(all(x));
    int t = 0, max = 0, ct = 0;
    ll ans = 0;
    lp(i, 0, x.size()){
        ans += upper_bound(all(x), 2*x[i]) - x.begin() - 1 - i;
    }
    cout << ans << endl;
}
