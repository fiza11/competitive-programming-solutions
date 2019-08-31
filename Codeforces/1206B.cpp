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
    vector <ll> v(n);
    lp(i, 0, n)
      cin >> v[i];
    unsigned long long sum = 0;
    int zero = 0;
    lp(i, 0, n){
      if(v[i] == 0)
        zero++;
      else if(v[i] < 0){
        sum += (-1 - v[i]);
        v[i] = -1;
      }
      else {
        sum += v[i] - 1;
        v[i] = 1;
      }
      //trace(sum);
    }
    int k = 1;
    lp(i, 0, n){
      if(v[i] != 0)
        k *= v[i];
    }
    if(k == 1){
      cout << sum + zero << endl;
    }
    else{
      if(zero == 0){
        cout << sum + 2 << endl;
      }
      else{
        cout << sum + zero << endl;
      }
    }

}
