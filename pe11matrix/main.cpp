#include <bits/stdc++.h>

using namespace std;

int main()
{int a[23][26]; long long proh,prov,prod1,prod2,big=0;
for(int i=20;i<23;i++)
    for(int j=0;j<26;j++)
    a[i][j]=0;
for(int i=0;i<20;i++)
    for(int j=0;j<3;j++)
    a[i][j]=0;
for(int i=0;i<20;i++)
    for(int j=23;j<26;j++)
    a[i][j]=0;
   for(int i=0;i<20;i++)
        for(int j=3;j<23;j++)
        cin>>a[i][j];
for(int i=0;i<20;i++)
    for(int j=3;j<23;j++)
{if(a[i][j]!=0)
{ proh=a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j];
prov=a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3];
prod1=a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3];
prod2=a[i][j]*a[i+1][j-1]*a[i+2][j-2]*a[i+3][j-3];


if(proh>big) big=proh;
if(prov>big) big=prov;if(prod1>big) big=prod1;if(prod2>big) big=prod2;


}}
cout<<big;
/*for(int i=0;i<23;i++)
{for(int j=0;j<26;j++)
cout<<a[i][j]<<" "; cout<<endl;}*/
    return 0;
}
