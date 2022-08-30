#include<stdio.h>

int ToanChuSoChan(int k);

int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    printf("Ket qua sau khi dem so chan: %d",ToanChuSoChan(n));
    return 0;
}

int ToanChuSoChan(int k)
{
    if(k==0)
        return 1;
    if((k%10)%2==0)
        return ToanChuSoChan(k/10);
    else return 0;
}
