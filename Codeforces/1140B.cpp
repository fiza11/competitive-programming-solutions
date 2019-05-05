#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define trace(x) cerr<<#x<<": "<<x<<" "<<endl;
#define pb push_back
#define mp make_pair
#define ft first
#define sd second
#define lp(i, a, b) for(ll i = a; i < b; i++)
#define lpr(i, a, b) for(ll i = b; i >= a; i--)
char st[100005];
long long top = -1;
int isempty() {
   if(top == -1)
      return 1;
   else
      return 0;
}
char peek() {
   return st[top];
}
void pop() {
      top = top - 1;
}
void push(char data) {
      top = top + 1;
      st[top] = data;
}
main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll t, n;
    string x;
    cin >> t;
    while(t--){
        int flag1 = 0, flag2 = 0;
        top = -1;
        ll c1 = 0, c2 = 0;
        ll count = 0;
        cin >> n >> x;
        ll max = 0, minn = 0;
        if(x[0] == '<')
            push(x[0]), flag1 = 1;
        //    cout << x[n-1]<< endl;
        if(x[n - 1] == '>')
            flag2 = 1;
        lp(i, 1, n){
            if(x[i] == '<' && flag1 == 1)
                push(x[i]);
            else if(x[i] == '>' && peek() == '<' && isempty() == 0){
                pop();
                c1++;
                flag1 = 0;
            }
        }
        top = -1;
        //cout << flag2 << endl;
        if(flag2 == 1){
            push(x[n-1]);
            lpr(i, 0, n - 2){
                if(x[i] == '>' && flag2 == 1)
                    push(x[i]);
                else if(x[i] == '<' && peek() == '>' && isempty() == 0){
                    pop();
                    c2++;
                    flag2 = 0;
                }
            }
        }
        // while(isempty() == 0){
        //     char s = peek();
        //     //cout << s << endl;
        //     pop();
        //         if(s == '>')
        //             c2++;
        //         else if(s == '<')
        //             c1++;
        //         if(s == '>' && peek() == '<'){
        //             max = min(c1, c2);
        //             minn += max;
        //             c1 = 0, c2 = 0;
        //         }
        //     }
        //cout << c1 << c2 << endl;
        cout << min(c1, c2) << endl;
        }
    }
