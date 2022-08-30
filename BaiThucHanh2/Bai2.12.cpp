#include<conio.h>
#include<stdio.h>

int Tong(long N);

int main()
{
    long n;
    printf("Hay nhap so tu nhien: ");
    scanf("%d",&n);
    printf("Tong cac chu so: %d\n",Tong(n));
}

int Tong(long N)
{
    if(N>0)
        return N%10+Tong(N/10);
    return 0;
}
