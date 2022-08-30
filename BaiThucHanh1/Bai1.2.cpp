#include <stdio.h>
#define MAX 100

void NhapMang(int a[], int &n);
void XuatMang(int a[], int n);
int KiemTraNT(int n);
void InSoNT(int a[], int n);
int KiemTraChinhPhuong(int n);
void InSoChinhPhuong(int a[], int n);
void PhanTuLonHon(int a[], int n);
int TimMax(int a[], int n);
bool DayTang(int a[],int n);
bool DayGiam(int a[],int n);
void SapXepTang(int a[],int n);
void SapXepGiam(int a[],int n);

int main()
{
	int a[MAX],n;
	printf("Nhap mang\n");
	NhapMang(a,n);
	printf("\nXuat mang\n");
	XuatMang(a,n);
	printf("\nSo nguyen to co trong mang\n");
	InSoNT(a,n);
	printf("\nSo chinh phuong có trong mang\n");
	InSoChinhPhuong(a,n);
	printf("\nCac phan tu lon hon gia tri trung binh cua mang\n");
	PhanTuLonHon(a,n);
	printf("\nTim phan tu lon nhat\n");
	TimMax(a,n);
	printf("\nPhan tu am lon nhat trong mang: %d", TimMax(a,n));
	printf("\nKiem tra day tang day giam va sap xep\n");
	if (DayGiam(a,n)==0 && DayTang(a,n)==0)
    {
        printf("\nMang duoc sap xep tang dan la: ");
        SapXepTang(a,n);
        XuatMang(a,n);
    }
    else
        if (DayGiam(a,n)==1)
            printf("\nDay tang");
        else
            printf("\nDay giam");
    SapXepGiam(a, n);
    printf("\nMang duoc sap xep giam dan la: ");
    XuatMang(a, n);
	return 0;
}
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
//Kiem tra so nguyen to
int KiemTraNT(int n)
{
    if(n<2)
        return 0;
    else{
        for(int i=2;i<=n/2;i++)
            if(n%i==0)
                return 0;
        return 1;
    }
}
 
void InSoNT(int a[], int n)
{
    printf("\nCac so nguyen to co trong mang la: \n");
    for(int i=0;i<n;i++)
        if(KiemTraNT(a[i]))
            printf("%5d",a[i]);
}
//In ra cac phan tu la so chinh phuong 
int KiemTraChinhPhuong(int n)
{
	int i;
	for(i=1; i<=n; i++)
		if(i*i ==n)
		{
			return 1;
			break;
		}
	return 0;
}

void InSoChinhPhuong(int a[], int n)
{
	printf("\nCac so chinh phuong thoa man: ");
	for(int i=0; i<n; i++)
	{
		if(KiemTraChinhPhuong(a[i]))
		{
			printf("%3d",a[i]);
		}
	}
}
//In ra cac phan tu lon hon gia tri trung binh cua mang 
void PhanTuLonHon(int a[], int n)
{
	float gttb = 0;
	for (int i=0;i<n;i++)
	{
		gttb = gttb + a[i];
	}
	gttb = gttb/n;
	for (int i=0;i<n;i++)
		if(a[i]>gttb)
		{
			printf("\nPhan tu lon hon gia tri trung binh: %d", a[i]);
		}
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
//Kiem tra day tang
bool DayTang(int a[],int n)
{
    for (int i=0;i<n-1;i++)
        for (int j=i+1;j<n;j++)
            if (a[i]<a[j])
                return 0;
    return 1;
}
//Kiem tra day giam
bool DayGiam(int a[],int n)
{
    for (int i=0;i<n-1;i++)
        for (int j=i+1;j<n;j++)
            if (a[i]>a[j])
                return 0;
    return 1;
}
//Sap xep mang tang dan
void SapXepTang(int a[],int n)
{
    for (int i=0;i<n-1;i++)
        for (int j=i+1;j<n;j++)
            if (a[i]>a[j])
            {
                float temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
}
//Sap xep mang giam dan
void SapXepGiam(int a[],int n)
{
    for (int i=0;i<n-1;i++)
        for (int j=i+1;j<n;j++)
            if (a[i]<a[j])
            {
                float temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
}


