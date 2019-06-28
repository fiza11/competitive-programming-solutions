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
int sum(int a){
    int s = 0;
    while(a){
        s += (a%10);
        a /= 10;
    }
    return s;
}
main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a;
    cin >> a;
    int n = a;
    while(1){
        if(sum(n) % 4 == 0){
            cout << n << endl;
            return 0;
        }
        n++;
    }
}
