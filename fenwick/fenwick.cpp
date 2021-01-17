#define N 1000

long long bit[N];
int n;
void add(int pos, int delta){
    for(int i=pos;i<n;i=(i|(i+1))) bit[i]+=delta;
}
long long query(int pos){
    long long res=0;
    for(int i=pos;i>=0;i=(i&(i+1))-1) res+=bit[i];
    return res;
}
int lower_bound(long long sum) { 
    /* First pos st sum of [0, pos] >= sum
     If not found returns n */
    if(sum<=0) return -1;
    int pos=0;
    for(int i=(1<<20);i;i>>=1){
        if(pos+i<=n && sum>bit[pos+i-1]){
            sum-=bit[pos+i-1];
            pos+=i;
        }
    }
    return pos;
}

int main(){
    
}