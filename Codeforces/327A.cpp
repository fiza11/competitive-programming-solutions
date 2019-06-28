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
    int n;
    cin >> n;
    int a[n + 1];
    add(a, n);
    int dp[101][101]; //dp[i][j] = no of 1s from i to j
    dp[0][0] = a[0];
    int one = 0, zero = 0;
    lp(i, 0, n){
        if(a[i])
            one++;
        else zero++;
        lp(j, i, n){
            if(i == j)
                dp[i][j] = a[i];
            else dp[i][j] = dp[i][j - 1] + a[j];
        }
    }
    int max = 0;
    lp(i, 0, n){
        lp(j, i, n){
            int k = j - i + 1;
            int n1 = k - dp[i][j];
            int y = one - dp[i][j];
            if(max < y + n1)
                max = y + n1;
            // trace(i);
            // trace(j);
            // trace(max);
        }
    }
    cout << max << endl;
}
