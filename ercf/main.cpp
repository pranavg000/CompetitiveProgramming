#include <bits/stdc++.h>

using namespace std;
#define lli unisgned long long
int main()
{
    int n; int a[20][20]; int b[1001][2];
cin>>n;
for(int i=0;i<=1000;i++)
    b[i]=0;
for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    cin>>a[i][j];

    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
        b[a[i][j]][0]++;
    }
for(int i=0;i<=1000;i++)
{
    if(b[i][0]%4==0) b[i][1]=b[i][0]/4;
    else if(b[i][0]%4==1)
    {
    b[i][1]=5;
    one++;
    }
    else if(b[i][0]%4==2) {two++; b[i][1]=6;}
    else exit(0);
}
if(two!=(n-1)||one!=1) {cout<<"No";exit(0);}

for(int i=0;i<=1000;i++)
{

}


    return 0;
}
