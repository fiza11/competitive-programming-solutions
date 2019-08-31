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
    int q;
    cin >> q;
    while(q--){
      int n;
      cin >> n;
      vector <int> v(4*n);
      lp(i, 0, 4*n)
        cin >> v[i];
      sort(all(v));
      vector <int> a(2*n);
      int f = 0;
      lp(i, 1, 4*n){
        if(v[i] != v[i - 1]){
          f = 1;
          break;
        }
        else i++;
      }
      if(f == 1)
        no();
      else{
          int y = 0;
          lp(i, 0, 4*n){
            a[y] = v[i];
            i++;
            y++;
          }
          ll k = a[0]*a[2*n - 1];
          lp(i, 1, n){
            if(a[i]*a[2*n - i - 1] != k){
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
