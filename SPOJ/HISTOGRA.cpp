#include<iostream>
#include<stack>
using namespace std;
long long n, i;
long long hist[1000000];
long long maxx(long long hist[], long long n){
	stack <int> s;
	long long amax = 0, tp, area, i = 0, po;
	while(i < n){
		if(s.empty() || hist[s.top()] <= hist[i])
			s.push(i++);
		else{
			tp = s.top();
			s.pop();
            if(s.empty())
                po = i;
            else po = i - s.top() - 1;
			area = hist[tp] * po;
			if(amax < area)
			         amax = area;
		}
	}
	while (!s.empty()){
		tp = s.top();
		s.pop();
        if(s.empty())
            po = i;
        else po = i - s.top() - 1;
		area = hist[tp] * po;
		if (amax < area)
		      amax = area;
	}
	return amax;
}
int main(){
  while(1){
      cin>>n;
      if(n == 0)
      return 0;
      else{
          for(i = 0; i < n; i++)
          cin >> hist[i];
	         cout << maxx(hist, n) << endl;
         }
     }
}
