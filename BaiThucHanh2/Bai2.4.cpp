#include<stdio.h>

float TongTien(int m, float r, int n)
{
	if(n==0)
		return m;
	return r * TongTien(m,r,n-1) + TongTien(m,r,n-1);
}
int main()
{
	
}
