#include <bits/stdc++.h>
#define N 1000

using namespace std;


vector<int> adj[N];
int sz[N];
void dfs(int x, int p){
    sz[x]=1;
    for(int u: adj[x]) {
        if(u==p) continue;
        dfs(u,x);
        sz[x]+=sz[u];
    }
}

int centroid(int x){
    dfs(x,0);
    int nn = sz[x];
    int p=0;
    while(1){
        int f=1;
        for(int u: adj[x]){
            if(u==p) continue;
            if(sz[u] > nn/2) {
                f=0;
                p=x;
                x=u;
                break;
            }
        }
        if(f) return x;
    }
}

int main()
{

    return 0;
}
