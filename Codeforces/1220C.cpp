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
    string s;
    cin >> s;
    int l = sz(s);
    int arr[100], b[100];
    lp(i, 0, 100){
        b[i] = 0;
    }
    lp(i, 0, l){
        int y = (int)s[i] - 97;
        if(b[y] == 0){
            arr[y] = i;
            b[y] = 1;
        }
    }
    if(l == 1){
        cout << "Mike" << endl;
        return 0;
    }
    cout << "Mike" << endl;
    int flag = 0;
    lp(i, 1, l - 1){
        flag = 0;
        if(s[i] == 'a'){
            cout << "Mike" << endl;
            continue;
        }
        lp(j, 0, (int)s[i] - 97){
            if(arr[j] < i && b[j] != 0){
                cout << "Ann" << endl;
                flag = 1;
                break;
            }
        }
        if(flag == 0){
                cout << "Mike" << endl;
        }
    }
    if(s[l - 1] == 'a'){
        cout << "Mike" << endl;
    }
    else{
        flag = 0;
        lp(j, 0, (int)s[l - 1] - 97){
            if(arr[j] < l - 1 && b[j] != 0){
                cout << "Ann" << endl;
                flag = 1;
                break;
            }
        }
        if(flag == 0){
                cout << "Mike" << endl;
        }
    }
}
