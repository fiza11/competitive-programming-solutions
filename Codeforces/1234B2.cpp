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
main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, k;
    unordered_map<ll, bool> um;
    set <ll> s;
    cin >> n >> k;
    vector <ll> v(n), a;
    lp(i, 0, n){
        cin >> v[i];
        //um[v[i]] = false;
    }
    int ct = 0, flag = 0, index = 0, as = 0;
    lp(i, 0, n){
        flag = 0;
        if(s.find(v[i]) == s.end())
            flag = 0;
        else flag = 1;
        //if(um[v[i]] == true)
        //        flag = 1;
        if(flag == 0){
            if(ct == k){
                s.erase(a[index]);
                //um[a[index]]= false;
                index++;
                ct--;
            }
            s.insert(v[i]);
            //um[v[i]] = true;
            a.pb(v[i]);
            ct++;
        }
    }
    cout << ct << endl;
    as = a.size();
    int cnt = ct;
    lpr(i, as - 1, 0){
        //if(um[a[i]] == true){
            cout << a[i] << " ";
            cnt--;
            if(cnt == 0)
                break;
        //    um[a[i]] = false;
        //}
    }
    cout << endl;
}
