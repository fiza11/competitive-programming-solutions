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
    int n;
    cin >> n;
    int t = n/2 + 1;
    if(n % 2 == 0){
        cout << n/2 + 1 << endl;
        lp(i, 1, t + 1){
                cout << 1 << " " << i << endl;
        }
        lp(i, 2, t){
            cout << i << " " << t << endl;
        }
    }
    else{
        cout << t << endl;
        lp(i, 1, t + 1){
                cout << 1 << " " << i << endl;
        }
        lp(i, 2, t + 1){
            cout << i << " " << t << endl;
        }
    }
}
