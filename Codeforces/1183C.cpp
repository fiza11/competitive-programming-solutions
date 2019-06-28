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
    int q;
    cin >> q;
    while(q--){
        ll k, n, a, b, t;
        cin >> k >> n >> a >> b;
        if(n* b >= k)
        cout << -1 << endl;
        else{
            t = (k - (b * n))/(a - b);
            if((k - b * n) % (a - b) == 0){
                if(t - 1 >= n)
                    cout << n << endl;
                else cout << t - 1 << endl;
            }
            else{
                if(t >= n)
                    cout << n << endl;
                else cout << t << endl;
            }
        }
    }
}
