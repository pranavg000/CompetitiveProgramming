#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int partn(int a[],int l,int r)
{int p,i;
    if(l<r)
    {p=a[l];i=l+1;
for(int j=l+1;j<=r;j++)
if(a[j]<p){swap(a[j],a[i]); i++;}
swap(a[l],a[i-1]);}
return i-1;

}
int finda(int a[],int order,int l,int r)
{int pivot,p;if(r==l) return a[l];
    srand(time(NULL));
    pivot=l+rand()%(r-l);
    swap(a[pivot],a[l]);
    p=partn(a,l,r);
    if(p+1==order) return a[p];
    else if(p+1<order) return finda(a,order-p-1,p+1,r);
    else return finda(a,order,l,p-1);
}

int main()
{int a[30],order,n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>order;
    cout<<finda(a,order,0,n-1);
}
