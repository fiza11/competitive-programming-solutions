#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
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
vi add(ll p){
    ll o;
    vi a;
    lp(i, 0, p){
        cin >> o;
        a.pb(o);
    }
    return a;
}
int vis[200010];
main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    vector <int> v(n), f(n);
    lp(i, 0, n)
        cin >> v[i];
    lp(i, 0, n)
        cin >> f[i];
    lp(i, 0, n){
        if(v[i] != 0)
            vis[v[i]] = -1;
    }
    lp(i, 0, n){
        if(f[i] != 0)
            vis[f[i]] = i + 1;
    }
    int f2 = 0;
    int flag = 0;
    int po = vis[1];
    if(vis[1] == n){
        lp(i, 2, n + 1){
            if(vis[i] > i - 2){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout << n - 1 << endl;
            return 0;
        }
    }
    else if(vis[1] != -1){
        trace(vis[1]);
        int op = 2;
        lp(i, vis[1], n){
            if(f[i] == op){
                op++;
            }
            else f2 = 1;
        }
        if(f2 == 0){
            lp(i, f[n - 1] + 1, n + 1){
                if(vis[i] >= i - f[n - 1]){
                    f2 = 1;
                    break;
                }
            }
            if(f2 == 0){
                cout << vis[1] - 1 << endl;
                return 0;
            }
        }
        trace(f2);
    }
    else if(vis[1] == -1){
        int mc = 0, y;
        lp(i, 2, n + 1){
            y = vis[i] - i + 1;
            if(mc < y)
                mc = y;
        }
        cout << mc + n << endl;
    }
    int max = 0, ko = 0;
    if(f2 == 1 || flag == 1){
        lp(i, 2, n + 1){
            if(vis[i] == -1)
                continue;
            ko = vis[i] - i + 1 - vis[1];
            if(max < ko)
                max = ko;
        }
        cout << max + vis[1] + n << endl;
    }
}
