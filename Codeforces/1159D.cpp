#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
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
    int n, k;
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k;
    if(n == k){
        lp(i, 0, n)
            cout << 1;
        cout << endl;
    }
    else{
        int diff = n - k;
        if(k == 1){
            cout << 1;
            lp(i, 0, n - 1)
                cout << 0;
            nl();
        }
        else if(k == 2){
            cout << 1;
            lp(i, 0, n - 2)
                cout << 0;
            cout << 1;
            nl();
        }
        else{
            int c = diff/2, t = 1;
            cout << 1;
            while(1){
                cout << 0;
                t++;
                if(t == n)
                    break;
                lp(i, 0, c){
                    cout << 1;
                    t++;
                    if(t == n)
                        break;
                }
                if(t == n)
                    break;
            }
            nl();
        }
    }
}
//sort(X.rbegin(), X.rend()); // Sort array in descending order using with reverse iterators
