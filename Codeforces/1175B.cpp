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
vi fa(ll p){
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
    stack <ll> st;
    st.push(1);
    ll ans = 0;
    ll ko = pow(2, 32);
    while(t--){
        if(ans >= ko){
            cout << "OVERFLOW!!!" << endl;
            return 0;
        }
        string x;
        int n;
        cin >> x;
        if(x[0] == 'a')
            ans += st.top();
        else if(x[0] == 'e')
            st.pop();
        else{
            cin >> n;
            st.push(min(n * st.top(), ko));
        }
    }
    if(ans >= ko)
        cout << "OVERFLOW!!!" << endl;
    else cout << ans << endl;
}
