#include <iostream>

using namespace std;
#define mod 1000000007
long long memo[101];
int f(int n)
{ long long r;
if(memo[n]!=-1) return memo[n];

    else if(n==1) r=1;
    else if(n==2) r= 2;
    else r=(f(n-1)%mod+((n-1)*f(n-2))%mod)%mod;
    memo[n]= r;
    return r;
}
int main()
{int t,n;
cin>>t;
for(int i=0;i<=100;i++)
    memo[i]=-1;
for(int o=0;o<t;o++){
    cin>>n;
    cout<<f(n)<<endl;}
    return 0;
}
