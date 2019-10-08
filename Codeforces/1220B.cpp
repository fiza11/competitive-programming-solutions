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
    llu a[n + 1][n + 1];
    lp(i, 0, n){
        lp(j, 0, n)
            cin >> a[i][j];
    }
    llu a1 = (a[0][1]*a[0][2])/a[1][2];
    llu aa1 = sqrt(a1);
    llu ans[10000];
    lp(i, 2, n + 1){
        ans[i] = a[0][i - 1]/aa1;
    }
    cout << aa1 << " ";
    lp(i, 2, n + 1)
        cout << ans[i] << " ";
        cout << endl;
}
