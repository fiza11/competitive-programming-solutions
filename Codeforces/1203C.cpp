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
ll gcd(ll a, ll b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
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
    ll n;
    cin >> n;
    vector <ll> v(n);
    lp(i, 0, n)
      cin >> v[i];
    ll gd = v[0];
    lp(i, 1, n){
      //cout << gd << endl;
      gd = gcd(v[i], gd);
    }
    ll ko = floor(sqrt(gd));
    //cout << gd << endl;
    ll r = 0;
    lp(i, 1, ko + 1){
        if (gd % i == 0){
            if (gd/i == i)
                r += 1;
            else
                r += 2;
        }
    }
    cout << r << endl;
}
