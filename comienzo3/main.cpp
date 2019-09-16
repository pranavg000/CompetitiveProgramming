#include <bits/stdc++.h>

using namespace std;
#define lli unsigned long long int
struct point{
int x,y;}
int main()
{struct A,B,C;
    cin>>A.x>A.y>>B.x>>B.y>>C.x>>C.y;
if(abs(B.x-A.x)>=abs(C.x-A.x)&&abs(B.y-A.y)>=abs(C.y-A.y)) {far = B; near = C;inside = 1;}
else near = B; far = C;

if(inside==1) c= abs(B.x-A.x)+abs(B.y-A.y)-2;
else if(abs(B.x-A.x)<abs(C.x-A.x))
 c =abs(B.x-A.x)+abs(B.y-A.y)-2 + abs(C.x-A.x)
 else c =abs(B.x-A.x)+abs(B.y-A.y)-2 + abs(C.y-A.y)

return 0;
}
