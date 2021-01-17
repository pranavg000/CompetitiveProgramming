#include <bits/stdc++.h>

using namespace std;
#define N 1000


string pat = "babana";
int delta[N][26];

bool endsWith(string prefix, string delta_string){
    if(prefix.size() > delta_string.size()) return 0;
    for(int i=0;i<prefix.size();i++)
        if(prefix[i] != delta_string[i-(int)prefix.size()+(int)delta_string.size()]) return 0;
    return 1;
}

int calc(string delta_string){
    int len=0;
    for(int i=1;i<=delta_string.size();i++){
        if(endsWith(pat.substr(0,i), delta_string)) len=i;
    }
    cout<<delta_string<<" "<<len<<endl;
    return len;
}

void computeDelta_n3() {
    for(int i=0;i<pat.size();i++){
        for(int j=0;j<26;j++){
            delta[i][j] = calc(pat.substr(0, i) + (char)('a'+j));
        }
    }
}


void computeLPSArray(string& pat, int* lps){
    int i=1;
    lps[0]=0;
    int len=0;
    int M = pat.size();
    while(i<M){
        if(pat[i]==pat[len]){
            lps[i]=(++len);
            i++;
        }
        else {
            if(len){
                len = lps[len-1];
            }
            else{
                lps[i]=0;
                i++;
            }
        }
    }
}

void computeDelta_f(){
    int lps[pat.size()];
    computeLPSArray(pat, lps);
    for(int i=0;i<pat.size();i++) cout<<lps[i]<<" ";
    /* INCOMPLETE */

}


int main()
{

    computeDelta_n3();






    return 0;
}
