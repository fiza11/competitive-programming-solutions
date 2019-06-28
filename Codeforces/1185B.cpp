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
#define lp(i, a, b) for(i = a; i < b; i++)
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
    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        int al = sz(a);
        int bl = sz(b);
        int f = 0;
        int i = 0, j = 0;
        if(a[0] != b[0]){
            no();
        }
        else{
            char aa, bb;
            while(i < al && j < bl){
                if(a[i] == b[j]){
                    bb = b[j];
                    j++;
                    aa = a[i];
                    i++;
                    //bb = b[i];
                }
                else{
                    if(b[j] == aa)
                        j++;
                    else{
                        f = 1;
                        break;
                    }
                }
            }
            //trace(f);
            if(i < al)
                f = 1;
            while(j < bl){
                if(b[j] != aa)
                    f = 1;
                j++;
            }
            if(f == 1)
                no();
            else yes();
        }
    }
}
