#include <iostream>

using namespace std;
int a[1000001];
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
int main()
{sieve();
    for(int i=2;i<=1000000;i++)
if(a[i]==0)
{
    cout<<i<<" ";
}
    return 0;
}
