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
    ll n, l, r;
    ll a[200000], c[200000], b[200000], max=-10000000000, min=10000000000;
    cin >> n >> l>> r;

    for(ll i=0; i<n;i++)
    {
        cin >> a[i];
    }
    for(ll i=0; i<n; i++)
        cin >> c[i];

    for(ll i=0;i<n;i++)
    {
        b[i]=a[i]+c[i];
        if(b[i]>=max)
            max=b[i];
        if(b[i]<=min)
            min=b[i];
    }

    //cout << max<<min << endl;
    // for(ll i=0; i<n ; i++)
    //     cout << b[i] <<endl;
    if(max-min <= (r-l))
    {
        if(max > r)
        {
            for(ll i=0; i<n; i++)
                b[i]-=(max-r);
        }
        else if(min<l)
            for(ll i=0; i<n;i++)
                b[i]+=(l-min);

        for(ll i=0; i<n; i++)
            cout << b[i] <<" ";
        cout <<endl;
    }
    else
        cout <<"-1\n";


}
