#include<bits/stdc++.h>
using namespace std;
char ans[13];
int god(int c,int n,char cm)
{int i=1,x;
while(i<=n)
{x=(c+i)%13;
if(ans[x]=='0') i=i+1;
else c=c+1;
}
do
{x=(c+i)%13;
if(ans[x]=='0'){ans[x]=cm; break;}
else i=i+1;
}while(ans[x]!=0);
 return x;
}
int chum(char ch)
{
    if(ch=='A') return 3;
    if(ch=='2') return 3;
    if(ch=='3') return 5;
    if(ch=='4') return 4;
    if(ch=='5') return 4;
    if(ch=='6') return 3;
    if(ch=='7') return 5;
    if(ch=='8') return 5;
    if(ch=='9') return 4;
    if(ch=='1') return 3;
    if(ch=='J') return 4;
    if(ch=='Q') return 5;
    if(ch=='K') return 4;


}
int main()
{char a[13],b[14];
int c=0,counter=0,n;
    for(int i=0;i<=13;i++)
        cin>>b[i];
   for(int i=0;i<=13;i++)
    {if(b[i]!='0')
    {a[c]=b[i];
    c=c+1;
    }}

for(int i=0;i<13;i++)
{
  ans[i]='0';
}
/*for(int i=0;i<13;i++)
{
  cout<<ans[i];
}*/
for(int i=0;i<13;i++)
{n=chum(a[i]); //cout<<counter<<" "<<n<<" "<<a[i]<<" "<<endl;
counter=god(counter,n,a[i]);
}
for(int i=1;i<=13;i++)
    {if(ans[i%13]=='1') cout<<10<<" ";
    else cout<<ans[i%13]<<" ";}

       return 0;
}
