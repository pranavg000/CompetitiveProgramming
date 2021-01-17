#include <iostream>

using namespace std;

void computeLPSArray(string& pat, int M, int* lps){
    int i=1;
    lps[0]=0;
    int len=0;
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

void KMPSearch(string& pat, string& txt){
    int M = pat.size(), T = txt.size();
    //if(M>T) return 0;
    if(M>T) return;
    int lps[M];
    computeLPSArray(pat, M, lps);
    int i=0,j=0;
    while(i<T){
        if(pat[j]==txt[i]){
            i++;j++;
        }
        if(j==M){
            printf("Pattern Found from %d to %d\n",i-j, i-1);
            j = lps[M-1];
        }
        else if(i<T && pat[j]!=txt[i]){
            if(j) j = lps[j-1];
            else i++;
        }
    }
    //return j;
}

int main()
{
    string s = "010101zzzzzzabcabc";
    string p = "0101";
    KMPSearch(p, s);
    return 0;
}
