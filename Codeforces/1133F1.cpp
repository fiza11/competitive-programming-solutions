#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define trace(x) cerr<<#x<<": "<<x<<" "<<endl;
#define pb push_back
#define mp make_pair
#define ft first
#define sd second
#define lp(i, a, b) for(ll i = a; i < b; i++)
#define lpr(i, a, b) for(ll i = a; i >= b; i--)
vector <int> g[200005];
vector <pair<int, int>> v;
queue<int> q;
int vis[200005], deg[200005];
void bfs(int s){
    vis[s] = 1;
    q.push(s);
    while(!q.empty()){
        int t = q.front();
        q.pop();
        lp(i, 0, g[t].size()){
            int a = g[t][i];
            if(vis[a] == 0){
                v.pb(mp(a, t)), vis[a] = 1, q.push(a);
            }
        }
    }
}
main(){
    int n, m, a, b;
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    int max = 0;
    while(m--){
        cin >> a >> b;
        g[a].pb(b);
        g[b].pb(a);
        deg[a]++;
        deg[b]++;
    }
    int index;
    lp(i, 1, n + 1){
        if(max < deg[i])
            max = deg[i], index = i;
    }
    bfs(index);
    lp(i, 0, v.size()){
        cout << v[i].sd << " " << v[i].ft << endl;
    }
}
