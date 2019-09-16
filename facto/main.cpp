#include <iostream>

using namespace std;
#define SIZ 5000
int multiply(int n,int a[],int sizee)
{int carry=0; long p;
    for(int i=0;i<sizee;i++)
{p=a[i]*n+carry;
a[i]=p%10;
carry=p/10;
}
while(carry!=0)
{
a[sizee]=carry%10;
carry=carry/10;
sizee+=1;
}

return sizee;
}
int fact(int n)
{int a[SIZ]; int sizee;
sizee =1;
a[0]=1;
for(int i=2;i<=n;i++)
    sizee=multiply(i,a,sizee);

for(int i=sizee-1;i>=0;i--)
    cout<<a[i];
}


int main()
{fact(100);

    return 0;
}
