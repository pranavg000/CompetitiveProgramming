            #include <bits/stdc++.h>

            using namespace std;

            #define fastIO  std::ios::sync_with_stdio(false);cin.tie(NULL)
            #define uli unsigned long long int
            #define lli long long int
            #define Lf long double
            #define mod 1000000007
            #define N 51
            #define NN 21
            #define vi vector<int>
            #define vl vector<long>
            #define vll vector<long long>
            #define vc vector<char>
            #define ii <int, int>
            #define ll <long, long>
            #define lll <long long, long long>
            #define loop(i,s,n) for(int i=s;i<n;i++)
            #define loopr(i,n,s) for(int i=n-1;i>=s;i--)
            #define pb push_back

            inline lli modadd(lli n,lli m){
                lli sum = ((n+m)%mod+mod)%mod;
                return sum;
            }

            inline lli modsub(lli n,lli m){
                lli diff = ((n-m+mod)%mod+mod)%mod;
                return diff;
            }

            inline lli modpro(lli n,lli m){
                lli pro = ((n*m)%mod+mod)%mod;
                return pro;
            }

            inline lli pow(int a,int x){
                lli powe = 1;
                loop(i,0,x){
                    powe*=a;
                }
                return powe;
            }

        inline lli powmod(int a,int x){
                lli powe = 1;
                loop(i,0,x){
                    powe=modpro(powe,a);
                }
                return powe;
            }
            int index;


int dp[N][N];
int n, a[N];
vi v;
int finds(int mn, int k){
    if(dp[mn][k]!=-1) return dp[mn][k];
    if(k>(n-1)){
            cout<<mn<<" "<<k<<0<<"^"<<endl;
        return 0;
    }
    if(k>0&&(mn==0)){
        dp[mn][k]=1;
        cout<<mn<<" "<<k<<1<<endl;
        return 1;
    }
   // int r;
    //r = (dp[((mn+a[k])%n)][k+1])|(dp[mn][k+1]);
    if(finds(((mn+a[k])%n),k+1)==1){
       v.pb(k);
       cout<<mn<<" "<<k<<1<<endl;
        dp[mn][k]=1;
        return 1;
    }
    else if(finds(mn,k+1)==1){
            dp[mn][k]=1;
            cout<<mn<<" "<<k<<1<<endl;
        return 1;
    }
    dp[mn][k]=0;
    cout<<mn<<" "<<k<<0<<"@"<<endl;
    return 0;

}

int main(){
   int t;
   cin>>t;
   while(t--){
    cin>>n;
    loop(i,0,n){
    cin>>a[i];
    }
    memset(dp,-1,sizeof(dp));
    v.clear();
    if(finds(0,0)){
           // sort(v.begin(),v.end());
        loop(i,0,v.size()){
            cout<<v[i]+1<<" ";
        }cout<<endl;
    }
    else cout<<-1<<endl;
   /* loop(i,0,n){
        loop(j,0,n){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }*/
   }



            return 0;
            }


