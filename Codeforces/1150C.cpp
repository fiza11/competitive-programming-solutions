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
void yes(){
    cout << "YES" << endl;
}
void no(){
    cout << "NO" << endl;
}
main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    int arr[200005];
    cin >> n;
    lp(i, 0, n)
        cin >> arr[i];
    int one = 0, two = 0;
    lp(i, 0, n){
        if(arr[i] == 1)
            one++;
        else two++;
    }
    if(one == 0){
        lp(i, 0, n)
            cout << 2 << " ";
        cout << endl;
    }
    else if(two == 0){
        lp(i, 0, n)
            cout << 1 << " ";
        cout << endl;
    }
    else if(one >= two){
        if(one >= 3){
            cout << 1 << " " << 1 << " " << 1  << " ";
        lp(i, 0, two)
            cout << 2 << " ";
        lp(i, 0, one - 3)
            cout << 1 << " ";
        cout << endl;
        }
        else{
            cout << 2 << " " << 1 << " ";
            lp(i, 0, two - 1)
                cout << 2 << " ";
            lp(i, 0, one - 1)
                cout << 1 << " ";
            cout << endl;
        }
    }
    else if(two > one){
        cout << 2 << " " << 1 << " ";
        lp(i, 0, two - 1)
            cout << 2 << " ";
        lp(i, 0, one - 1)
            cout << 1 << " ";
    }
}
