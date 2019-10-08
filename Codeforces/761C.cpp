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
#define lp(i, a, b) for(int i = a; i < b; i++)
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
    int n, m, ct = 0, po, nn;
    cin >> n >> m;
    nn = n;
    ct = 0;
    vector <int> v1(n), v2(n), v3(n);
    lp(i, 0, n){
        v1[i] = 53;
        v2[i] = 53;
        v3[i] = 53;
    }
    while(nn--){
        string s;
        cin >> s;
        lp(i, 0, m){
            if(s[i] <= '9' && s[i] >= '0'){
                po = min(m - i, v1[ct]);
                v1[ct] = min(i, po);
            }
            else if(s[i] <= 'z' && s[i] >= 'a'){
                po = min(m - i, v2[ct]);
                v2[ct] = min(i, po);
            }
            else{
                po = min(m - i, v3[ct]);
                v3[ct] = min(i, po);
            }
        }
        //v1 - digit
        //v2 - small
        ct++;
     }
    // lp(i, 0, n){
    //     trace(v1[i]);
    //     trace(v2[i]);
    //     trace(v3[i]);
    // }
    int sum = 0, ans = INT_MAX;
    lp(i, 0, n){
        lp(j, 0, n){
            lp(k, 0, n){
                if(j != i && j != k){
                    sum = v1[i] + v2[j] + v3[k];
                    ans = min(sum, ans);
                }
            }
        }
    }
    cout << ans << endl;
}
