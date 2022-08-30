#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100
//Nhap mang
void NhapMang(int a[],int &n)
{
	do
	{
		printf("Hay nhap so phan tu cua mang: ");
		scanf("%d",&n);
	}while(!(3<=n&&n<=MAX));
	for(int i=0; i<=n-1; i++)
	{
		printf("Nhap a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}
//Xuat mang
void XuatMang(int a[],int n)
{
	for (int i=0; i<=n-1; i++)
		printf("%d\t",a[i]);
}
//Tinh tong cac phan tu cua mag 
long TongMang(int a[], int n)
{
    long int temp = 0;
    for(int i = 0; i<n; i++)
        temp+=a[i];
    return temp;
}
//Tinh tong cac phan tu cua mang bang de quy 
int TongMangDQ(int a[], int n)
{
	if(n = 1)
	{
		return TongMangDQ(a, n);
		printf("%d", n);
	}
	return TongMangDQ(a, (n-1)+n);
	printf("%d", (n-1)+n);
}
//Tim phan tu lon nhat cua mang 
int TimMax(int a[], int n)
{
	int ln= a[0];
	for(int i=0;i<n;i++)
		if(a[i]>ln)
		{
			ln=a[i];
		}
	return ln;
}
//Tim phan tu lon nhat cua mang bang de quy 
int Max(int a[], int n)
{
    if (n == 1)
        return a[0];
 
    int tempMax = Max(a, n-1);
    if (tempMax > a[n-1])
        return tempMax;
    else
        return a[n-1];
}
//Dem so luong so nguyen to co trong mang 
bool KiemTraNguyenTo(int n)
{
    if (n < 2)
    {
        return false;
    }
    else if (n > 2)
    {
        if (n % 2 == 0)
        {
            return false;
        }
        for (int i = 3; i <= sqrt((float)n); i += 2)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}
//Dem so luong so nguyen to trong mang de quy 
int KTNguyenToDQ(int a[], int n)
{
	if(n<1)
	{
		return 0; 
	 } 
	 else
	 {
	 	return KiemTraNguyenTo(a[n-1]) ? KTNguyenToDQ(a,n-1)+1 : KTNguyenToDQ(a,n-1); 
	  } 
} 

int main()
{
	int a[MAX],n;
	int dem=0; 
	printf("Nhap mang\n");
	NhapMang(a,n);
	printf("\nXuat mang\n");
	XuatMang(a,n);
	printf("\nTong mang = %d",TongMang(a,n));
	//TongMangDQ(a,n); 
	//printf("Tong cac phan tu trong mang la: %d\n", TongMangDQ(a,n));
	TimMax(a,n);
	printf("\nPhan tu lon nhat trong mang: %d", TimMax(a,n));
	printf("\nPhan tu lon nhat trong mang la: %d", Max(a,n));
	for(int i = 0; i < n; i++)
    {
        if(KiemTraNguyenTo(a[i]) == true)
        {
            dem++;
        }
    }
    printf("\nSo luong cac so nguyen to: %d", dem);
    printf("\nSo luong cac so nguyen to la: %d", KTNguyenToDQ(a,n));
	return 0;
}
