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

    int n,l;
    cin>>n>>l;
    vector <int> a,b;
    a.resize(n);
    b.resize(n);
    vector <int> alol(n);
    vector <int> bb(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    for(int i=0;i<n-1;i++){
        alol[i]=a[i+1]-a[i];
        bb[i]=b[i+1]-b[i];
    }

    alol[n-1]=l-a[n-1]+a[0];
    bb[n-1]=l-b[n-1]+b[0];

    int flag=0;
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<n;j++){
            if(alol[j]==bb[j]) c++;
        }
        if(c==n) flag=1;
        alol.push_back(alol[0]);
        alol.erase(alol.begin());
    }

    if(flag==1) yes();
    else no();
}
