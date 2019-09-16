#include<bits/stdc++.h>
using namespace std;
struct point {
	    int x,y;
	};


point pf,qf;
int n;
double dist(point p,point q)
{//cout<<p.x<<" "<<p.y<<" ";
    return sqrt((p.x-q.x)*(p.x-q.x)+(p.y-q.y)*(p.y-q.y));
}
double closestSplitPair(point PX[],point PY[],double delta,int m)
{//cout<<"hello";
int k=0; point SY[50000]; double d;
    for(int i=0;i<n;i++)
    if(PY[i].x>(PX[m].x-delta)&&PY[i].x<(PX[m].x+delta))
    {SY[k]=PY[i]; k++;}
if(k>7)
{for(int i=0;i<k-7;i++)
    for(int j=1;j<8;j++)

{
d=dist(SY[i],SY[i+j]);
if(d<delta){delta=d; pf=SY[i]; qf=SY[j];
}
}
for(int i=0;i<7;i++)
    for(int j=i+1;j<7;j++)
{
d=dist(SY[k-7+i],SY[k-7+j]);
if(d<delta){delta=d; pf=SY[k-7+i]; qf=SY[k-7+j];
}
}}
else
for(int i=0;i<k;i++)
    for(int j=i+1;j<k;j++)

{
d=dist(SY[i],SY[j]);//cout<<d<<" ";
if(d<delta){delta=d; pf=SY[i]; qf=SY[j]; //cout<<qf.x<<"%"<<qf.y<<" "<<delta<<"\t";
}
}
return delta;
}
double closestPair(point PX[],point PY[],int l, int r)
{double d1,d2,delta=5000000.0;
    //if(a[l][r]!=-1) return a[l][r];
    //cout<<pf.x<<"%"<<pf.y<<" ";
    if (l < r)
	{
		// Same as (l+r)/2, but avoids overflow for
		// large l and h
		int m = l+(r-l)/2;

		// Sort first and second halves
		d1=closestPair(PX,PY, l, m);
		d2=closestPair(PX,PY, m+1, r);
		delta=min(d1,d2);
        delta=closestSplitPair(PX,PY,delta,m);

	}
	//a[l][r]=delta;
return delta;
}

int mergeX(point arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	/* create temp arrays */
	point L[n1], R[n2];

	/* Copy data to temp arrays L[] and R[] */
	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1+ j];

	/* Merge the temp arrays back into arr[l..r]*/
	i = 0; // Initial index of first subarray
	j = 0; // Initial index of second subarray
	k = l; // Initial index of merged subarray
	while (i < n1 && j < n2)
	{
		if (L[i].x <= R[j].x)
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	/* Copy the remaining elements of L[], if there
	are any */
	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}


	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
	return 0;
}


int mergeSortX(point arr[], int l, int r)
{
	if (l < r)
	{

		int m = l+(r-l)/2;

		// Sort first and second halves
		mergeSortX(arr, l, m);
		mergeSortX(arr, m+1, r);

		mergeX(arr, l, m, r);
	}return 0;
}
int mergeY(point arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	/* create temp arrays */
	point L[n1], R[n2];

	/* Copy data to temp arrays L[] and R[] */
	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1+ j];

	/* Merge the temp arrays back into arr[l..r]*/
	i = 0; // Initial index of first subarray
	j = 0; // Initial index of second subarray
	k = l; // Initial index of merged subarray
	while (i < n1 && j < n2)
	{
		if (L[i].y <= R[j].y)
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	/* Copy the remaining elements of L[], if there
	are any */
	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	/* Copy the remaining elements of R[], if there
	are any */
	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}return 0;
}


int mergeSortY(point arr[], int l, int r)
{
	if (l < r)
	{
		// Same as (l+r)/2, but avoids overflow for
		// large l and h
		int m = l+(r-l)/2;

		// Sort first and second halves
		mergeSortY(arr, l, m);
		mergeSortY(arr, m+1, r);

		mergeY(arr, l, m, r);
	}return 0;
}



int main()
{point arr[50000],PX[50000],PY[50000]; double d; int ans1,ans2;
cin>>n;
/*for(int i=0;i<20;i++)
    for(int j=0;j<20;j++)
    for(int j=0;j<20;j++)
    a[i][j]=-1;*/
for(int i=0;i<n;i++)
    {cin>>arr[i].x>>arr[i].y;}
    for(int i=0;i<n;i++) PX[i]=arr[i];
mergeSortX(PX,0,n-1);
for(int i=0;i<n;i++) PY[i]=arr[i];
mergeSortY(PY,0,n-1);
/*for(int i=0;i<n;i++)
    {cout<<arr[i].x<<" "<<arr[i].y<<"\t";}*/


d=closestPair(PX,PY,0,n-1);
for(int i=0;i<n;i++)
 if(arr[i].x==pf.x&&arr[i].y==pf.y) ans1=i;
for(int i=0;i<n;i++)
 if(arr[i].x==qf.x&&arr[i].y==qf.y) ans2=i;
 if(ans1<ans2)
 cout <<ans1<<" "<<ans2<<" "<< setprecision(6) << fixed << d<<endl;
 else cout <<ans2<<" "<<ans1<<" "<< setprecision(6) << fixed << d<<endl;



	return 0;
}
