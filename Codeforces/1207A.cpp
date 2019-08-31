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
    int t, b, p, f, h, c;
    cin >> t;
    unsigned long long sum = 0;
    while(t--){
        sum = 0;
        cin >> b >> p >> f;
        cin >> h >> c;
        if(h > c){
            if(2*p > b){
                int k = b/2;
                sum += (h*k);
                b -= k*2;
                if(2*f > b){
                    k = b/2;
                    sum += (c*k);
                }
                else{
                    sum += (c*f);
                }
            }
            else if(2*p == b){
                sum += (h*p);
            }
            else{
                sum += (h*p);
                b -= (2*p);
                if(2*f > b){
                    sum += (c*(b/2));
                }
                else{
                    sum += (c*f);
                }
            }
        }
        else{
            if(2*f > b){
                sum += (c*(b/2));
                b -= (b/2)*2;
                if(2*p > b){
                    sum += (h*(b/2));
                }
                else{
                    sum += (h*p);
                }
            }
            else{
                sum += (c*f);
                b -= (2*f);
                if(2*p > b){
                    sum += (h*(b/2));
                }
                else{
                    sum += (h*p);
                }
            }
        }
        cout << sum << endl;
    }
}
