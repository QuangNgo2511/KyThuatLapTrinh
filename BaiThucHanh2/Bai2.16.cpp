#include<stdio.h>
int main()
{
  	int i, n;
  	long S = 0, P = 1;
  	do
  	{
    	printf("\nNhap n: ");
    	scanf("%d", &n);
    	if(n < 1)
    	{
      		printf("\nVui long nhap lai !");
    	}
  	}while(n < 1);
  	for(int i = 1; i <= n; i ++)
	  {
    	P = P + i;
    	S = S + P;
  	}
  	printf("\nTong cua bieu thuc: %ld",S);
}
