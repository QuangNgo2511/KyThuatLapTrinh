#include<stdio.h>

void ThapHaNoi(int n , char a, char b, char c )
{
    if(n==1)
	{
        printf("\t%c-------%c\n",a,c);
        return;
    }
    ThapHaNoi(n-1,a,c,b);
    ThapHaNoi(1,a,b,c);
    ThapHaNoi(n-1,b,a,c);
}
    
int main()
{
    char a='A', b='B', c='C';
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    ThapHaNoi(n,a,b,c);
}
