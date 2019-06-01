#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
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
vi add(ll p){
    ll o;
    vi a;
    lp(i, 0, p){
        cin >> o;
        a.pb(o);
    }
    return a;
}
//int arr[100005], cnt[100005];
main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    map<int,int> arr, cnt;
	int n, i, po = 1, x;
	cin >> n;
	for(i = 1; i <= n; i++){
		cin >> x;
		arr[x]++;
		cnt[arr[x]]++;
		if(arr[x]*cnt[arr[x]] == i && i != n)
            po = i + 1;
		else if(arr[x]*cnt[arr[x]] == i - 1)
            po = i;
	}
	cout << po << endl;
}
