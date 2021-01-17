#include <iostream>
#include<vector>
using namespace std;
int primes[1000010];


int spf[500001];

void sieve2(int n)
{
	for (int i=1; i<=n; i++)
		spf[i] = i;

	for (int i=2; i*i<=n; i++)
		if (spf[i] == i)
			for (int j=i*i; j<=n; j+=i)
				if (spf[j]==j) spf[j] = i;
}
int lpf[1000];
void LPF(int n){
    lpf[1]=1;
    for (int i = 1; i <= n; ++i)
        if (lpf[i] == 1)
            for (int j = i; j <= n; j += i)
                lpf[j] = i; 
}




vector<int> vprime;
int sieve(int n)
{primes[0]=-1,primes[1]=-1;
    long r=2,m;

while((r*r)<=n)
{if(primes[r]==0)
{

    m=2;
while(r*m<=n)
{primes[r*m]=-1;
m+=1;
}
}
r+=1;}

for(int i=2;i<=n;i++){
    if(primes[i]==0)
{
    vprime.push_back(i);
}
}

return 0;
}


int main()
{int tillwhen = 500000;
    sieve2(tillwhen);

    return 0;
}
