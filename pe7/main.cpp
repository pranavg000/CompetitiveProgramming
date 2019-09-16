#include <iostream>
//#include<vector>
using namespace std;
long long int n,v[1000000];
long long fibo(long long i)
{  long long int r;
    if(v[i]!=0) return v[i];
    if(i==1) r= 2;
    else if(i==2) r= 8;
    else r= (4*fibo(i-1)+ fibo(i-2));
    v[i]=r;
    return r;

}
int main()
{
   int t; long long i=1,sum=0,r;
    cin>>t;
for(int o=0;o<t;o++)
{  sum=0;i=1;
   cin>>n;
   r=2;
   while(r<=n)
   {
    sum=sum+r; i=i+1;
    r=fibo(i); //cout<<i<<" "<<sum<<" "<<r;
  }
 cout<<sum<<endl;
}
return 0;
}
