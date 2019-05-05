#include"bits/stdc++.h"
using namespace std;
#define loop(i, a) for(i = 0; i < a; i++)
main(){
  long long n, i, arr[100000], c1, c2, ans, a;
  cin>>n;
  loop(i, n)
  cin>>arr[i];
  c1 = 0, c2 = 0, ans = 0;
  loop(i, n-1){
    if(arr[i] == arr[i + 1] && arr[i] == 2)
    c2++;
    else if(arr[i] == arr[i + 1] && arr[i] == 1)
    c1++;
    else if(arr[i] != arr[i + 1] && arr[i] == 2){
      a = min(c1, c2);
      ans = max(a, ans);
      c1 = 0;
    }
    else if(arr[i] != arr[i + 1] && arr[i] == 1){
      a = min(c1, c2);
      ans = max(a, ans);
      c2 = 0;
    }
    if( i == n-2){
      a = min(c1, c2);
      ans = max(a, ans);
    }
  }
  cout<<2*(ans+1)<<endl;
}
