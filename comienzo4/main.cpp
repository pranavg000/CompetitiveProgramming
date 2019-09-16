#include<bits/stdc++.h>
using namespace std;

int main()
{int t,n; long long a[50001],sum,maxsofar;
cin>>t;
for(int o=0;o<t;o++)
 {cin>>n;sum=0;maxsofar=0;
  for(int i=0;i<n;i++)
    cin>>a[i];
for(int i=n-1;i>=0;i--)
    {if(a[i]>maxsofar)
        maxsofar=a[i];
sum=sum+maxsofar-a[i];}

  cout<<sum<<endl;

 }

return 0;
}
