#include "bits/stdc++.h"
using namespace std;
#define loop(i, a) for(int i = 0; i < a; i++)
int main(int argc, char const *argv[]) {
    int n, k, i;
    int a[100000], b[100000];
        cin>>n;
        loop(i, n)
            cin>>a[i]>>b[i];
        cin>>k;
        loop(i, n){
                if(k >= a[i] && k <= b[i]){
                    cout << n - i << endl;
                    break;
                }
        }
}
