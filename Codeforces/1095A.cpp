#include<bits/stdc++.h>
using namespace std;
main(){
  int n,i,k;
  cin>>n;
  char s[n+2],a[n];
  cin>>s;
  k=0,i=1;
  if(n==1){
    cout<<s[0];
    cout<<endl;
  }
  else{
  while(i<n && (i*(i-1))/2<n){
    a[k]=s[(i*(i-1))/2];
    k++;
    i++;
//cout<<k<<" "<<i;
  }
//cout<<k;
  for(i=0;i<k;i++)
  {
//arr[y]=a[i];
//y++;
cout<<a[i];
}

  cout<<endl;
}
}
