#include <iostream>

using namespace std;
int sizee=50,addi[100];
int *sum(int a[1001][50],int n)
{int p,carry=0; //int *addi = new int[100];
for(int i=0;i<=49;i++)
{p=0;for(int j=0;j<n;j++)
  p=p+a[j][i];
 p=p+carry;
carry=p/10;
addi[i]=p%10;
}
while(carry!=0)
    {   addi[sizee]=carry%10;
    carry=carry/10;
    sizee+=1;

    }
return 0;
}

int main()
{char ch[50]; int a[1001][50],n;
    cin>>n;
    for(int j=0;j<n;j++)
    {
      cin>>ch;
    for(int i=49;i>=0;i--)
        a[j][i]=(int)(ch[49-i]-'0');}
        sum(a,n);
 //cout<<sizee<<endl;
    for(int i=sizee-1;i>sizee-11;i--)
        cout<<addi[i];
   /* for(int i=0;i<50;i++)
        cout<<a[0][i]<<" ";*/
    return 0;
}
