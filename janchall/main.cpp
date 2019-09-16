#include <bits/stdc++.h>

using namespace std;
#define lli unsigned long long int
#define BIG 101




int main()
{int t,c,n,bob,alice,bobonly,aliceonly,both,d,ob,lice;long a[BIG];
cin>>t;
for(int o=0;o<t;o++)
{bobonly=0,aliceonly=0,both=0;ob=0,lice=0,d=0;
    cin>>n>>bob>>alice;
    for(int i=0;i<n;i++)
        cin>>a[i];
    //sort(a,a+n);
for(int i=0;i<n;i++)
    if(a[i]%bob==0||a[i]%alice==0)
{c=0;
    if(a[i]%bob==0) c=1;
    if(a[i]%alice==0) c=c+2;
    if(c==1) bobonly++;
    else if(c==2) aliceonly++;
    else both++;
}
//cout<<both<<"#";
if(both%2==0) {lice=1;}
else {ob=1;}
/*if(alice==1)
{if(bobonly>aliceonly) cout<<"BOB"<<endl;
else cout<<"ALICE"<<endl;}
else if(bob==1)
{if(bobonly<aliceonly) cout<<"ALICE"<<endl;
else cout<<"BOB"<<endl;}
else cout<<"ALICE"<<endl;*/

/*if(d==0) cout<<"ALICE"<<endl;
else*/
{
    if(lice==1)
{if(bobonly>aliceonly) cout<<"BOB1"<<endl;
else cout<<"ALICE1"<<endl;}
 if(ob==1)
{if(bobonly<aliceonly) cout<<"ALICE2"<<endl;
else cout<<"BOB2"<<endl;}
}
}


return 0;}
