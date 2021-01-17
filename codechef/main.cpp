#include <bits/stdc++.h>

using namespace std;
typedef long long lli;
typedef unsigned long long int uli;
typedef long double Lf;

#define fastIO  std::ios::sync_with_stdio(false);cin.tie(NULL)
#define mod 1000000007
#define BIGL = 999999999999999999
#define BIGI = 99999999
#define N 25
#define NN 25
#define vi vector<int>
#define vl vector<long>
#define vll vector<long long>
#define vc vector<char>
#define ii <int, int>
#define ll <long, long>
#define lll <long long, long long>
#define loop(i,s,n) for(int i=s;i<n;i++)
#define loopr(i,n,s) for(int i=n-1;i>=s;i--)
#define pb push_back
#define o2(a,b) cout<<a<<" "<<b<<endl
#define o3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
#define o4(a,b,c,d) cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl



inline lli modadd(lli n,lli m){
    lli sum = ((n+m)%mod+mod)%mod;
    return sum;
}

inline lli modsub(lli n,lli m){
    lli diff = ((n-m+mod)%mod+mod)%mod;
    return diff;
}

inline lli modpro(lli n,lli m){
    lli pro = ((n*m)%mod+mod)%mod;
    return pro;
}



inline lli pow(int x,int y){
    lli res = 1;
    while (y > 0) {
        if (y & 1)
            res = res * x;
        y = y >> 1;
        x = x * x;
    }
    return res;
}



inline lli powmod(lli x,lli y){
    lli res = 1;
    while (y > 0) {
        if (y & 1)
            res = modpro(res , x);
        y = y >> 1;
        x = modpro(x , x);
    }
    return res;
}




template <class T, class U>
bool comparep(const pair<T, U>&i, const pair<T, U>&j)
{
    return i.first > j.first;
}

template <class T, class U>
bool comparep2(const pair<T, U>&i, const pair<T, U>&j)
{
    return ((i.second < j.second)||((i.second == j.second)&&i.first < j.first));
}



template <typename T>
T gcd(T a, T b)
{
    if (a == 0)
        return b;
    if(b==0)
        return a;
    T t;
    while((a>0)&&(b>0)){
     t = a;
     a=b%a;
     b=t;
 }

 return max(a,b);
}



template <typename T>
T maxof(T n_args, ...)
{
    va_list ap;
    va_start(ap, n_args);
    T big = va_arg(ap, T);
    for(int i = 2; i <= n_args; i++) {
        T a = va_arg(ap, T);
        if(a > big) big = a;
    }
    va_end(ap);
    return big;
}




template <typename T>
T gcdarr(T a[], int n){
    T gc = gcd<T>(a[0],a[1]);
    loop(i,2,n) {
        gc = gcd<T>(gc,a[i]);
    }
    return gc;
}


template <typename T>
T maxarr(T a[], int n){
    T big = a[0];
    loop(i,1,n) {
        big = max(big, a[i]);
    }
    return big;
}



template <typename T>
T minarr(T a[], int n){
    T small = a[0];
    loop(i,1,n) {
        small = min(small, a[i]);
    }
    return small;
}

lli choose(lli n, int k){
lli res = 1;

    // Since C(n, k) = C(n, n-k)
    if ( k > n - k )
        k = n - k;

    // Calculate value of
    // [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1]
    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }

    return res;
}

class Graph{

 public:
    int V;
    vi v[N];
    bool visited[N]={0};
    queue<int> q;


    Graph(int V)
{
    this->V = V;

}

    void addEdge(int a, int b)
{
    v[a].push_back(b);
    v[b].push_back(a);
}

void dfs(int x){
        if(visited[x]==0)
    {visited[x]=1;
    //cout<<x<<endl;
    for(int u:v[x])
    {
        dfs(u);
    }}
     }


void bfs(int n,int x){
    visited[x]=1;
    q.push(x);
    while(!q.empty())
    {
        int s = q.front();
        q.pop();

        for(int u : v[s]){
            if(visited[u]==1) continue;
            visited[u]=1;
            //cout<<u<<endl;
            q.push(u);}}}

int connectedcomponents(int n){
    int ans=0;
    loop(i,1,n+1){
        if(!visited[i]){
            ans++;
            dfs(i);
        }

    }
    return ans;
}

};

template <typename T>
T findpower(T n,T p)
{
    T x = 0;
    while (n)
    {
        n /= p;
        x += n;
    }
    return x;
}


void primeFactors(int n)
{
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n/2;
    }


    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n/i;
        }
    }
    if (n > 2)
        cout << n << " ";
}



int main(){
int erer;
erer=1;
cin>>erer;
while(erer--){


}
return 0;
}
