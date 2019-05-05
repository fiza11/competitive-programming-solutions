#include<bits/stdc++.h>
using namespace std;
long long a[1000000], b[1000000];
main(){
  long long n, i, k, s, j;
  cin>>n;
  for(i = 0; i < n; i++)
  cin>>a[i];
  sort(a, a+n);
  	if(n%2 == 0){
  		for(i = n-2; i >= 0; i -= 2)
  			cout<<a[i]<<" ";
  		for(i = 1; i < n; i += 2)
  			cout<<a[i]<<" ";
  	}
  	else{
  		for(i = n-1; i >= 0; i -= 2){
  			cout<<a[i]<<" ";
  		}
  		for(i = 1; i < n; i += 2){
  			cout<<a[i]<<" ";
  		}
  	}
}
