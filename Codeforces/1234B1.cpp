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
    int n, k;
    cin >> n >> k;
    vector <ll> v(n), a;
    lp(i, 0, n)
        cin >> v[i];
    int ct = 0, flag = 0, index = 0, as = 0;
    lp(i, 0, n){
        flag = 0;
        as = a.size();
        lp(j, 0, as){
            if(a[j] == v[i]){
                flag = 1;
            }
        }
        if(flag == 0){
            if(ct == k){
                a[index] = -1;
                index++;
                ct--;
            }
            a.pb(v[i]);
            ct++;
        }
    }
    cout << ct << endl;
    as = a.size();
    lpr(i, as - 1, 0){
        if(a[i] != -1)
            cout << a[i] << " ";
    }
    cout << endl;
}
