#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define lp(i, a, n) for(ll i = a; i < n; i++)
ll dis[10010], vis[10010], dis2[10010], vis2[10010], dis1[10010], vis1[10010];
vector <pair<ll, ll>> g[10010], r[10010];
priority_queue < pair<ll, ll>, vector<pair < ll, ll>>, greater<pair<ll, ll> >> pq, pq2, pq1;
void dk(ll src, ll v){
    lp(i, 0, v)
        dis[i] = INT_MAX;
    dis[src] = 0;
    pq.push(make_pair(dis[src], src));
    while(!pq.empty()){
        ll t = pq.top().second;
        pq.pop();
        vis[t] = 1;
        lp(i, 0, g[t].size()){
            if(dis[g[t][i].first] > dis[t] + g[t][i].second && vis[g[t][i].first] == 0){
                dis[g[t][i].first] = dis[t] + g[t][i].second;
                pq.push(make_pair(dis[g[t][i].first], g[t][i].first));
            }
        }
    }
}
void dk1(ll src, ll v){
    lp(i, 0, v)
        dis1[i] = INT_MAX;
    dis1[src] = 0;
    pq1.push(make_pair(dis1[src], src));
    while(!pq1.empty()){
        ll t = pq1.top().second;
        pq1.pop();
        vis1[t] = 1;
        lp(i, 0, r[t].size()){
            if(dis1[r[t][i].first] > dis1[t] + r[t][i].second && vis1[r[t][i].first] == 0){
                dis1[r[t][i].first] = dis1[t] + r[t][i].second;
                pq1.push(make_pair(dis1[r[t][i].first], r[t][i].first));
            }
        }
    }
}
void dk2(ll src, ll v, int dest){
    lp(i, 0, v)
        dis2[i] = INT_MAX;
    dis2[src] = 0;
    pq2.push(make_pair(dis2[src], src));
    while(!pq2.empty()){
        ll t = pq2.top().second;
        pq2.pop();
        vis2[t] = 1;
        lp(i, 0, g[t].size()){
            ll po = g[t][i].first;
            if(dis2[po] > dis2[t] + g[t][i].second && vis2[po] == 0 && dis[t] + g[t][i].second + dis1[po] != dis[dest]){
                dis2[po] = dis2[t] + g[t][i].second;
                pq2.push(make_pair(dis2[po], po));
            }
        }
    }
}
main(){
    while(1){
        memset(dis, 0, 10010);
        memset(dis1, 0, 10010);
        memset(dis2, 0, 10010);
        memset(vis, 0, 10010);
        memset(vis1, 0, 10010);
        memset(vis2, 0, 10010);
        lp(i, 0, 10010)
            g[i].clear(), r[i].clear();
        ll v, e, a, b, c, x, y;
        cin >> v >> e;
        //cout << v << " " << e << endl;
        if(v == 0 && e == 0){
            break;
        }
        //cout << "Hqswdi" << endl;
        cin >> x >> y;
        while(e--){
            cin >> a >> b >> c;
            g[a].push_back(make_pair(b, c));
            r[b].push_back(make_pair(a, c));
        }
        dk(x, v);
        dk1(y, v);
        //lp(i, 0, v)
        //    cout << dis[i] << " " << dis1[i] << endl;
        dk2(x, v, y);
        if(dis2[y] == INT_MAX)
            cout << "-1" << endl;
        else cout << dis2[y] << endl;
    }
    return 0;
}
