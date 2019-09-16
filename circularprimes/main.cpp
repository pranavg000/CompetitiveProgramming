#include <iostream>
#include<math.h>
#include<vector>
#include<stdlib.h>
using namespace std;
int a[1000001];
/*int pow(int base,int power)
{

}*/
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
{int n,temp,num,c[7],d,k,b[7],len,co;long sum=0; double de;vector<int> v;
sieve();
cin>>n;
    for(int i=2;i<=n;i++)
if(a[i]==0)
{temp=i;num=i;d=0;k=0;
    while(temp>0)
{c[k]=temp%10;
temp=temp/10;
k++;

}
b[0]=i;
len=k;
if(k==1) {sum=sum+c[0]; /*cout<<c[0]<<" ";*/}
else {while(k>1)
{//cout<<num<<">";
de=pow(10,len-1)*c[len-k];
num=(int)de+num/10;
b[k-1]=num;//cout<<"num for "<<i<<"="<<num<<"\t";
k--;
if(a[num]==-1) {break;}
else d++;
}
if(d==len-1) for(int j=0;j<len;j++)
{co=1;for(int q=0;q<v.size();q++)
if(v[q]==b[j]){co=-1;break;}
if (co!=-1){a[b[j]]=-1;
v.push_back(b[j]);
        sum=sum+b[j];//cout<<b[j]<<" ";
}
}}}
cout<<sum;
/*len=3;c[0]=1; num=101;k=3;double de;
num=(num/10);
cout<<num<<endl;
cout<<pow(10,len-1)*c[len-k]<<endl;
cout<<pow(10,len-1)*c[len-k]+2<<endl;
de=pow(10,len-1);
cout<<de<<endl;
num=num+de;
cout<<num;*/
    return 0;
}
