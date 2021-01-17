#include <bits/stdc++.h>

using namespace std;
#define uli unsigned long long int
#define lli long long int
#define Lf long double
#define mod 1000000007
#define SIZE 21
#define vi vector<int>
#define vl vector<long>
#define vll vector<long long>
#define vc vector<char>
#define ii <int, int>
#define ll <long, long>
#define lll <long long, long long>
#define loop(i,n) for(int i=0;i<n;i++)
#define loopr(i,n) for(int i=n-1;i>=0;i--)

    vi v[10];
    int visited[10],dist[10];
    queue<int> q;




int color[SIZE]={0};
void bipart(int n,int x){
    visited[x]=1;
    color[x]=1;
    q.push(x);
    //dist[x]=0;

    while(!q.empty())
    {
        int s = q.front(); q.pop();

        for(int u : v[s]){
            if(visited[u]==1) {if(color[u]==(-1*color[s])) continue; else {cout<<-1; exit(0);} }
            visited[u]=1;
            //cout<<u<<endl;
            //dist[u]=dist[s]+1;
            color[u]=(-1*color[s]);
            q.push(u);
        }
    }

    }


     void dfs(int n,int x){
        if(visited[x]==0)
    {visited[x]=1;
    cout<<x<<endl;
    for(int u:v[x])
    {
        dfs(n,u);
    }
    }


     }
    void bfs(int n,int x){
    visited[x]=1;
    q.push(x);
    dist[x]=0;

    while(!q.empty())
    {
        int s = q.front(); q.pop();

        for(int u : v[s]){
            if(visited[u]==1) continue;
            visited[u]=1;
            cout<<u<<endl;
            dist[u]=dist[s]+1;
            q.push(u);
        }
    }

    }

    void addEdge(int a, int b)
{
    v[a].push_back(b);
    v[b].push_back(a);
}

    int main()
    {
    v[1].push_back(2);
    v[1].push_back(4);
    v[2].push_back(1);
    v[2].push_back(3);
    v[2].push_back(5);
    v[3].push_back(2);
    v[3].push_back(6);
    v[6].push_back(5);
    v[6].push_back(3);
    v[5].push_back(2);
    v[5].push_back(6);
    v[4].push_back(1);

    //bfs(6,4);
    dfs(6,1);
loop(i,7)
cout<<i<<" "<<dist[i]<<endl;
return 0;
    }




