#include<iostream>
#include<vector>
using namespace std;
/*int a[1001];
int safe(int n,int k)
{int r;
if(n==1) return 1;
if(a[n]!=0) return a[n];
    r=(safe(n-1,k)+k-1)%n+1;
a[n]=r;
    return r;

}
int main()
{//int t,c; long n,k,m;vector<int> a;
    int t,n;
cin>>t;
for(int o=0;o<t;o++)
{cin>>n;
cout<<safe(n,2)<<endl;
}return 0;
}*/
vector<long> a;
long safe(int n,int k)
{long r;
    a.push_back(0);a.push_back(1);
    for(int i=2;i<n;i++)
    {r=(a[n-1]+k-1)%n+1;
    a.push_back(r);}


}
int main()
{//int t,c; long n,k,m;vector<int> a;
    int t,n;
cin>>t;
safe(1001,2);
for(int o=0;o<t;o++)
{cin>>n;
cout<<a[n]<<endl;
}return 0;
}
