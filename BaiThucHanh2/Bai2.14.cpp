#include<stdio.h>

int UCLN(int a, int b)
{
    if (b == 0)
		return a;
    if (a % b == 0)
		return b;
    return UCLN(b, a%b);
}

int main()
{
    int a, b, c;
    printf("Nhap so a: ");
    scanf("%d",&a);
    printf("Nhap so b: ");
    scanf("%d",&b);
    c = UCLN(a,b);
    printf("Uoc chung lon nhat la: %d",c);
}
