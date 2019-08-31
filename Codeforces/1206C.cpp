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
    int n;
    cin >> n;
    if(n == 1){
      yes();
      cout << 1 << " " << 2 << endl;
      return 0;
    }
    int op = 2*n + 1;
    vector <int> v(op);
    v[1] = 1;
    v[n + 1] = 2;
    v[2] = 4;
    v[n + 2] = 3;
    int a = 1, f = 0, x = 1;
    lp(i, 3, n + 1){
      v[i] = v[i - 1] + a;
      v[i + n] = v[i] + x;
      if(a == 1){
        a = 3;
        x = -1;
      }
      else{
        a = 1;
        x = 1;
      }
    }
    int z = 0, y = 0;
    lp(i, 1, n + 1)
      z += v[i];
    lp(i, n + 2, 2*n + 1)
      y += v[i];
    y += 1;
    if(n % 2 == 0)
      no();
    else if(y - z == 1 || y == z){
      yes();
      lp(i, 1, 2*n + 1)
        cout << v[i] << " ";
      cout << endl;
    }
    else no();
}
