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
    llu a;
    while(t--){
        cin >> a;
        if(a == 1)
            cout << 0 << endl;
        else{
            int ct = 0;
            while(a % 2 == 0){
                ct++;
                a /= 2;
            }
            while(a % 3 == 0){
                ct += 2;
                a /= 3;
            }
            while(a % 5 == 0){
                ct += 3;
                a /= 5;
            }
            if(a == 1)
                cout << ct << endl;
            else cout << -1 << endl;
        }
    }
}
