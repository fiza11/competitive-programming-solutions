#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define trace(x) cerr<<#x<<": "<<x<<" "<<endl;
#define pb push_back
//#define mp make_pair
//#define ft first
//#define sd second
#define lp(i, a, b) for(ll i = a; i < b; i++)
#define lpr(i, a, b) for(ll i = b; i >= a; i--)
using namespace std;
ll vis[400000],vis2[400000],arr[400000][26], deg[100000];
vector<vector<ll> > g(400000);
char s[400000];
// int cycle(int s){
//   vis[s] = 1;
//   //cout<<s<<" ";
//   for(int i = 0; i < g[s].size(); i++){
//     if(vis[g[s][i]] == 1)
//          flag = 1, return 1;
//     else if(vis[g[s][i]] == 0)
//         cycle(g[s][i]);
//   }
//   return 0;
// }
int cycle(ll sc){
    vis[sc] = 1;
    lp(i, 0, g[sc].size()){
        if(vis[g[sc][i]] == 0)
            if(cycle(g[sc][i]))
                return 1;
        if(vis[g[sc][i]] == 1)
            return 1;
    }
    vis[sc] = 2;
    return 0;
}
vector <ll> va;
queue <ll> tq;
void topo(){
  while(!tq.empty()){
    ll t = tq.front();
    va.pb(t);
    //cout << t << " ";
    tq.pop();
    lp(i, 0, g[t].size()){
      deg[g[t][i]]--;
      if(deg[g[t][i]] == 0)
        tq.push(g[t][i]);
    }
  }
}
void dfs(ll sc){
    vis2[sc] = 1;
    lp(i, 0, g[sc].size()){
        if(vis2[g[sc][i]] == 0)
            dfs(g[sc][i]);
        ll f = g[sc][i];
        lp(j, 0, 26){
            arr[sc][j] = max(arr[sc][j],arr[f][j]);
        }
    }
    arr[sc][(int)s[sc-1]-'a']++;
}

int main(){
    ll a, b;
    //string s;
    cin >> a >> b >> s;
    lp(i, 0, b){
        ll x, y;
        cin >> x >> y;
        g[x].pb(y);
    }
    lp(i, 1, a + 1){
        if(vis[i] == 0){
            if(cycle(i) == 1){
                cout << "-1" << endl;
                return 0;
            }
        }
    }
    // for(int i = 1; i <= v; i++){
    //   cout<<i<<"->";
    //   for(int j = 0; j < g[i].size(); j++)
    //   cout<<g[i][j]<<" ";
    //   cout<<endl;
    // }
    // for (int i = 1; i <= v; i++)
    //   if(vis[i] == 0)
    //     cycle(i), vis[i] = 2;
    // if(flag == 0)
    // cout << "NO cycle!" << endl;
    lp(i, 1, a + 1){
        if(vis2[i] == 0){
            dfs(i);
        }
    }
    ll ans = 0;
    lp(i, 1, a + 1){
        lp(j, 0, 26){
            ans = max(ans, arr[i][j]);
        }
    }
    cout << ans << endl;
}
