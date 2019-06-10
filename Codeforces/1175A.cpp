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
    llu n, k;
    int t;
    cin >> t;
    while(t--){
        ll ct = 0;
        cin >> n >> k;
        if(n < k || k == 1){
            cout << n << endl;
        }
        else if(n == k)
            cout << 2 << endl;
        else{
            while(n > 0){
                //ll ct = 0;
                while(n % k == 0){
                    n /= k;
                    ct++;
                }
                if(n < k) {
                    ct += n;
                    break;
                }
                else if(n == k){
                    ct += 2;// << endl;
                    break;
                }
                ll po = n/k;
                ct += (n - (po * k));
                n = po*k;
            }
            cout << ct << endl;
        }
    }
}
