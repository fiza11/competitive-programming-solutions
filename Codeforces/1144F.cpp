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
int flag = 0;
queue<int> q;
vector <int> g[200005];
vector <int> v;
int col[200005], vis[200005];
void color(int s){
    col[s] = 1;
    vis[s] = 1;
    q.push(s);
    while(!q.empty()){
        int a = q.front();
        vis[a] = 1;
        q.pop();
        lp(i, 0, g[a].size()){
            int t = g[a][i];
            if(col[t] == 0){
                q.push(t);
                vis[t] = 1;
                if(col[a] == 1)
                    col[t] = 2;
                else col[t] = 1;
            }
            else if((col[t] == 1 && col[a] == 1) || (col[a] == 2 && col[t] == 2)){
                flag = 1;
                break;
            }
        }
    }
}
main(){
    int n, m, a, b;
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    //g.resize(v + 1);
    while(m--){
        cin >> a >> b;
        g[a].pb(b);
        g[b].pb(a);
        v.pb(b);
    }
    color(1);
    if(flag == 1)
        cout << "NO" << endl;
    else{
        cout << "YES" << endl;
        lp(i, 0, v.size()){
            if(col[v[i]] == 2)
                cout << "1";
            else cout << "0";
        }
        cout << endl;
    }
}
