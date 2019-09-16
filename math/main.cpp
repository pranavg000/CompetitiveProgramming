
#include<bits/stdc++.h>
using namespace std;
int main()
{int t,n,a[100],b[100],c=0,d[100],k=0,p=0,j;
cin>>n;
for(int i=0;i<n;i++)
cin>>a[i];

while(k<n)
{for(int i=0;i<k;i++)

    {for(j=0;j<n;j++)
    {
        if(d[i]==j)
           break;
    }
    if(d[i]!=j) {p=j;  break;}


    c=p;
cout<<c+1; d[k]=c; k=k+1;
b[0]=a[c];

c=a[c]-1;
while(b[0]!=a[c])
{
cout<<c+1; d[k]=c;k+=1;
b[c]=a[c];
if(b[0]!=a[c])
c=a[c]-1;
}cout<<c+1;

}
}
    return 0;
}
