#include<bits/stdc++.h>
using namespace std;
main(){
  long long n,i,j;
  cin>>n;
  int flag=0;
  if(n<=9)
  cout<<1<<endl<<n<<endl;
  else{
    for(i=9;i>0;i--){
      if(n%i==0){
        cout<<n/i<<endl;
        for(j=0;j<n/i;j++)
        cout<<i<<" ";
        cout<<endl;
        flag=1;
        break;
      }
    }
  if(flag==0){
    for(i=9;i>0;i--){
      if((n-1)%i==0){
        cout<<(n-1)/i+1<<endl;
        for(j=0;j<(n-1)/i;j++)
        cout<<i<<" ";
        cout<<endl;
      }
    }
  }
  }
}
