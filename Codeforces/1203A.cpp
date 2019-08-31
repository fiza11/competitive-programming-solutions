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
    int q;
    cin >> q;
    while(q--){
      int n;
      cin >> n;
      vector <int> v(n);
      lp(i, 0, n)
        cin >> v[i];
      if(n == 1)
        yes();
      else{
        int k = n + 1, f1 = 0, f2 = 0, f = 0;
        vector <int> a(n);
        lp(i, 1, n){
          a[i - 1] = v[i] - v[i - 1];
        }
        a[n - 1] = -v[n - 1] + v[0];
        sort(all(a));
        if(a[0] < 0 && a[0] != -1){
          lp(i, 1, n){
            if(a[i] != 1){
              f = 1;
              break;
            }
          }
          if(f == 1)
            no();
          else yes();
        }
        else{
          lp(i, 0, n - 1){
            if(a[i] != -1){
              f = 1;
              break;
            }
          }
          if(f == 1)
            no();
            else yes();
        }
      }
    }
}
