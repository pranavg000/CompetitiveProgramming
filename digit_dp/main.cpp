#include <bits/stdc++.h>

using namespace std;
typedef long long lli;
typedef unsigned long long int uli;
typedef long double Lf;

#define fastIO  std::ios::sync_with_stdio(false);cin.tie(NULL)
#define mod 1000000007
#define BIGE = 999999999999999999LL
#define N 25
#define NN 25
#define SZ(x) ((lli) (x).size())
#define vi vector<int>
#define ii <int, int>
#define ll <long, long>
#define lll <long long, long long>
#define loop(i,s,n) for(int (i)=(s);(i)<(n);(i)++)
#define loopr(i,n,s) for(int (i)=(n)-1;(i)>=(s);(i)--)
#define pb push_back
#define o2(a,b) cout<<(a)<<" "<<(b)<<endl
#define o3(a,b,c) cout<<(a)<<" "<<(b)<<" "<<(c)<<endl
#define o4(a,b,c,d) cout<<(a)<<" "<<(b)<<" "<<(c)<<" "<<(d)<<endl
#define cl cout<<endl
#define r0 return 0
#define x first
#define y second


inline lli modadd(lli n,lli m,lli p=mod){
    return ((n+m)%p+p)%p;
}

inline lli modsub(lli n,lli m,lli p=mod){
    return ((n-m+p)%p+p)%p;
}

inline lli modpro(lli n,lli m,lli p=mod){
    return ((n*m)%p+p)%p;
}










inline uli powe(lli x,lli y){
    uli res = 1;
    while (y > 0) {
        if (y & 1)
            res = res * x;
        y = y >> 1;
        x = x * x;
    }
    return res;
}



inline lli powmod(lli x,lli y,lli p=mod){
    lli res = 1;
    while (y > 0) {
        if (y & 1)
            res = modpro(res , x, p);
        y = y >> 1;
        x = modpro(x , x, p);
    }
    return res;
}

inline lli modadd3(lli x, lli y, lli z,lli p=mod){
    return modadd(modadd(x,y,p),z,p);
}

inline lli modadd4(lli x, lli y, lli z, lli w,lli p=mod){
    return modadd(modadd(x,y,p),modadd(z,w,p),p);
}



int a[14];
lli dp[14][90][10004][2];
int len;
int k;

lli fu(int pos, int sum, int val, int f){
    if(pos==len){
        if(sum==0&&val==0) return 1;
        else return 0;
    }
    if(dp[pos][sum][val][f]!=-1) return dp[pos][sum][val][f];

    int lm=a[pos];
    if(f==1) lm = 9;

    lli ans=0;
    int nf;

    loop(i,0,lm+1){
        nf=f; if(f==0&&i<lm) nf=1;
        ans+=(fu(pos+1,modadd(sum,i,k),modadd(modpro(val,10,k),i,k),nf));
    }

    return dp[pos][sum][val][f] = ans;
}


lli func(lli x){
    len=0;
    while(x>0){
        a[len]=x%10;
        x/=10;
        len++;
    }
    reverse(a,a+len);
    memset(dp,-1,sizeof(dp));

    return fu(0,0,0,0);
}


int main(){
    //fastIO;
    int erer=1;
    cin>>erer;
    loop(erer2,1,erer+1){
        lli l,r;
        cin>>l>>r;
        cout<<func(r)-func(l-1)<<endl;

    }
    return 0;
}
