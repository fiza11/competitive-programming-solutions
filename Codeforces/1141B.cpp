#include "bits/stdc++.h"
using namespace std;
#define loop(i, a) for(long long i = 0; i < a; i++)
typedef long long ll;
main(){
    ll n, arr[200005];
    cin>>n;
    loop(i, n)
    cin>>arr[i];
    ll count = 0, max = 0;
    loop(i, n - 1){
        if(arr[i] == arr[i + 1] && arr[i] == 1)
        count++;
        else if(arr[i] != arr[i + 1] && arr[i] == 1){
            if(max < count)
            max = count + 1;
            count = 0;
        }
    }
    count = 0;
    for(ll i = n - 1; i >= 0; i--){
        if(arr[i] == 1)
        count++;
        else break;
    }
    loop(i, n){
        if(arr[i] == 1)
        count++;
        else break;
    }
    if(max < count)
    cout<<count<<endl;
    else cout<<max<<endl;
}
