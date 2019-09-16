#include <iostream>
#include<math.h>
using namespace std;

int main()
{int l,k;//double ab[501]={NULL};
int t;long double no;
    cin>>t;
    for(int i=0;i<t;i++)
        {cin>>l>>k;
if(l>=k)
        no=((0.5*(pow(l,2.0))-(l*k)+(1.5*l)-(1.5*k)+(0.5*pow(k,2.0))+1.0));
else  no=0.0;


cout<<"Case "<<i+1<<": "<<no<<endl;




        }







return 0;



}

