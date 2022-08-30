#include<stdio.h>

int SoLonNhat(int n)
{
	if(n<10)
		return n;
	if((n%10)>SoLonNhat(n/10))
		return n%10;
	else
		return SoLonNhat(n/10);
}

int main()

{
	int n;
	printf("Hay nhap 1 so: ");
	scanf("%d",&n);
	printf("So lon nhat la: %d",SoLonNhat(n));
	return 0;
}
