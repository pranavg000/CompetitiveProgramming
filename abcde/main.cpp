#include <iostream>

using namespace std;
#define lli unsigned long long int
#define mod 1000000007
lli index10[12];
lli pow10(int n)
{lli pro=1;
    for(int i=0;i<n;i++)
pro=pro*10;
    return pro;
}
int index()
{
index10[0]=1;
for(int n=1;n<12;n++)
    index10[n]=index10[n-1]+pow10(n)*9/10*n;
return 0;

}
int main()
{int digits=0;lli n,d=0,temp;
index();
cin>>n;
temp=n;
while(n>0)
 {
     n/=10;
     digits++;
 }
//d=;
//r=pow10(digits-1);
//cout<<r<<" "<<temp-r<<endl;

d=index10[digits-1]+(temp-pow10(digits-1)+1)*digits-1;
//d=d-1;
cout<<d;
    return 0;
}
