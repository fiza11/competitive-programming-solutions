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
    char arr[] = {'a', 'b', 'c'};
    string x;
    cin >> x;
    int l = x.length(), t = 0;
    lp(i, 0, l - 1){
        if(x[i] == x[i + 1]){
            while(x[i + 1] == arr[t] || x[i + 2] == arr[t]){
                t++;
            }
            x[i + 1] = arr[t];
            t = 0;
        }
    }
    cout << x << endl;
}
