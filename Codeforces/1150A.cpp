
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
    int n, m, p;
    int arr[40], b[40];
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m >> p;
    lp(i, 0, n)
        cin >> arr[i];
    lp(i, 0, m)
        cin >> b[i];
    int min1 = INT_MAX, max1 = 0;
    lp(i, 0, n){
        if(min1 > arr[i])
            min1 = arr[i];
    }
    lp(i, 0, m){
        if(max1 < b[i])
            max1 = b[i];
    }
    int y = p/min1;
    if(y*max1 - y*min1 <= 0)
        cout << p << endl;
    else cout << p - y*min1 + y*max1 << endl;
}
