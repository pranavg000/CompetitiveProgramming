#include <bits/stdc++.h>

using namespace std;

#define N 205



class SegmentTree {
    public:
    vector<long long> arr;
    int n;
    SegmentTree(int n_, int *arr_){
        n = n_;
        arr.resize(2*n_,0);
        for(int i=n_;i<2*n_;i++) arr[i]=arr_[i-n_];
        build();
    }

    void build(){
        for(int i=n-1;i>0;i--) {
            arr[i]=arr[2*i] + arr[2*i+1];
        }
    }

    void update(int pos, int newVal){
        pos+=n;
        arr[pos] = newVal;
        pos/=2;
        while(pos>0){
            arr[pos] = arr[pos*2] + arr[2*pos+1];
            pos/=2;
        }
    }

    long long query(int l, int r){
        long long resl = 0, resr = 0;
        l+=n;r+=n;
        while(l<=r){
            if(l%2){
                resl = resl + arr[l];
            }
            l=(l+1)/2;
            if(r%2==0) {
                resr = resr + arr[r];
            }
            r=(r-1)/2;
        }
        return resl + resr;
    }
};

class SegmentTreemin {
    public:
    vector<int> arr;
    vector<int> in;
    int n;
    SegmentTreemin(int n_, int *arr_){
        n = n_;
        arr.resize(2*n_,0);
        in.resize(2*n_,0);
        for(int i=n_;i<2*n_;i++) arr[i]=arr_[i-n_];
        for(int i=n_;i<2*n_;i++) in[i]=i-n_;
//        for(int i=n_;i<2*n_;i++) in[i]=i-n_+1;
        build();
    }

    SegmentTreemin () {}

    void build(){
        for(int i=n-1;i>0;i--) {
            if(arr[2*i] < arr[2*i+1]){
                arr[i]=arr[2*i];
                in[i]=in[2*i];
            }
            else{
                arr[i]=arr[2*i+1];
                in[i]=in[2*i+1];
            }
        }
    }

    void update(int pos, int newVal){
        pos+=n;
        arr[pos] = newVal;
        pos/=2;
        while(pos>0){
            int i = pos;
            if(arr[2*i] < arr[2*i+1]){
                arr[i]=arr[2*i];
                in[i]=in[2*i];
            }
            else{
                arr[i]=arr[2*i+1];
                in[i]=in[2*i+1];
            }
            pos/=2;
        }
    }

    int query(int l, int r){
//        l--;r--;
        long long resl = INT_MAX, resr = INT_MAX;
        int inl=-1, inr=-1;
        l+=n;r+=n;
        while(l<=r){
            if(l%2){
                if(resl > arr[l]){
                    resl = arr[l];
                    inl = in[l];
                }
            }
            l=(l+1)/2;
            if(r%2==0) {
                if(resr > arr[r]){
                    resr = arr[r];
                    inr = in[r];
                }
            }
            r=(r-1)/2;
        }
        return ((resl<resr)?inl:inr);
    }
};

class SegmentTreemax {
    public:
    vector<int> arr;
    vector<int> in;
    int n;
    SegmentTreemax(int n_, int *arr_){
        n = n_;
        arr.resize(2*n_,0);
        in.resize(2*n_,0);
        for(int i=n_;i<2*n_;i++) arr[i]=arr_[i-n_];
        for(int i=n_;i<2*n_;i++) in[i]=i-n_;
//        for(int i=n_;i<2*n_;i++) in[i]=i-n_+1;
        build();
    }

    SegmentTreemax () {}

    void build(){
        for(int i=n-1;i>0;i--) {
            if(arr[2*i] > arr[2*i+1]){
                arr[i]=arr[2*i];
                in[i]=in[2*i];
            }
            else{
                arr[i]=arr[2*i+1];
                in[i]=in[2*i+1];
            }
        }
    }

    void update(int pos, int newVal){
        pos+=n;
        arr[pos] = newVal;
        pos/=2;
        while(pos>0){
            int i = pos;
            if(arr[2*i] > arr[2*i+1]){
                arr[i]=arr[2*i];
                in[i]=in[2*i];
            }
            else{
                arr[i]=arr[2*i+1];
                in[i]=in[2*i+1];
            }
            pos/=2;
        }
    }

    int query(int l, int r){
//        l--;r--;
        long long resl = -1, resr = -1;
        int inl=-1, inr=-1;
        l+=n;r+=n;
        while(l<=r){
            if(l%2){
                if(resl < arr[l]){
                    resl = arr[l];
                    inl = in[l];
                }
            }
            l=(l+1)/2;
            if(r%2==0) {
                if(resr < arr[r]){
                    resr = arr[r];
                    inr = in[r];
                }
            }
            r=(r-1)/2;
        }
        return ((resl>resr)?inl:inr);
    }
};

class SegmentTreeInverse {
    public:
    vector<int> arr;
    int n;
    SegmentTreeInverse(int n_){
        n = n_;
        arr.resize(2*n_,0);

    }

    long long query(int pos){
        long long res = 0;
        pos+=n;
        res += arr[pos];
        pos/=2;
        while(pos>0){
            res += arr[pos];
            pos/=2;
        }
        return res;
    }

    void update(int l, int r, int newVal){
        l+=n;r+=n;
        while(l<=r){
            if(l%2){
                arr[l]+=newVal;
            }
            l=(l+1)/2;
            if(r%2==0) {
                arr[r]+=newVal;
            }
            r=(r-1)/2;
        }
    }

    void pushToLeaf(){
        for(int i=1; i<n; i++){
            arr[2*i] += arr[i];
            arr[2*i+1] += arr[i];
            arr[i]=0;
        }
    }
};

int main()
{
    int n;
    cin>>n;

    return 0;
}
