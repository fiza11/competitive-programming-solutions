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
char arr[] = {'a', 'e', 'i', 'o', 'u'};
void num(int a){
    cout << a << endl;
}
main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int k;
    cin >> k;
    if(k < 25)
        num(-1);
    else{
        int flag = 0, a, b;
        lp(i, 2, floor(sqrt(k)) + 1){
            if(k % i == 0){
                a = i;
                b = k/i;
                if(a >= 5 && b >= 5){
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0)
            num(-1);
        else{
            int t = 0, km = 0;
            lp(i, 0, 5){
                t = km;
                lp(j, 0, a){
                    if(t == 5)
                        t = 0;
                    cout << arr[t];
                    t++;
                }
                km++;
            }
            t = 0;
            lp(i, 0, k - 5*a){
                cout << arr[t];
                t++;
                if(t == 5)
                    t = 0;
            }
        cout << endl;
        }
    }
}
