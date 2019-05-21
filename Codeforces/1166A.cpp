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
int com(int n){
    return n*(n - 1)/2;
}

int arr[10000];
main(){
    int t;
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        arr[(int)s[0]]++;
    }
    int max = 0;
    lp(i, (int)'a', (int)'z' + 1){
        max += com(arr[i]/2) + com(arr[i] - arr[i]/2);
    }
    cout << max << endl;
}
