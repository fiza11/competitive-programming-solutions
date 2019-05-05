#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define trace(x) cerr<<#x<<": "<<x<<" "<<endl;
#define pb push_back
#define mp make_pair
#define ft first
#define sd second
#define lp(i, a, b) for(ll i = a; i < b; i++)
#define lpr(i, a, b) for(ll i = a; i >= b; i--)
ll product(ll x){
	ll p = 1;
	while(x){
		p *= (x % 10);
		x /= 10;
	}
	return p;
}
ll maxx(ll r) {
	string b = to_string(r);
	ll ans = r;
	lp(i, 0, b.size()){
        if(b[i] == '0')
			continue;
		string a = b;
		a[i] = ((a[i] - '0') - 1) + '0';
		lp(j, i + 1, a.size())
			a[j] = '9';
		ll num = 0;
		for(auto c : a)
			num = num * 10 + (c - '0');
             if (num >= 1 && product(ans) < product(num))
        	ans = num;
	}
	return ans;
}
main(){
	ll r;
    cin >> r;
    cout << product(maxx(r)) << endl;
	return 0;
}
