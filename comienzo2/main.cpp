#include <bits/stdc++.h>

using namespace std;
#define BIG 5000
#define lli unsigned long long int


int main()
{char a[BIG];int b[BIG],c=1,counti;long d[BIG];lli sum=0;
int n,x;
cin>>n>>x;
for(int i=0;i<n;i++)
    cin>>d[i];
    for(int i=0;i<n;i++)
    cin>>a[i];


int k=0;
for(int i=0;i<n-1;i++)
{
    if(a[i]==a[i+1]) c++;
    else {b[i]=c; c=1;}
}

if(a[n-1]!=a[n-2]) {b[n-1]=1; }
else {{b[n-1]=c; }}

/*for(int i=n-1;i>0;i--)
{
    if(b[i-1]==0) b[i-1]=b[i];

}*/


for(int i=0;i<n;i++)
{
 if(b[i]!=0)
    {if(b[i]>x) {sort(d+i-b[i]+1,d+i+1);
    counti=0;
     while(counti<x)
     {
         sum+=d[i-counti];
         //cout<<d[i-counti]<<" ";
         counti++;
     }
   // cout<<"up"<<" ";
    }
    else
    {for(int j=i;j>=i-b[i]+1;j--)
        sum+=d[j];
        //cout<<"low"<<" ";
        }}
       // cout<<sum;
}
        cout<<sum;


    return 0;
}
