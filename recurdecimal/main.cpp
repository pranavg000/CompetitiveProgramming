#include <iostream>

using namespace std;
int a[10001];
int mod(int n)
{int result=1,k=1;
   while(k<n)
   {
       result=(result*10)%n;
       if(result==1) return k;
       k++;
   }
return -1;
}
int sieve()
{long r=2,m;

while(r<=100)
{if(a[r]==0)
{

    m=2;
while(r*m<=10000)
{a[r*m]=-1;
m+=1;
}
}
r+=1;}
return 0;
}
int main()
{int big,i,c,k,t,n,ans;
    sieve();
cin>>t;
a[5]=-1;
for(int o=0;o<t;o++)
{cin>>n; c=0;big=0;
for(i=n-1;i>=3;i--)
if(a[i]==0)
{//cout<<"hello";
if(i<=big) break;
    k=mod(i);
    //cout<<"kai";
    if(k>=big) {big=k; ans=i;}
}
if(c==0) cout<<ans<<endl;
}
/*cin>>n;
cout<<mod(n);*/
    return 0;
}
