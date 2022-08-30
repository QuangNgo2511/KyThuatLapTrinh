#include<stdio.h>
#include<string.h>

int DoDaiChuoi(char x[])
{
	int i=0;
	while(x[i]!='\0')
	{
		i=i+1;
	}
	return i=i+1;
}

int main()
{
	char ten[50]="NGO QUANG";
	printf("\nTen cua ban la: %s",ten);
	printf("\nDo dai ten la: %d",strlen(ten));
}
