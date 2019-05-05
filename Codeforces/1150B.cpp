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
    int n;
    char x;
    int arr[100][100];
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    lp(i, 0, n){
        lp(j, 0, n){
            cin >> x;
            if(x == '#')
                arr[i][j] = 0;
            else arr[i][j] = 1;
        }
    }
    lp(i, 0, n){
        lp(j, 0, n){
            if(arr[i][j] == 1){
                //cout << i << j << endl;
                //cout << arr[i+1][j] << arr[i+2][j] << arr[i+1][j-1] << arr[i+1][j+1] << endl;
                if(arr[i+1][j] == 1 && arr[i+1][j-1] == 1 && arr[i+1][j+1] == 1 && arr[i+2][j] == 1){
                    arr[i+1][j] = 0;
                    arr[i+2][j] = 0;
                    arr[i+1][j-1] = 0;
                    arr[i+1][j+1] = 0;
                    //cout << arr[i+1][j-1] << endl;
                    arr[i][j] = 0;
                }
                else {
                    no();
                    return 0;
                }
            }
        }
    }
    yes();
}
