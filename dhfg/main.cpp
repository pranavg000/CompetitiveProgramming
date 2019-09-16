#include<bits/stdc++.h>

using namespace std;

int main()
{int n,a[15],sum,an=0,u=0;
cin>>n;

for(int i=0;i<n;i++)
    cin>>a[i];
sort(a,a+n);
for(int i=0;i<n;i++)
    an+=a[i];
an=an/360;
for(int k=0;k<=an;k++)
{sum=k*360;
   int i=n-1; //sum+=a[n-1];
while(i>=0)
{
if(sum>0)  sum-=a[i];
else sum+=a[i];
i--;
}
if (sum==0) {u=1;break;}}
if(u==1) cout<<"YES";
else cout<<"NO";

    return 0;
}
