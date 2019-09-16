#include <iostream>
#include<vector>
#include<string.h>
using namespace std;
#define lli unsigned long long int

int main()
{double x,y,d;
int t;
cin>>t;
for(int o=0;o<t;o++)
{
    cin>>x>>y;
    d=(double)(180-2*x)/2;
    if(d==y) cout<<"RIGHT"<<endl;
    else cout<<"WRONG"<<endl;
}
    return 0;
}
