//Vi?t chuong trình gi?i quy?t câu 2 c?a b?n ? dây
#include<stdio.h>
#define MAX 100

void NhapMang(int a[], int &n);
void InMang(int a[], int n);
int DemPTDuong(int a[], int n);
int KiemTraNT(int n);
int SoNTLonNhat(int a[], int n);

int main()
{
    // Main program
    int a[MAX], n;
    printf("1. Nhap mang\n");
    NhapMang(a,n);
    printf("\n2. In mang\n");
    InMang(a,n);
    printf("\n3. Dem so luong phan tu duong cua mang");
    printf("\nSo luong phan tu duong co trong mang la: %d\n",DemPTDuong(a,n));
    printf("\n4. So nguyen to lon nhat trong mang");
    printf("\nSo nguyen to lon nhat trong mang la: %d\n",SoNTLonNhat(a,n));
    return 0;
}

void NhapMang(int a[], int &n)
{
    do
    {
        printf("Hay nhap so phan tu cua mang: ");
        scanf("%d",&n);
    }while(!(0<=n&&n<=MAX));
    for(int i=0; i<=n-1; i++)
    {
        printf("Nhap a[%d]: ",i);
        scanf("%d",&a[i]);
    }
}

void InMang(int a[], int n)
{
    for(int i=0; i<=n-1; i++)
        printf("%d\t",a[i]);
}

int DemPTDuong(int a[], int n)
{
    if(n==1)
    {
        if(a[n-1]>0)
            return 1;
        else return 0;
    }
    if(a[n-1]>0)
        return DemPTDuong(a,n-1)+1;
    else return DemPTDuong(a,n-1);
}

int KiemTraNT(int n)
{
    if(n<2)
        return 0;
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int SoNTLonNhat(int a[], int n)
{
    if(n==0)
        return 0;
    if(n==1)
    {
        if(KiemTraNT(a[n-1])==1)
            return a[n-1];
        else return 0;
    }
    if(KiemTraNT(a[n-1])==1)
    {
        if(a[n-1]>SoNTLonNhat(a,n-1))
            return a[n-1];
        else return SoNTLonNhat(a,n-1);    
    }
    else return SoNTLonNhat(a,n-1);
}
