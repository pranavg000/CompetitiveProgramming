#include <iostream>

using namespace std;
long int a[60000001];
long long sequ(long i)
{//long long int a[5000001];
    long long r;


   if(i<=60000000) if(a[i]!=0) return a[i];
 if(i==1) r=0;
else if(i%2==0) r=1+sequ(i/2);
else r=1+sequ(3*i+1);
if(i<=60000000){a[i]=r;}


return r;
}
int main()
{int t,n; long long big,r,c;
cin>>t;
for(int o=0;o<t;o++)
{cin>>n; big=0;
for(long int i=1;i<=n;i++)
 {r=sequ(i);
if(r>=big) {big=r; c=i;}
 }
 cout<<c<<endl;
}    return 0;
}
