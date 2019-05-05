#include<bits/stdc++.h>
using namespace std;
main(){
  int n,i;
  long long a[1000],b[1000],c[1000],d[1000];
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i]>>b[i]>>c[i]>>d[i];
  for(i=0;i<n;i++){
    if(a[i]<c[i])
    cout<<a[i]<<" "<<c[i]<<endl;
    else if (a[i]>c[i])
    cout<<a[i]<<" "<<c[i]<<endl;
    else cout<<a[i]<<" "<<a[i]+1<<endl;
  }
}
