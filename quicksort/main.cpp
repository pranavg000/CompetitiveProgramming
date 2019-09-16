#include<bits/stdc++.h>

using namespace std;
//#include<cstdlib>
#define lli unsigned long long int
int partn(int a[],int l,int r)
{
    int i=l+1;
    for(int j=l+1;j<=r;j++)
        if(a[j]<a[l])
    {
        swap(a[j],a[i]);
        i++;
    }swap(a[l],a[i-1]);
return (i-1);}



int pivotp(int a[],int l,int r)
{srand(time(NULL));
int random=l+rand()%(r-l);
swap(a[random],a[l]);

return partn(a,l,r);}





int quicksort(int a[],int l,int r)
{if(l<r)
{
    int index=pivotp(a,l,r);
    quicksort(a,l,index-1);
    quicksort(a,index+1,r);
}

return 0;}




int main()
{int n,a[30];
cin>>n;
for(int i=0;i<n;i++)
    cin>>a[i];
quicksort(a,0,n-1);
for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
return 0;}
