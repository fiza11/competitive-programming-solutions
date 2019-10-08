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
    int n, k, l;
    cin >> n >> k >> l;
    llu m = n*k;
    vector <ll> v(m), a(m), vol(n);
    lp(i, 0, m){
        cin >> v[i];
        a[i] = 0;
    }
    sort(all(v));
    ll min = v[0], max = 0, max_index;
    max_index = upper_bound(v.begin(), v.end(), l + v[0]) - v.begin();
    //trace(max_index);
    if(max_index < n){
        //trace(n);
        cout << 0 << endl;
        return 0;
    }
    ll ct = 1, no = 0;
    lpr(i, max_index, 0){
        a[i] = 1;
        no++;
        if(no == n)
            break;
    }
    ll sum = 0;
    vol[0] = v[0];
    int vol_index = 0, index = 0;
    ll x = 0;
    sum = 0;
    lp(i, 0, n){
        sum += v[x];
        x++;
        lp(j, 0, k - 1){
            if(x < max_index - n + i + 1)
                x++;
            else break;
        }
    }
    cout << sum << endl;
}
