#include <iostream>

using namespace std;
#define big 5000000
long freq[big],ans[big];

int gcd(int a,int b)
{if(a==b)
return a;
if(a>b) return gcd(a-b,b);
else if(a<b) return gcd(a,b-a);

return -1;
}
int make()
{long p,k,bigs;
for(int m=1;m<1600;m++)
for(int n=1;n<m;n++)
    if(gcd(m,n)==1&&(m+n)%2!=0)
{p=2*m*(m+n);k=1;
while(p*k<big)
{freq[p*k]++;k++;
}
}
bigs=freq[0];
for(int i=1;i<big;i++)
if(freq[i]>bigs) {bigs=freq[i];ans[i]=i;}
else ans[i]=ans[i-1];
return 0;
}
int main()
{int t,n;
make();
cin>>t;
for(int o=0;o<t;o++)
{cin>>n;
cout<<ans[n]<<endl;

}


    return 0;
}
