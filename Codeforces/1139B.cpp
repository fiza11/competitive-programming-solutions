#include "bits/stdc++.h"
using namespace std;
#define trace(x) cerr<<#x<<": "<<x<<" "<<endl;
#define pb push_back
#define mp make_pair
#define ft first
#define sd second
typedef long long ll;
#define lp(i, a, b) for(ll i = a; i < b; i++)
#define lpr(i, a, b) for(ll i = b; i >= a; i--)
main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll n, arr[200005], b[200005];
    cin >> n;
    lp(i, 0, n)
    cin >> arr[i];
    lpr(i, 0, n - 2){
        if(arr[i + 1] == 0)
        arr[i] = 0;
        else if(arr[i] == arr[i + 1] && arr[i] != 0)
        arr[i] = arr[i] - 1;
        else if(arr[i] > arr[i + 1])
        arr[i] = arr[i + 1] - 1;
    }
    ll sum = 0;
    lp(i, 0, n)
        sum += arr[i];
    cout << sum << endl;
}
