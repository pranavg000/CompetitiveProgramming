#include <bits/stdc++.h>

typedef long long lli;
typedef unsigned long long uli;
using namespace std;
#define mod 1000000007


inline lli modadd(lli n,lli m,lli p=mod){
    return ((n+m)%p+p)%p;
}

inline lli modsub(lli n,lli m,lli p=mod){
    return ((n-m+p)%p+p)%p;
}

inline lli modpro(lli n,lli m,lli p=mod){
    return ((n*m)%p+p)%p;
}

inline uli powmod(uli x,uli y,uli p=mod){
    uli res = 1;
    while (y > 0) {
        if (y & 1LL)
            res = modpro(res , x, p);
        y = y >> 1LL;
        x = modpro(x , x, p);
    }
    return res;
}


class matrix{
public:

    // Attributes
	int row, col;
	std::vector<std::vector<lli>> num;

	// Constructor
	matrix(int row, int col, int defaultValue = 0){
		this->num = std::vector<std::vector<lli>>(row, std::vector<lli>(col, defaultValue));
		this->row = row, this->col = col;
	}
	matrix(std::vector<std::vector<lli>> num){
		this->num = num;
		this->row = this->num.size();
		this->col = this->num[0].size();
	}

	// Operator
	matrix operator *(matrix &another){
		if(this->col != another.row){
			printf("Wrong size: %d*%d X %d*%d\n", this->row, this->col, another.row, another.col);
			throw "Wrong size";
		}
		matrix newone(this->row, another.col);
		for(int r=0; r<newone.row; r++) for(int c=0; c<newone.col; c++){
			for(int k=0; k<this->col; k++){
				newone.num[r][c] = modadd( modpro( this->num[r][k] , another.num[k][c] , mod), newone.num[r][c] ,mod);
//				newone.num[r][c] %= matrixRemainder;
			}
		} return newone;
	}

	// Power
	matrix operator ^(lli x){
		if(x==0){
			printf("Not implemented yet.\n");
			throw "Not implemented";
		}
		else if(x==1) return *this;
		else{
			matrix halfpower = (*this) ^ (x/2);
			if(x%2 == 0) return halfpower * halfpower;
			else return halfpower * halfpower * (*this);
		}
	}
};




int main()
{

    return 0;
}
