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
void add(int *a, int n){
    lp(i, 0, n)
        cin >> a[i];
}
main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int q;
    cin >> q;
    llu a, b, c, d, e, f;
    while(q--){
        cin >> a >> b >> c;
        d = max(max(a, b), c);
        if(a == d){
            e = max(b, c);
            f = min(b, c);
        }
        else if(b == d){
            e = max(a, c);
            f = min(a, c);
        }
        else{
            e = max(a, b);
            f = min(a, b);
        }
        if(d < e - f){
            cout << f + d << endl;
        }
        else{
            cout << e + (d - e + f)/2 << endl;
        }
    }
}
