#include<bits/stdc++.h>
using namespace std;
main(){
  long long n,i,j;
  long long a[100000],b[100000],c[100000];
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  if(n==2){
    cout<<1<<" "<<1<<endl;
    return 0;
  }
  long long max=a[0];
  for(i=0;i<n;i++){
    if(a[i]>max)
    max=a[i];
  }
  for(i=0;i<100000;i++){
    b[i]=0;
  }
  for(i=0;i<n;i++){
    b[a[i]]++;
  }
  sort(a,a+n);
  for(i=0;i<n-1;i++){
    if(max%a[i]==0){
      b[a[i]]--;
    }
    if(a[i]==a[i+1])
    i=i+1;
    //cout<<b[a[i]]<<" "<<a[i]<<endl;
  }
  //b[a[n-1]]=0;
  long long num=0,t=0;
  for(i=0;i<n-1;i++){
   // cout<<b[a[i]]<<" "<<a[i]<<endl;
    if(b[a[i]]==1)
    {
      c[t]=a[i];
      num++;
      t++;
  }
  if(a[i]==a[i+1])
  i++;
}
//cout<<num<<endl;
  long long k=0;
  for(i=1;i<n-1;i++){
    for(j=0;j<t;j++){
      if(a[i]%c[j]==0)
      k++;
    }
    if(k==num){
      cout<<max<<" "<<a[i]<<endl;
      break;
    }
    else k=0;
  }
}
