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
        ll n, m;
        cin >> n >> m;
        ll t;
        t = n/m;
        ll k = 1;
        unsigned long long sum = 0;
        if(t <= 10){
            while(k <= t){
                sum += ((k*m)%10);
                k++;
            }
        }
        else{
            ll o = t/10;
            k = 1;
            while(k < 10){
                sum += ((k*m)%10);
                k++;
            }
            sum *= o;
            lp(i, 1, (t%10) + 1){
                sum += ((i*m)%10);
            }
        }
        cout << sum << endl;
    }
}
