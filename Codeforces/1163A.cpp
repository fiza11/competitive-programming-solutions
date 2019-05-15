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
    int a, b, c;
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> a >> c;
    b = a - c;
    if(c > a/2)
        cout << a - c << endl;
    else{
        if(c == 0 || c == 1)
        cout << 1 << endl;
        else cout << c << endl;
    }
}
