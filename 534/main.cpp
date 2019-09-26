#include <bits/stdc++.h>

using namespace std;
typedef long long lli;
typedef unsigned long long int uli;
typedef long double Lf;

#define fastIO  std::ios::sync_with_stdio(false);cin.tie(NULL)
#define mod 1000000007
#define BIGL = 999999999999999999
#define BIGI = 99999999
#define N 21
#define NN 21
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
            res = powmod(res , x);
        y = y >> 1;
        x = powmod(x , x);
    }
    return res;
}




template <class T, class U>
bool comparep(const pair<T, U>&i, const pair<T, U>&j)
{
    return i.first > j.first;
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


int main(){
    int n,m,x;
    cin>>n>>m>>x;


    cout<<maxof<int>(3,n,m,x)<<endl;;


    return 0;
}


