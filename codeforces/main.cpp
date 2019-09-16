#include <bits/stdc++.h>
//#include<string>
using namespace std;
vector<char>v;
int main()
{char ch[200];int k,cane=0,snow=0,len,mini,diff,lentext,counter=0,c=0;
cin>>ch;
cin>>k;
len=strlen(ch);
for(int i=0;i<len;i++)
{
    if(ch[i]=='?') cane++;
    else if(ch[i]=='*') snow++;
}
mini=len-2*(cane+snow);
lentext=len-(cane+snow);

if(mini>k) {cout<<"Impossible";}
else if(snow==0&&k>lentext) {cout<<"Impossible";}
else if(k<=lentext)
    {counter=1;diff=lentext-k;//cout<<"3"<<"#";
    for(int i=len-1;i>=0;i--)
    {
      if((ch[i]=='?'||ch[i]=='*'))
      {if(diff>0){//v.push_back(ch[i-1]);
            i--;diff--;}}
      else v.push_back(ch[i]);
    }
    }
else if (k>lentext)
{counter=1;diff=k-lentext;//cout<<"4"<<"#";
for(int i=len-1;i>=0;i--)
    {
    if(ch[i]=='*')
        {if(c==0)
        for(int j=0;j<diff;j++)
        v.push_back(ch[i-1]);
    c=1;}
    else if(ch[i]!='?')v.push_back(ch[i]);
}}
//cout<<v.size();
if(counter==1){//cout<<"POSSIBLE"<<endl;
for(int i=v.size()-1;i>=0;i--)
    cout<<v[i];

}
    return 0;
}
