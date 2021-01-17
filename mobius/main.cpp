#include <bits/stdc++.h>

using namespace std;
#define N 1000

int lps[N], mu[N];
void mobius(int n){
    for(int i=2;i<=n;i++){
        if(!lps[i]) {
            for(int j=i;j<=n;j+=i){
                if(!lps[j]) lps[j]=i;
            }
        }
    }

    mu[1]=1;
    for(int i=2;i<=n;i++){
        if(lps[i]==lps[i/lps[i]]) mu[i]=0;
        else mu[i]=mu[i/lps[i]]*-1;
    }
}
int main()
{
    int n;
    cin>>n;
    mobius(n);

    for(int i=1;i<=n;i++) cout<<mu[i]<<" ";




    return 0;
}
