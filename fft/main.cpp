#include <bits/stdc++.h>

using namespace std;
#define lli long long
#define loop(i,s,n) for(int (i)=(s);(i)<(n);(i)++)
typedef complex<lli> cd;
const double PI = acos(-1);

void fft(vector<cd> & a, bool invert) {
    int n = a.size();
    if (n == 1)
        return;

    vector<cd> a0(n / 2), a1(n / 2);
    for (int i = 0; 2 * i < n; i++) {
        a0[i] = a[2*i];
        a1[i] = a[2*i+1];
    }
    fft(a0, invert);
    fft(a1, invert);

    double ang = 2 * PI / n * (invert ? -1 : 1);
    cd w(1), wn(cos(ang), sin(ang));
    for (int i = 0; 2 * i < n; i++) {
        a[i] = a0[i] + w * a1[i];
        a[i + n/2] = a0[i] - w * a1[i];
        if (invert) {
            a[i] /= 2;
            a[i + n/2] /= 2;
        }
        w *= wn;
    }
}


vector<lli> multiply(vector<lli> const& a, vector<lli> const& b) {
    vector<cd> fa(a.begin(), a.end()), fb(b.begin(), b.end());
    int n = 1;
    while (n < a.size() + b.size())
        n <<= 1;
    fa.resize(n);
    fb.resize(n);

    fft(fa, false);
    fft(fb, false);
    for (int i = 0; i < n; i++)
        fa[i] *= fb[i];
    fft(fa, true);

    vector<lli> result(n);
    for (int i = 0; i < n; i++)
        result[i] = round(fa[i].real());
    return result;
}

int main()
{
    int n,k;
    cin>>n>>k;
    int x;
    vector<lli> a(1001,0);
    loop(i,0,n){cin>>x;
    a[x]++;}
    vector<lli> ans(1,1);

    while(k>0){

        if(k%2) {
            ans = multiply(ans,a);
            k--;
        }
        else {
            a = multiply(a,a);
            k/=2;
        }
    }
    cout<<"hello"<<ans.size()<<endl;

    loop(i,0,(ans.size())) if(ans[i]) cout<<i<<" ";



    return 0;
}
