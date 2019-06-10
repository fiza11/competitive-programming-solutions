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
#define lp(i, a, b) for(i = a; i < b; i++)
#define lpr(i, a, b) for(i = a; i >= b; i--)
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
struct line{
    float a, b, c;
};
bool compare(line t, line o){
    return t.a < o.a;
}
main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll n, i;
    cin >> n;
    vector <ii> v(n);
    //vector <line> g;
    //set <line> sf;
    set <pair<double, double>> st;
    map<double, int> mp;
    lp(i, 0, n){
        cin >> v[i].ft >> v[i].sd;
        //v.pb(mp(p, o));
    }
    //    cin >> v[i].ft >> v[i].sd;
    //int x, y, z, f, r;
    int j;
    lp(i, 0, n){
        lp(j, i + 1, n){
            if(v[i].ft == v[j].ft)
                st.insert({ULONG_MAX, v[i].ft});
            else{
                double k = 1.0*(v[j].sd - v[i].sd)/(v[j].ft - v[i].ft);
                st.insert({k, v[i].sd - k*v[i].ft});
            }
        }
    }
    ll pop = st.size(), ans = 0;
    for(auto it : st)
        mp[it.ft]++;
    for(auto it : mp)
        ans += it.sd*(pop - it.sd);
    cout << ans/2 << endl;
}
