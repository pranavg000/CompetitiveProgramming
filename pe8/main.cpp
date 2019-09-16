#include <iostream>

using namespace std;
int a[1000001]; long long b[1000001];
int sieve()
{long r=2,m;

while(r<=1000)
{if(a[r]==0)
{

    m=2;
while(r*m<=1000000)
{a[r*m]=-1;
m+=1;
}
}
r+=1;}
return 0;
}
int soap()
{long long sum=0;
    for(int i=2;i<=1000000;i++)
        {b[i-1]=sum; if(a[i]==0) sum=sum+i;}

return 0;
}
int main()
{int n,u; long long sum;
    cin>>u;
    sieve();
    soap();
    for(int o=0;o<u;o++)
    {cin>>n;
    cout<<b[n]<<endl;

    }

    return 0;
}
