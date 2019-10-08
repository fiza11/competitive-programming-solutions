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
        int n;
        cin >> n;
        vector <ll> v(n);
        lp(i, 0, n)
            cin >> v[i], v[i] /= 100;
        sort(v.begin(), v.end(), greater<ll>());
        int x, a, y, b, temp;
        ll k;
        cin >> x >> a >> y >> b >> k;
        llu sum = 0, index = 1, p = 0, m = 1;
        if(x < y){
            swap(x, y);
            swap(a, b);
        }
        x -= y;
        int count = 0, i2 = 0, ct = 1, i1 = 0, i3 = 0;
        while(ct <= n && p < k){
            if(ct % a == 0 || ct % b == 0)
                p += v[i1++] * y;
            if(ct % a == 0)
                p += v[i2++] * x;
            if(ct % a == 0 && ct % b == 0)
                p += v[i3++] * y;
            ct++;
        }
        if(p >= k)
            cout << ct - 1 << endl;
        else cout << -1 << endl;
    }
}
