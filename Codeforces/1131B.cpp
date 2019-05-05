#include<bits/stdc++.h>
using namespace std;
long long a[1000000], b[1000000];
long long minn(long long a, long long b){
  if(a>b)
  return b;
  else return a;
}
main(){
  long long n, i, x, s1, s2;
  cin>>n;
  for(i=1;i<=n;i++)
  cin>>a[i]>>b[i];
  if(n == 1){
    if(a[1]>b[1])
    cout<<b[1]+1<<endl;
    else cout<<a[1]+1<<endl;
  }
  else{
  x = 1;
  for(i=0; i<n; i++){
    // if(b[i]>a[i-1] && b[i]!=b[i-1] && b[i-1]<a[i-1]){
    //   s1 = b[i] - b[i-1];
    //   s2 = a[i] - a[i-1];
    //   if(s1 < s2)
    //   x += s1 + 1;
    //   else x += s2 + 1;
    // }
    // if(a[i]>b[i-1] && a[i]!=a[i-1] && a[i-1]<b[i-1]){
    //   s1 = b[i] - b[i-1];
    //   s2 = a[i] - a[i-1];
    //   if(s1 < s2)
    //   x += s1 + 1;
    //   else x += s2 + 1;
    // }
    if(a[i]<b[i]){
      if(a[i+1] == b[i])
      x++;
      else if(a[i+1] > b[i])
      x += 1 + minn(a[i+1], b[i+1]) - b[i];
    }
    if(b[i]<a[i]){
      if(b[i+1] == a[i])
      x++;
      else if(b[i+1] > a[i])
      x += 1 + minn(b[i+1], a[i+1]) - a[i];
    }
    if(a[i] == b[i] && a[i] != a[i+1]) {
      x += minn(a[i+1],b[i+1]) - a[i];
    }
    // if(a[i] == b[i] && a[i] != a[i+1] && a[i+1] == b[i+1]){
    //   x += minn(a[i+1],b[i+1]);
    // }
  }
  // s1 = b[0];
  // s2 = a[0];
  // if(s1 < s2 && b[0] != 0)
  // x += s1 + 1;
  // else if(s2 < s1 && a[0] != 0)
  // x += s2 + 1;
  // else if(s1 == s2)
  // x += s1;
  cout<<x<<endl;
}
}
