#include <bits/stdc++.h>

using namespace std;

int main()
{char ch[200001]; int l,sec=0,t,c=0,p=0; long long sump=0,sumc=0;
cin>>ch;
l=strlen(ch);
for(int i=0;i<l;i++)
{if(ch[i]=='c') {ch[i]='p'; sec=1;t=i; break;}
}
if(sec==1)
for(int i=l-1;i>=0;i--)
{if(ch[i]=='p') {ch[i]='c';if(i==t) sec=0; break;}
}
/*for(int i=0;i<l;i++)
    cout<<ch[i];*/
if(sec==0) {cout<<0; exit(0);}
for(int i=0;i<l;i++)
{if(ch[i]=='c') c=c+1;
else if(ch[i]=='p') sump=sump+c;
}
for(int i=l-1;i>=0;i--)
{if(ch[i]=='p') p=p+1;
else if(ch[i]=='c') sumc=sumc+p;
}
cout<<sumc+sump;

    return 0;
}
