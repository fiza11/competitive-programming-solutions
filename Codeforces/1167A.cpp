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
void yes(){
    cout << "YES" << endl;
}
void no(){
    cout << "NO" << endl;
}
main(){
    int t;
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while(t--){
        int a, p;
        string x;
        cin >> a;
        p = a + 1;
        cin >> x;
        lp(i, 0, a){
            if(x[i] == '8'){
                p = i;
                break;
            }
        }
        int y = a - p;
        if(y >= 11)
            yes();
        else no();
    }
}
