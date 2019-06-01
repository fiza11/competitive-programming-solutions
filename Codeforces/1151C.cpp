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
bool even(ll a){
    if(a % 2 == 0)
        return true;
    else false;
}
ll term(ll a){
    if(a == 1 || a == 2)
        return a - 1;
    else{
        ll po = log2(a);
        if(po % 2 == 0)
            return term(pow(2, log2(a) - 1)) + pow(2, log2(a) - 1) - 1;
        else return term(pow(2, log2(a) - 1)) + 1;
    }
}
main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll l, r, aa, rr, ans, rs, ls, nle, nlo, nre, nro, t;
    ll mod = 1e9 + 7;
    cin >> l >> r;
    lp(i, 0, l){
        if(pow(2, i) > l){
            break;
        }
        aa = i;
    }
    lp(i, 0, r){
        if(pow(2, i) > r){
            break;
        }
        rr = i;
    }
    int fo = 0, fe = 0;
    if(aa % 2 == 0){
        t = term(pow(2, aa));
        nle =  t;
        nlo = l - t;
        fo = 1;
    }
    else{
        fe = 1;
        t = term(pow(2, aa));
        nlo = pow(2, aa) - t;
        nle = l - nlo;
    }
    //trace(rr);
    //cout << endl;
    if(rr % 2 == 0){
        t = term(pow(2, rr));
        nre =  t;
        nro = r - t;
    }
    else{
        //cout << "hi" << endl;
        t = term(pow(2, rr));
        //cout << term(4) << term(8)<< endl;
        trace(t);
        trace(rr);
        nro = pow(2, rr) - t;
        nre = r - nro;
        //trace(nro);
        //trace(nre);
    }
    trace(nlo);
    trace(nle);
    trace(aa);
    trace(rr);
    trace(nre);
    trace(nro);
    rs = ((((nro % mod)*(nro % mod)) % mod) + ((nre % mod)*((nre + 1) % mod))) % mod;
    if(fo == 1)
        ls = (((((nlo - 1) % mod)*((nlo - 1) % mod)) % mod) + ((nle % mod)*((nle + 1) % mod))) % mod;
    else ls = ((((nlo % mod)*(nlo % mod)) % mod) + ((nle % mod)*((nle - 1) % mod))) % mod;
    ans = (rs % mod - ls % mod + mod) % mod;
    //if(l != 1)
    //    ans = (ans % mod + )
    cout << ans << endl;
}
