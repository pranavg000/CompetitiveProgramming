#include <bits/stdc++.h>
#include<vector>
using namespace std;
#define lli unsigned long long int
int a[100001],b[100001]; vector<lli> v;
lli revers(lli n)
{lli rev=0;
    while(n>0)
    {
        rev=rev*10+n%10;
        n/=10;
    }
    return rev;
}
int lychrel()
{lli k,point,c,t;
for(int i=1;i<100001;i++)
{
    if(i==revers(i)) {a[i]=i;b[i]=1;}
}
    for(int i=1;i<100001;i++)
        if(a[i]==0)
    {k=i;point=0;c=0;v.clear();
    while(k!=revers(k)&&c<60)
    {t=revers(k);

    v.push_back(k);if(a[t]==0)v.push_back(t);

    k=k+t;

    //if(k==revers(k)) v.push_back(k);
    c++;
    if(k>100000) break;
    if(a[k]!=0) {point =1; break;}
    }

    if(point==1) {b[a[k]]+=v.size();for(int j=0;j<v.size();j++) {a[v[j]]=a[k];} }

    }

    return 0;
}
int main()
{int n,powe=10,big=1;
cin>>n;
lychrel();
for(int i=10;i<=n;i++)
   if(b[i]>big) {big=b[i]; powe=i;}

    cout<<powe<<" "<<big<<endl;

    return 0;
}
