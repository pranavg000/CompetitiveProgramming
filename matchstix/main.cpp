#include <iostream>

using namespace std;

int main()
{int n,sum,comp;
sum=21;
    while(sum>1)
    {cin>>n;
    sum-=n;
    cout<<"#"<<sum<<endl;
    comp=5-n;
    sum-=comp;
    cout<<"computer :"<<comp<<endl<<"#"<<sum<<endl;


    }

    return 0;
}
