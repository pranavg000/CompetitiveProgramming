#include <bits/stdc++.h>

using namespace std;

#define N 1000
typedef long long int lli;
typedef unsigned long long int uli;
typedef long double Lf;
typedef pair<int,int> pii;
typedef vector<int> vi;
#define fastIO  std::ios::sync_with_stdio(false);cin.tie(NULL)
#define mod 1000000007
#define N 200005
#define NN 2005
#define SZ(x) ((int) (x).size())
#define all(x) (x).begin(), (x).end()
#define loop(i,s,n) for(int i=(s);i<(n);i++)
#define loopr(i,n,s) for(int i=(n)-1;i>=(s);i--)
#define pb push_back
#define o2(a,b) cout<<(a)<<" "<<(b)<<endl
#define o3(a,b,c) cout<<(a)<<" "<<(b)<<" "<<(c)<<endl
#define o4(a,b,c,d) cout<<(a)<<" "<<(b)<<" "<<(c)<<" "<<(d)<<endl
#define cl cout<<endl
#define r0 return 0
#define e0 exit(0)
#define x first
#define y second

int a[N];
int cn[N];
lli curval;
int tl=0,tr=-1;
int BS;
int ans[N];
pair<pii,int> p[N];
bool comp(pair<pii,int> a, pair<pii,int> b)
{
    if (a.x.x / BS != b.x.x / BS)
        return a.x.x < b.x.x;

    //sort even blocks sorted by desc in odd by ascending
    //purely logical is the above process
    return ((a.x.x / BS) & 1) ? (a.x.y < b.x.y) : (a.x.y > b.x.y);
}


inline void remove(lli x){
    cn[x]--;
	if(cn[x]==0) curval--;
}
inline void add(lli x){
	cn[x]++;
	if(cn[x]==1) curval++;
}


int main()
{
    int n,q;
		cin>>n>>q;
		BS = static_cast<int>(sqrt(n));
		loop(i,0,n) cin>>a[i];
		loop(i,0,q){

			cin>>p[i].x.x>>p[i].x.y;
			p[i].x.x--;p[i].x.y--;
			p[i].y=i;
		}

		sort(p,p+q,comp);
		loop(i,0,q){
			int l = p[i].x.x;
			int r = p[i].x.y;
			while(tl < l){
				remove(a[tl]);
				tl++;
			}
			//o2(l,r);
			//o3(curval,tl,tr);
			while(tl > l){
				tl--;
				add(a[tl]);
			}
			//o2(l,r);
			//o3(curval,tl,tr);
			while(tr > r){
				remove(a[tr]);
				tr--;
			}
			//o2(l,r);
			//o3(curval,tl,tr);
			while(tr < r){
				tr++;
				add(a[tr]);
			}
			//o2(l,r);
			//o3(curval,tl,tr);


			ans[p[i].y]=curval;
		}

		loop(i,0,q) cout<<ans[i]<<"\n";

    return 0;
}
