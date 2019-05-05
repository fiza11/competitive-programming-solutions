#include<bits/stdc++.h>
using namespace std;
main(){
  long long q;
  cin>>q;
  while(q--){
    long long l,r,a;
    long long int t;
    cin>>l>>r>>a;
    t=a*(floor(r/a+1));
    if(l==a || l<a)
    cout<<t<<endl;
    else cout<<a<<endl;
  }
}
