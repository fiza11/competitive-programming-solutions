#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define trace(x) cerr<<#x<<": "<<x<<" "<<endl;
#define pb push_back
#define mp make_pair
#define ft first
#define sd second
#define lp(i, a, b) for(ll i = a; i < b; i++)
#define lpr(i, a, b) for(ll i = a; i >= b; i--)
void yes(){
    cout << "YES" << endl;
}
void no(){
    cout << "NO" << endl;
}
bool prime[1000005];
void seive(int a){
    memset(prime, true, a + 1);
    for(int j = 2; j*j <= a; j++){
        if(prime[j] == true){
            for(int i = 2*j; i <= a; i += j)
                prime[i] = false;
        }
    }
}
main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    seive(1000005);
    cin >> t;
    while(t--){
        int a, flag = 0;
        ll b;
        vector <ll> v, pv;
        cin >> a;
        lp(i, 0, a){
            cin >> b;
            v.pb(b);
            //if(prime[b] == true)
            //    pv.pb(b);
        }
        sort(v.begin(), v.end());
        ll k = v[v.size() - 1] * v[0];
        ll m = 0, i;
        while(1){
            if(prime[v[m]] == true){
                for(i = 0; i < v.size() - 1; i++){
                    if(k % v[i] != 0){
                        m++;
                        break;
                    }
                }
            }
            else m++;
            if(m == v.size()){
                cout << -1 << endl;
                break;
            }
            if(i == v.size() - 1){
                cout << k << endl;
                break;
            }
            k = v[v.size() - 1] * v[m];
        }
    }
}
