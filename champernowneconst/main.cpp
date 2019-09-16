#include<iostream>
using namespace std;
#define lli unsigned long long int
#define mod 1000000007
lli index10[20];
lli pow10(int n)
{lli pro=1;
    for(int i=0;i<n;i++)
pro=pro*10;
    return pro;
}
int index()
{lli r;
index10[0]=1;
for(int n=1;n<19;n++)
    index10[n]=index10[n-1]+pow10(n)*9/10*n;
return 0;

}

int findnum(lli n)
{int temp,rem,digit; lli d;
for(int i=18;i>=0;i--)
if(index10[i]<=n) {temp=i;break;}
d=(n-index10[temp])/(temp+1)+pow10(temp);
rem=(n-index10[temp])%(temp+1);
while(rem<temp+1)
{digit=d%10;
d=d/10;
rem++;
}
return digit;
}

int main()
{lli n; int t; int pro;
cin>>t;
index();

for(int o=0;o<t;o++)
{pro=1;
for(int i=0;i<7;i++)
{cin>>n;
pro*=findnum(n);
}cout<<pro<<endl;
}
 return 0;
}
