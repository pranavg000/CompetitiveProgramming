#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define BIG 1001
int main()
{char ch[BIG][BIG];
int a[BIG],big=1;
int c,n;
cin>>n;
for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    cin>>ch[i][j];
for(int i=0;i<n;i++)
    if(a[i]==0)
{c=0;

    for(int j=0;j<n;j++)
     {if(ch[i][j]=='T')
    {
        if(strcmp(ch[i],ch[j])==0) {c++; a[i]=1;a[j]=1;}
        else {c=1;break;}
    }
   }
    if(c>big) {big=c;}
}


cout<<big;
return 0;
}
