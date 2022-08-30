#include<stdio.h>
#include<conio.h>
//Khong de quy
int Fibonacci(int n)
{
    int a1 = 1, a2 = 1;
    if (n == 1 || n == 2)
        return 1;
    int i = 3, a;
    while (i <= n)
    {
        a = a1 + a2;
        a1 = a2;
        a2 = a;
        i = i + 1;
    }
    return a;
}
//De quy
int FibonacciDQ(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return FibonacciDQ(n - 1) + FibonacciDQ(n - 2);
}

int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    printf("\nKet qua: %d",Fibonacci(n));
    printf("\nSo Fibonacci thu %d la: %d", n, FibonacciDQ(n));
    return 0;
}
