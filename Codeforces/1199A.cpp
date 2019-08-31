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
    int n, x, y;
    cin >> n >> x >> y;
    vector <int> v(n);
    lp(i, 0, n)
        cin >> v[i];
    int z = 0;
    //int arr[n + 1] = {0};
    int max = 0, f1 = 1, f2 = 1;
    lp(i, 0, n){
        z = i;
        //trace(z);
        lpr(j, i - 1, i - x){
            if(j < 0)
                break;
            if(v[z] >= v[j]){
                //trace(v[z]);
                //trace(v[j]);
                f1 = 0;
                break;
            }
        }
        lp(j, i + 1, i + y + 1){
            if(j >= n)
                break;
            if(v[z] >= v[j]){
                f2 = 0;
                break;
            }
        }
        if(f2 == 1 && f1 == 1){
            cout << z + 1 << endl;
            return 0;
        }
        f2 = 1;
        f1 = 1;
    }
    cout << n << endl;
}
