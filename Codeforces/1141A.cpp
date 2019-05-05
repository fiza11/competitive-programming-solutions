#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
int main(int argc, char const *argv[]) {
    ll n, m, i, j, x, p;
    cin>>n>>m;
    if(m % n != 0)
    cout<<-1<<endl;
    else{
            ll t = m / n;
            ll count = 0;
            while(t % 2 == 0)
            t = t / 2, count++;
            while(t % 3 == 0)
            t = t / 3, count++;
            if(t != 1)
                cout << -1 << endl;
            else cout << count << endl;
    return 0;
    }
}
