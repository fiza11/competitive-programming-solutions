#include "bits/stdc++.h"
#define pb push_back
#define mp make_pair
using namespace std;
vector< vector <int> > g;
#define lp(i, a, b) for(int i = a; i < b; i++)
int vis[500005], amt[500005];//, level[100000], col[100000], deg[100000];
queue<int> q;
stack <int> st;
void dfs(int s){
      vis[s] = 1;
      lp(i, 0, g[s].size()){
        if(vis[g[s][i]] == 0)
            dfs(g[s][i]);
      }
      st.push(s);
      return;
}
//vector <pair <int, int>> fg;
main(){
      int v, e;
      cin >> v >> e;
      g.resize(v + 2);
      while(e--){
         // cout << 342 << endl;
        int x, to;
        vector <int> arr;
        cin >> x;
        lp(i, 0, x){
            cin >> to;
            arr.pb(to);
        }
        lp(i, 0, x - 1){
            g[arr[i]].pb(arr[i + 1]);
            g[arr[i + 1]].pb(arr[i]);
        }
      }
      lp(i, 1, v + 1){
          if(vis[i] == 0){
              dfs(i);
              amt[i] = st.size();
              while(!st.empty()){
                  int y = st.top();
                  amt[y] = amt[i];
                  st.pop();
              }
          }
      }
      lp(i, 1, v + 1)
        cout << amt[i] << " ";
    cout << endl;
}
