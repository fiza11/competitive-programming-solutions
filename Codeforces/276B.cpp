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
    string s, ans = "First";
    cin >> s;
    trace(s);
    int n = sz(s);
    trace(n);
    int arr[28] = {0};
    lp(i, 0, n){
        int y = (int)s[i] - 97;
        arr[y]++;
        trace(y);
    }
    int k = n, j = 0, flag = 0;
    lp(i, 0, 27){
        if(arr[i]%2)
            j++;
    }
    if(j == 0 || j == 1 || j % 2)
        cout << "First" << endl;
    else cout << "Second" << endl;
}
