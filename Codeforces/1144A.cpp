#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define trace(x) cerr<<#x<<": "<<x<<" "<<endl;
#define lp(i, a, b) for(int i = a; i < b; i++)
#define lpr(i, a, b) for(int i = a; i >= b; i--)
main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, arr[1000];
    cin >> n;
    while(n--){
        string s;
        int flag = 0;
        memset(arr, 0, 1000);
        cin >> s;
        int len = s.length();
        lp(i, 0, len){
            arr[(int)s[i] - 65]++;
            if(arr[(int)s[i] - 65] > 1){
                cout << "No" << endl;
                flag = 1;
                break;
            }
        }
        int min = INT_MAX, max = 0;
        lp(i, 0, len){
            if((int)s[i] > max)
                max = (int)s[i];
            if((int)s[i] < min)
                min = (int)s[i];
        }
        if(max - min >= len && flag == 0)
            cout << "No" << endl;
        else if(flag == 0)
            cout << "Yes" << endl;
    }
}
