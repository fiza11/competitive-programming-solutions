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
    int n;
    cin >> n;
    vector <int> v(n), a(n, 0);
    lp(i, 0, n)
        cin >> v[i];
    sort(all(v));
    int ct = 1;
    lp(i, 0, n){
        if(a[i] != 0)
            continue;
        a[i] = ct;
        lp(j, i + 1, n){
            if(v[j]%v[i] == 0){
                a[j] = ct;
            }
        }
        ct++;
    }
    cout << ct - 1 << endl;
}
