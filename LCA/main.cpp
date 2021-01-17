#include<bits/stdc++.h>

using namespace std;
#define N 1000
vector<int> adj[N];
int pa[N][20], sm[N][20], lev[N]; 
void dfs(int x, int p){
    pa[x][0]=p;
    lev[x]=lev[p]+1;
    for(auto u: adj[x]){
        if(u.x==p) continue;
        sm[u.x][0]=u.y;
        dfs(u.x,x);
    }
}
int lca(int u, int v, int lg=19){
    if(lev[u]>lev[v]) swap(u,v);
    int ans=INT_MIN;
    for(int i=lg;i>=0;i--){
        if(lev[v] - (1<<i)>=lev[u]) {
            ans=max(ans, sm[v][i]);
            v = pa[v][i];
        }
    }
    if(u==v) return ans;
    for(int i=lg;i>=0;i--){
        if(pa[u][i]!=pa[v][i]){
            ans=max({ans, sm[v][i], sm[u][i]});
            u = pa[u][i]; 
            v = pa[v][i];
        }
    }
    return max({ans, sm[v][0], sm[u][0]});
}


int pa[N][20], lev[N]; 
void dfs(int x, int p){
    pa[x][0]=p;
    lev[x]=lev[p]+1;
    for(auto u: adj[x]){
        if(u==p) continue;
        dfs(u,x);
    }
}
int lca(int u, int v, int log=19) { 
    if (lev[u] < lev[v])  swap(u, v); 
    for (int i = log; i >= 0; i--) 
        if ((lev[u] - (1<<i)) >= lev[v]) 
            u = pa[u][i]; 
    if (u == v)  return u; 
    for (int i = log; i >= 0; i--) { 
        if (pa[u][i] != pa[v][i]) { 
            u = pa[u][i]; 
            v = pa[v][i]; 
        } 
    } 
    return pa[u][0]; 
} 

int main(){

}