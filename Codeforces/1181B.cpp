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
string addn(string a, string b){
    int t = 0;
    string q, w;
    if(a.length() < b.length()){
        q = a;
        w = b;
    }
    else{
        q = b;
        w = a;
    }
    string ans = "";
    int y = 0;
    int ql = q.length();
    int wl = w.length();
    lpr(i, ql - 1, 0){
        y += (int)q[i] + (int)w[i + wl - ql] - 96;
        ans  += to_string(y % 10);
        y /= 10;
    }
    lpr(i, wl - ql - 1, 0){
        y += (int)w[i] - 48;
        ans += to_string(y % 10);
        y /= 10;
    }
    if(y != 0)
        ans += to_string(y);
    reverse(ans.begin(), ans.end());
    return ans;
}
main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    string x, s1, s2, a1, a2;
    cin >> x;
    int f1 = 0, f2 = 0, f = 0;
    if(n % 2){
        s1 = x.substr(0, n/2);
        s2 = x.substr(n/2, n);
        if(s2[0]!='0'){
            a2 = addn(s1,s2);
            f2 = 1;
        }
       s1 = x.substr(0, n/2 + 1);
       s2 = x.substr(n/2 + 1, n);
       if(s2[0] != '0'){
           a1 = addn(s1, s2);
           f1 = 1;
       }
       if(f1 && f2){
           if(a2 < a1)
                cout << a2 << endl;
           else cout << a1 << endl;
           return 0;
       }
       else if(f1){
           cout << a1 << endl;
           return 0;
       }
       else if(f2){
           cout << a2 << endl;
           return 0;
       }
       else f = 1;
   }
   f1 = 0, f2 = 0;
   int rem = n/2;
   if(f || n % 2 == 0){
       lpr(i, n/2, 0){
           s1 = x.substr(0, i);
           s2 = x.substr(i, n);
           if(s2[0]!='0'){
               f1 = 1;
               a1 = addn(s1, s2);
           }
           s1 = x.substr(0, n - i);
           s2 = x.substr(n - i, n);
           if(s2[0] != '0'){
               f2 = 1;
               a2 = addn(s1, s2);
           }
           if(f1 && f2){
               if(a2 < a1)
                    cout << a2 << endl;
               else cout << a1 << endl;
               return 0;
           }
           else if(f1){
               cout << a1 << endl;
               return 0;
           }
           else if(f2){
               cout << a2 << endl;
               return 0;
           }
           else continue;
       }
   }
}
