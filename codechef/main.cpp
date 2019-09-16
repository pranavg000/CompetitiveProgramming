#include <iostream>

using namespace std;

int main()
{
    int t,n;
    long long int a,k,x;
    long int p[50][2];

    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>a>>k;

        x=(((2k-3)*180)-(a*(2k-1)));

y=k-1;
p[i][0]=x;p[i][1]=y;
    }for(int i=0;i<t;i++)

    {

     for(int j=0;j<2;j++)
        cout<<a[i][j]<<" ";cout<<endl;}

    return 0;
}
