#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define trace(x) cerr<<#x<<": "<<x<<" "<<endl;
#define pb push_back
#define mp make_pair
#define ft first
#define sd second
#define lp(i, a, b) for(ll i = a; i < b; i++)
#define lpr(i, a, b) for(ll i = a; i >= b; i--)
void yes(){
    cout << "YES" << endl;
}
void no(){
    cout << "NO" << endl;
}
int ty[100], vis[100];
main(){
    int arr[10], x = 4, a = 1, c = 6, sd, i;//, ty[100];
    int b[] = {4, 16, 8, 23, 15, 42};
    vector <pair <int, int>> v;
    vector <vector <int>> gf;
    gf.resize(10);
    while(x > 0){
        int flag = 0;
        printf("? %d %d\n", a, c);
        fflush(stdout);
        scanf("%d", &sd);
        lp(j, 0, 6){
            if(sd % b[j] == 0){
                lp(i, 0, 6){
                    if(sd/b[j] == b[i] && b[j] != b[i]){
                        gf[c].pb(b[i]);
                        gf[c].pb(b[j]);
                        //cout << gf[c][0] << gf[c][1];
                        ty[b[j]]++;
                        ty[b[i]]++;
                        flag = 1;
                        break;
                    }
                }
                if(flag == 1)
                    break;
            }
        }
        c--;
        x--;
        if(x == 2){
            for(i = 0; i < 44; i++){
                if(ty[i] == 2){
                    arr[a] = i;
                    //trace(a);
                    //trace(i);
                    vis[i] = 1;
                    break;
                }
            }
            lp(j, 0, gf[6].size()){
                if(gf[6][j] != i)
                    arr[6] = gf[6][j], vis[gf[6][j]] = 1;
            }
            lp(j, 0, gf[5].size()){
                if(gf[5][j] != i)
                    arr[5] = gf[5][j],  vis[gf[5][j]] = 1;
            }
        a++;
        }
        else if(x == 0){
            for(i = 0; i < 44; i++){
                if(ty[i] == 2 && vis[i] == 0){
                    arr[a] = i;
                    break;
                }
            }
            lp(j, 0, gf[4].size()){
                if(gf[4][j] != i)
                    arr[4] = gf[4][j];
            }
            lp(j, 0, gf[3].size()){
                if(gf[3][j] != i)
                    arr[3] = gf[3][j];
            }
        a++;
        }
    }
    printf("! ");
    lp(i, 1, 7)
        printf("%d ", arr[i]);
    printf("\n");
    fflush(stdout);
}
