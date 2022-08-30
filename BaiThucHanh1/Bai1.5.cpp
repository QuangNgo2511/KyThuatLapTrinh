#include<iostream>
#include<stdio.h>
using namespace std;
void TronMT(int a[100],int na,int b[100],int nb,int c[100],int nc)
{
	int ia = 0;
	int ib = 0;
    for(int i = 0; i < nc; i++)
        if( ia < na && a[ia] < b[ib])
		{ 	
			c[i] = a[ia];
			ia++;
		}
        else {
			c[i] = b[ib];
			ib++;
		}
}
int main()
{
    int x[100] = {1,2,3,4,5,6,8,9,12};
	int nx = 9;
    int y[100] = {3,4,7,8,10,11,15};
	int ny = 7;
    int z[100];
	int nz = nx+ny;
    TronMT(x,nx,y,ny,z,nz);
    for(int i=0;i<nz;i++)  cout<<z[i] <<" ";
    return 0;
}
