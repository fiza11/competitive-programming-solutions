#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define trace(x) cerr<<#x<<": "<<x<<" "<<endl;
#define pb push_back
#define mp make_pair
#define ft first
#define sd second
#define lp(i, a, b) for(ll i = a; i < b; i++)
#define lpr(i, a, b) for(ll i = a; i >= b; i--)
main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s;
    cin >> s;
    ll ct = 0;
    lp(i, 0, s.length()){
        if(s[i] == 'a')
            ct++;
    }
    if(2*ct > s.length())
        cout << s.length() << endl;
    else{
        ll p = s.length();
        lp(i, 1, s.length()){
            p--;
            if(2*ct > p){
                cout << p << endl;
                return 0;
            }
        }
    }
}
