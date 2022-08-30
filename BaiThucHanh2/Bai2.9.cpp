#include<stdio.h>

long ThapPhanToNhiPhan(int d)
{
    long b = 0;
    int rem, temp = 1;
 
    while (d!=0)
    {
        rem = d%2;
        d = d / 2;
        b = b + rem*temp;
        temp = temp * 10;
    }
    return b;
}

void NhiPhanDQ(int x)
{
	if(x==0)
		return ;
	else
	{
		int r = x%2;
		NhiPhanDQ(x/2);
		printf("%d",r);
	}	 
 }

int main()
{
	int n;
	do
	{
		printf("Nhap n: ");
		scanf("%d",&n);
	}while(n<0);
	printf("\nDay so nhi phan la: ");
	NhiPhanDQ(n);
	printf("\nDay so nhi phan sau khi chuyen doi la: ");
	ThapPhanToNhiPhan(n);
}
