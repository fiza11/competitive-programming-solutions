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
    priority_queue <ll> v, x;
    ll n, m;
    vector <ll> f;
    cin >> n >> m;
    ll s = 0, d;
    ll y = 0, a;
    lp(i, 0, n){
        //trace(s);
        //trace(y);
        cin >> a;
        //v.push(a);
        y = 0;
        s += a;
        d = s;
        if(s <= m)
            cout << y << " ";
        else{
            //int l = v.size();
            while(1){
                //trace(s);
                //trace(y);
                //trace(v.top());
                    //int l = v.size();
                    s -= v.top();
                    f.pb(v.top());
                    v.pop();
                    //l--;
                    y++;
                    if(s <= m){
                        cout << y << " ";
                        break;
                    }
            }
            s = d;
            lp(j, 0, f.size()){
                v.push(f[i]);
            }
            //x = v;
        }
        v.push(a);
        //sort(all(v));
    }
    cout << endl;
}
