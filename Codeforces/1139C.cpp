#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define trace(x) cerr<<#x<<": "<<x<<" "<<endl;
#define pb push_back
#define mp make_pair
#define ft first
#define sd second
#define lp(i, a, b) for(ll i = a; i < b; i++)
#define lpr(i, a, b) for(ll i = b; i >= a; i--)
ll vis[1000000];
queue <int> q;
const int modd = 1e9 + 7;
ll power(ll x, ll y, ll mod){
    if(x == 0)
        return 0;
    ll res = 1;
    x = x % mod;
    while (y > 0){
        if (y & 1)
            res = ((res % mod) * (x % mod)) % mod;
        y = y >> 1;
        x = ((x % mod) * (x % mod)) % mod;
    }
    return res % mod;
}
vector< vector <int> > g;
int bfs(int s){
  ll count = 0;
  q.push(s);
  vis[s] = 1;
  while(!q.empty()){
    count++;
    int t = q.front();
    q.pop();
    for(int i = 0; i < g[t].size(); i++){
      if(vis[g[t][i]] == 0)
      vis[g[t][i]] = 1, q.push(g[t][i]);
    }
  }
  return count;
}
main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, k, a, b, c;
    cin >> n >> k;
    g.resize(n + 2);
    lp(i, 0, n - 1){
        cin >> a >> b >> c;
        if(c == 0){
            g[a].pb(b);
            g[b].pb(a);
        }
    }
    c = power(n, k, modd);
    //c %= modd;
    ll sum = 0;
    lp(i, 1, n + 1){
        if(vis[i] == 0){
            a = bfs(i);
            sum = power(a, k, modd);// % modd;
            c = (c % modd - sum % modd) % modd;
        }
    }
    c %= modd;
    c += modd;
    c %= modd;
    //sum = sum % modd;
    //cout << sum <<endl;
    cout << c << endl;
    //cout << (power(n, k, modd) - sum) << endl;
}
