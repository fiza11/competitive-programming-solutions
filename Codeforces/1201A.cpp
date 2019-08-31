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
    int n, m;
    cin >> n >> m;
    int a = n, y = 0;
    vector <vector<int>> g;
    g.resize(n + 1);
    while(a--){
        string s;
        cin >> s;
        lp(i, 0, m){
            if(s[i] == 'A')
                g[y].pb(1);
            else if(s[i] == 'B')
                g[y].pb(2);
            else if(s[i] == 'C')
                g[y].pb(3);
            else if(s[i] == 'E')
                g[y].pb(5);
            else g[y].pb(4);
        }
        y++;
    }
    vector <int> v(m);
    lp(i, 0, m)
        cin >> v[i];
    ll sum = 0, k = 0;
    lp(i, 0, m){
        int arr[6] = {0};
        lp(j, 0, n){
            arr[g[j][i]]++;
        }
        sum += v[k]*(max(max(max(arr[1], arr[2]), max(arr[3], arr[4])), arr[5]));
        k++;
    }
    cout << sum << endl;
}
