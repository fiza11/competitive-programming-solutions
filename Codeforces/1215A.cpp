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
    int a, b, k1, k2, n;
    cin >> a >> b >> k1 >> k2 >> n;
    if(a*k1 + b*k2 <= n){
        cout << a + b << " " << a + b << endl;
    }
    else{
        int minn, maxx;
        int sum = (k1 - 1)*a + (k2 - 1)*b;
        if(sum >= n){
            minn = 0;
        }
        else minn = n - sum;
        if(k1 < k2){
            int y = n, i = 0;
            while(y > 0 && i < a){
                y -= k1;
                if(y < 0)
                    break;
                i++;
            }
            maxx = i;
            i = 0;
            while(y > 0 && i < b){
                y -= k2;
                if(y < 0)
                    break;
                i++;
            }
            maxx += i;
        }
        else{
            int y = n, i = 0;
            while(y > 0 && i < b){
                y -= k2;
                if(y < 0)
                    break;
                i++;
            }
            maxx = i;
            i = 0;
            while(y > 0 && i < a){
                y -= k1;
                if(y < 0)
                    break;
                i++;
            }
            maxx += i;
        }
        cout << minn << " " << maxx << endl;
    }
}
