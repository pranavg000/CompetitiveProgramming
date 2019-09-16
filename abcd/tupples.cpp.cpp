#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{int t,num=0;
vector<int> va,x,y;
int a,b,c,ma;
long long int pro,n;
//n=497296800; a=1000000;b=1000000;c=1000000; t=1;
cin>>t;
for(int i=0;i<t;i++)
{
  cin>>n>>a>>b>>c;
num=0;
  for(int j=1;j<=(sqrt(n));j++)
  {if(n%j==0)
  {
      if(j==floor(sqrt(n)))
        va.push_back(j);
      else {va.push_back(j);
      va.push_back(n/j);}

  }

}

ma=max(a,b);
sort(va.begin(),va.end());
for(int j=0;j<va.size()&&va[j]<=ma;j++)
{if(va[j]<=a) x.push_back(va[j]);
   if(va[j]<=b) y.push_back(va[j]);}

for(int j=0;j<x.size();j++)
   {for(int k=0;k<y.size();k++)
   {pro=x[j]*y[k];
if(n%pro==0)  {if(n/pro<=c)  {num=num+1; }}
}}
cout<<num<<endl;
}

return 0;
}
