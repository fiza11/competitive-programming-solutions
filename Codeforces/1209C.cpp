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
    int t;
    cin >> t;
    while(t--){
        vector <int> a, b;
        int n, flag = 0;
        cin >> n;
        string s;
        cin >> s;
        int minn = 12, maxx = 0;
        vector <int> v(n);
        lp(i, 0, n){
            if(minn > (int)s[i] - 48){
                minn = (int)s[i] - 48;
            }
        }
        //trace(minn);
        int index = 0;
        lp(i, 0, n){
            if((int)s[i] - 48 == minn){
                index = i;
                v[i] = 1;
                maxx = (int)s[i] - 48;
                break;
            }
        }
        if(index == 0){
            int u = 13;
            vector <int> no(10, 0);
            lp(i, 1, n){
                no[(int)s[i] - 48]++;
                if(u > (int)s[i] - 48)
                    u = (int)s[i] - 48;
            }
            lp(i, 1, n){
                //trace(u);
                if((int)s[i] - 48 == u && no[(int)s[i] - 48] > 0){
                    v[i] = 1;
                    no[(int)s[i] - 48]--;
                    if(no[(int)s[i] - 48] == 0){
                        lp(j, u + 1, 10){
                            if(no[j] > 0){
                                u = j;
                                break;
                            }
                        }
                    }
                }
                else v[i] = 2;
            }
            // lp(i, 0, n)
            //     trace(v[i]);
            lp(i, 0, n){
                if(v[i] == 1){
                    a.pb((int)s[i] - 48);
                }
            }
            lp(i, 0, n){
                if(v[i] == 2){
                    a.pb((int)s[i] - 48);
                }
            }
            lp(i, 0, n)
                b.pb((int)s[i] - 48);
            sort(all(b));
            lp(i, 0, n){
                if(a[i] != b[i]){
                    cout << "-" << endl;
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                lp(i, 0, n)
                    cout << v[i];
                cout << endl;
            }
            continue;
        }
        lp(i, 0, index){
            v[i] = 2;
            if(maxx < (int)s[i] - 48)
                maxx = (int)s[i] - 48;
        }
        lp(i, index + 1, n){
            if((int)s[i] - 48 >= maxx)
                v[i] = 2;
            else v[i] = 1;
            if(maxx < (int)s[i] - 48)
                maxx = (int)s[i] - 48;
        //    trace(maxx);
        }
        lp(i, 0, n){
            if(v[i] == 1){
                a.pb((int)s[i] - 48);
            }
        }
        lp(i, 0, n){
            if(v[i] == 2){
                a.pb((int)s[i] - 48);
            }
        }
        lp(i, 0, n)
            b.pb((int)s[i] - 48);
        sort(all(b));
        lp(i, 0, n){
            if(a[i] != b[i]){
                cout << "-" << endl;
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            lp(i, 0, n)
                cout << v[i];
            cout << endl;
        }
    }
}
