#include <iostream>

using namespace std;

int merge_a(int a[],int l,int m,int r){
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
    int L[n1],R[n2];
    for(i=0;i<n1;i++)
       L[i]=a[l+i];

    for(i=0;i<n2;i++)
      R[i]=a[m+1+i];

    i=0;j=0;k=l;
    while(i<n1&&j<n2){
        if(L[i]<=R[j]) {a[k]=L[i]; i++;}
        else {a[k]=R[j];j++;}
        k++;
    }

    while(i<n1){
        a[k]=L[i];i++;k++;
    }
    while(j<n2){
        a[k]=R[j];j++;k++;
    }

   return 0;
}



int merge_sort(int a[], int l, int r){
   if(l<r){
        int m=(l+r)/2;
        merge_sort(a,l,m);
        merge_sort(a,m+1,r);
        merge_a(a,l,m,r);
}

return 0;
}

int main()
{int a[20],n;
cin>>n;
for(int i=0;i<n;i++)
    cin>>a[i];
merge_sort(a,0,n-1);

for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}
