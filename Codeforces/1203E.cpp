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
    int t;
    cin >> t;
    int arr[150003] = {0};
    vector <int> v(t);
    lp(i, 0, t)
      cin >> v[i];
    sort(all(v));
    int k = v[t - 1] + 1;
    arr[k] = 1;
    int n = 1;
    lpr(i, t - 2, 0){
      if(arr[v[i] + 1] == 0){
        arr[v[i] + 1] = 1;
        n++;
      }
      else if(arr[v[i]] == 0){
          arr[v[i]] = 1;
          n++;
      }
      else if(arr[v[i] - 1] == 0 && v[i] > 1){
          arr[v[i] - 1] = 1;
          n++;
      }
    }
    cout << n << endl;
}
