#include<bits/stdc++.h>
using namespace std;
main(){
  long long n,i;
  stack <char> s;
  string x;
  getline(cin,x);
  n=x.length();
  long long sum=0;
  for(i=0;i<n;i++){
    if(s.empty() || s.top()!=x[i])
    s.push(x[i]);
    else {
      s.pop();
      sum++;
    }
  }
  if(sum%2==0)
  cout<<"No"<<endl;
  else cout<<"Yes"<<endl;
}
