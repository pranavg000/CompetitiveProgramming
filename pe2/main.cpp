#include <iostream>

using namespace std;
#include<vector>
int main()
{vector<int> v; int t,n,j,ans=1,p;
    cin>>t;
    for(int o=0;o<t;o++)
    {ans=1; v.clear();
        cin>>n;
        for(int i=2;i<=n;i++)
          {for(j=2;j<=i/2;j++)
           if(i%j==0) break;
        if(i==2) v.push_back(2);
        if(i%j!=0) v.push_back(i);
          }

      for(int i=0;i<v.size();i++)
      {
          p=v[i];
            while(p*v[i]<=n)
            {p=p*v[i];
            }
            v[i]=p;
      }

        for(int i=0;i<v.size();i++)
        {
            ans=ans*v[i];
        }
        cout<<ans<<endl;
            }
    return 0;
}
