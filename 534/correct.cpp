#include<bits/stdc++.h>
#define pb push_back
#define all(x) x.begin(), x.end()
#define rep(i,a,b) for(int i = a; i < b; i++)

using namespace std;

typedef long long int ll;

ll power(ll n, ll k){
    ll res = 1;
    while(k){
        if(k& 1){
            res *= n;
            k--;
        }
        else{
            n *= n;
            k/=2;
        }
    }
    return res;
}

vector<ll> v;
void pre(){
    vector<ll> p;
    for(int i = 2; i <= 100001; i++){
        bool ok = 0;
        for(int j = 2; j*j <= i; j++){
            if(i % j == 0){
                ok = 1;
                break;
            }
        }
        if(!ok)
            p.pb(i);
    }
    
    for(ll i = 0; i < p.size(); i++){
        v.pb(power(p[i],4));
    }
}

void solve(){
    ll n; cin >> n;
    ll idx = upper_bound(all(v), n) - v.begin();
    
    cout << idx << endl;
    return;
}

int main(){
    pre();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
    return 0;
}