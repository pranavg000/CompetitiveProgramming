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



int a[20],b[20];
lli dp[2002][2002][2][2];
int len;
int d;

lli fu(int pos, int rem, int uf, int lf){
    if(pos==len){
            return 1;
    }
    if(dp[pos][rem][uf][lf]!=-1) return dp[pos][rem][uf][lf];

    int ud=a[pos];
    if(uf==1) ud = 9;
    int ld = b[pos];
    if(lf==1) ld = 0;


    lli ans=0;
    int nu;
    int nl;


    loop(i,ld,ud+1){

        nu=uf; if(uf==0&&i<ud) nu=1;
        nl=lf; if(lf==0&&i>ld) nl=1;

        ans=max(ans,fu(pos+1,rem,nu,nl));
        //o4(ans,pos,i,nf);
    }

    return dp[pos][rem][uf][lf] = ans;
}

lli funcS(string y, string x){
    /* y <= x */
    len = x.size();
    loop(i,0,len)a[i]=(int)(x[i]-'0');

    int len2 = y.size();
    loop(i,0,len-len2)b[i]=0;

    loop(i,len-len2,len){
        b[i]=(int)(y[i-len+len2]-'0');
    }
//    printArr(a,len);
//    printArr(b,len);
    memset(dp,-1,sizeof(dp));
    return fu(0,0,0,0);
}

lli func(lli y, lli x){
    /* y <= x */
    len=0;
    while(x>0){
        a[len]=x%10;
        x/=10;
        len++;
    }
    reverse(a,a+len);

    int len2=0;
    while(len2<len){
        b[len2]=y%10;
        y/=10;
        len2++;
    }
    reverse(b,b+len);


    memset(dp,-1,sizeof(dp));


    return fu(0,0,0,0);
}


int main(){
    //fastIO;
    int erer=1;
    //cin>>erer;
    loop(erer2,1,erer+1){
        lli l,r;
        cin>>l>>r;

        cout<<func(l,r);

    }
    return 0;
}
