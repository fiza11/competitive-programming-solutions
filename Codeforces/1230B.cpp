#include "bits/stdc++.h"
using namespace std;
#define lp(i, a, b) for(int i = a; i < b; i++)
main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int ct = k;
    if(k == 0){
        cout << s;// < endl;
        cout << endl;
        return 0;
    }
    if(n == 1){
        cout << "0";
        cout << endl;
        return 0;
    }
    cout << "1";
    if(s[0] != '1')
        ct--;
    int p = 1;
    while(ct > 0 && s[p] != '\0'){
        cout << "0";
        if(s[p] != '0')
            ct--;
        p++;
    }
    lp(i, p, n)
        cout << s[i];
    cout << endl;
}
