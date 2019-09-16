#include<bits/stdc++.h>
using namespace std;
#define lli unsigned long long
#define mod 1000000000
lli poww(int n)
{lli r=1;
    for(int i=0;i<n;i++)
        r=r*2;
    return r;
}
int main()
{long n,k;int m=0;int a[34];int b[34][2],c[34][2],lenc,len,cou;long long diff;
cin>>n>>k;

while(n>0)
{
    a[m]=n%2;
    m++;
    n=n/2;

}
m=0;
for(int i=m-1;i>=0;i--)
   {if(a[i]==1) b[m][0]=poww(i);m++;

   }
/*for(int i=0;i<m;i++)
{
    cout<<b[i];
}*/
for(int i=0;i<m;i++)
    b[i][1]=1;
if(m>k) cout<<"NO"<<endl;
else if(m==k)
    {cout<<"YES"<<endl;
    for(int i=0;i<m;i++)
    cout<<poww(b[i][0])<<" ";}
else
  {len=m;lenc=m;
    for(int i=0;i<lenc;i++)
{
    c[i][0]=b[i][0];c[i][1]=b[i][1];
}
cou=0;
while(m!=k&&cou<lenc)
{len=lenc-cou;
while(m<k)
{for(int i=0;i<lenc;i++)
{
    b[i][0]=c[i][0];b[i][1]=c[i][1];
}
    b[len-1][1]-=1;
diff=poww(b[len-1][0]-b[len-2][0]);
b[len-2][1]+=diff;
m=m+diff-1;

if(b[len-1][1]==0) len--;
if(m==k) {counter=1; break;}

}cou++;
}
if(counter==1) {cout<<"YES"<<endl;
for(int i=0;i<len;i++)
{

}
}
}


return 0;
}
