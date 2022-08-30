#include<stdio.h>
#include<conio.h>
#include<math.h>

int DemSo(int n)
{
	int dem=0;
	while( n!=0)
	{
	    n=n/10;
	    dem = dem +1;
	}
	return dem;
}

int DaoNguoc(int n)
{
	if(n==0)
	{
	    return n;
	}
	else
	{
	    return (n%10)*pow(10, DemSo(n)-1)+DaoNguoc(n/10);
	}
}

int main()
{
    int n;
    printf("Nhap vao 1 so nguyen: ");
    scanf("%d", &n);
    printf("Day so nguyen sau khi dao nguoc la: %d", DaoNguoc(n));
}
