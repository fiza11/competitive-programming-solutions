#include<bits/stdc++.h>
using namespace std;
main(){
  long long n,i,t;
  cin>>n;
  long long a[n+2];
  for(i=0;i<n;i++)
  cin>>a[i];
  sort(a,a+n);
  t=a[n-1]-a[1];
  i=a[n-2]-a[0];
  if(i<t)
  cout<<i;
  else cout<<t;
  cout<<endl;
}
