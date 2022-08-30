#include<stdio.h>
#include<conio.h>
#include<math.h>

//Tinh x mu n de quy 
int MuDQ(int a,int b)
{
     if(b==1)
     return a;
     else
     return MuDQ(a,b-1)*a;
}
//Tinh n giai thua khong de quy 
int GiaiThua(int n)
{
    int gt=1;
    for (int i=1; i<=n; i++)
        gt*=i;
    return gt;
}
int GiaiThuaDQ(int n)
{
    if (n==1)
        return 1;
    return n*GiaiThuaDQ(n-1);
}
//s(n) = 1 + 2 + ... + n, voi n >= 0
int Sum(int n)
{
	int S=0;
  	for(int i=1; i<=n; i++)
    {
        S=S+i;
    }
    return S;	
}
int SumDQ(int n)
{
    if (n==1) return 1;
    return SumDQ(n-1)+n;
}
//s(n) =  1 + 3 + 5 + ... + (2n - 1), voi n >= 0
int TongLe(int n)
{
	int S=0;
	for(int i=1; i<=n; i=i+2)
	{
		S=S+i;
	}
	return S;
}
int TongLeDQ(int n)
{
	if (n==1) return 1;
	return TongLeDQ(n-2)+n;
}
//s(n) =  2 + 4 + 6 + ... + (2n), voi n = 0
int TongChan(int n)
{
	int S=0;
	for(int i=2;i<=n;i=i+2)
	{
		S=S+i;
	}
	return S;
}
int TongChanDQ(int n)
{
	if (n==2) return 2;
	return TongChanDQ(n-2)+n;
}
//Tinh tong cac so nguyen to voi n nguyen duong
int KiemTraNT(int n)
{
	if((n==1)||(n==2)||(n==3)) return 1;
	for(int i=2; i<=sqrt(n); i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
int TongNT(int n)
{
	int S=0;
	for(int i=2; i<=n; i++)
	{
		if(KiemTraNT(i)==1)
			S=S+i;
	}
	return S;
}
int TongNTDQ(int n)
{
	if(n==2) return 2;
	if(KiemTraNT(n)==0)
		return TongNTDQ(n-1);
	return TongNTDQ(n-1)+n;
}
//Dem so nguyen to <=n voi n nguyen duong
int DemNT(int n)
{
	int dem=0;
	for(int i=2; i<=n; i++)
		if(KiemTraNT(i)==1)
			dem=dem+1;
	return dem;		
}
int DemNTDQ(int n)
{
	if(n==2) return 1;
	if(KiemTraNT(n)==0)
		return DemNTDQ(n-1);
	return DemNTDQ(n-1)+1;
}
int main()
{
	int n;
	//Tinh x mu n khong de quy 
	/*
	float x, z;
  	
  	printf("Nhap vao co so x: ");
  	scanf("%f", &x);
  	printf("Nhap vao so mu n: ");
  	scanf("%d", &n);
  	z = pow(x, n);
  	printf("%.1f^%d = %.1f",x,n, z);
  	*/
	//Tinh x mu n de quy
    /*int n,x;
    printf("Nhap so: ");
    scanf("%d",&n);
    printf("So mu: ");
    scanf("%d",&x);
    printf("%d",MuDQ(n,x));
    //Tinh n giai thua khong DQ
	printf("\nNhap n can tinh giai thua: ");
	scanf("%d",&n);
	printf("\nGiai thua sau khi tinh la: ",GiaiThua(n));
	printf("\nGiai thua %d bang de quy la: %d", n, GiaiThuaDQ(n));*/
	//
	printf("\nNhap vao so n: ");
  	scanf("%d", &n);
  	printf("\nTong 1 + 2 + ... + n la: %d",Sum(n));
  	printf("\nTong cua day so la: %d",SumDQ(n));
  	//
  	printf("\nTong le cua day so la: %d",TongLe(n));
  	printf("\nTong le cua day so la: %d",TongLeDQ(n));
  	//
  	printf("\nTong chan cua day so la: %d",TongChan(n));
  	//
  	printf("\nTong cac so nguyen to la: %d",TongNT(n));
  	printf("\nTong cac so nguyen to la: %d",TongNTDQ(n));
  	//
  	printf("\nSo nguyen to co %d so",DemNT(n));
  	printf("\nSo nguyen to co %d so",DemNTDQ(n));
    return 0;
}
