
      y
      |             

             .1      .2      .3
             
             
             .4      .5      .6


             .7      .8      .9
             (x,y) 

       _____>x


formed parallel to x, y axes

1,2,4,5
1,2,3,4,5,6


4,2,6,8.  <<< step-2

find the total number of rectangles that can be drawn by using such points that 
a) they stack vertically as shown
b) they are all +ve whole numbers
c) we are not looking at diagonals
===================================







      y
      |             

             .1      .2      .3
             
             
             .4      .5      .6


             .7      .8      .9
             (x,y) 

       _____>x


n m 
ans = 0
for i in range(n):
    for j from 0 to m-1:
        if(a[i][j]=='1'):
            for k from i-1 to 0
                if(a[k][j]=='1') c1++;
            
            for k from j-1 to 0
                if(a[i][k]=='1') c2++;

            ans += (c1*c2)
n =3 m = 3
10101
10101
10101

ans = 1 + 2 + 2 + 4
a[n][m];
O(n*n) O(n*n)

// cn[n][m][2]={};
// cn[i][j][0] = ;
// cn[i][j][1] = ;

// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         if(i>0)
//         cn[i][0] = cn[i-1][0]+a[i][j]; 
//         cn[i][j][1] = cn[i][j-1][1]+ a[i][j]; 
//     }
// }

int cy=0;

for(int i=0;i<n;i++){
    int cx=0;
    int f=0;
    for(int j=0;j<m;j++){
        if(a[i][j]=='1'){
            f=1;
            int c1=0,c2=0;
            cx++;
            // for(int k=i-1;k>=0;k--){
            //     if(a[k][j]=='1') c1++;
            // }
            // for(int k=j-1;k>=0;k--){
            //     if(a[i][k]=='1') c2++;
            // }
            // cny[j]++;
            // cnx[i]++;
            ans += (cx*cy);
        }
    }
    if(f) cy++;
}




int h = 8 , w = 4
n = 3
int h,w,n;
int tn = n;
// int c = 1;
1. h = 4 w = 4
2. h = 4 w = 2
3. h = 2 w = 2



1. h = 4 w = 2
2. h = 4 w = 4
3. h = 8 w = 4


// h/=2 w/=2

int div = n/2;
int rem = n%2;

h>>=div;
w>>=div;

// h/=pow(2,div);
// w/=pow(2,div);






if(rem){
    h/=2;
    swap(h,w);
    // c*=2;
}
n = tn;

if(rem){
    swap(h,w);
    h*=2;
}

h<<=div;
w<<=div;



h,w







{year, 0} // death
{year, 1} // birth

vector<pair<int,int>> v;
for(int i=0;i<n;i++){

    a[i].x a[i].y
    v.push({a[i].x, 1});    
    v.push({a[i].y+1, 0});    

}


sort(v);

{2,1} {3,0} 
{2,0} {2,1} 
int c = 0
int big = -1
for auto event: v:
    // event.x
    if(event.y==1) c++;
    else c--;
    big=max(big, c);



return c























































            








