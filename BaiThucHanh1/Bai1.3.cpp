#include<stdio.h>
#include<math.h> 
#define MAXD 20
#define MAXC 30

void NhapMT(int A[MAXD][MAXC],int &n, int &m);
void XuatMT(int A[MAXD][MAXC],int n, int m);
double TrungBinhCong(int A[MAXD][MAXC], int n, int m);
int TimPTLonNhat(int A[MAXD][MAXC], int n, int m);
int MaxDong(int A[MAXD][MAXC], int n, int m, int d);
int MaxCot(int A[MAXD][MAXC], int n, int m, int c);
bool SoNguyenTo(int soA);
int DemSoLuongSNT(int a[MAXD][MAXC], int n, int m);
void LietKeSNT(int a[MAXD][MAXC], int n, int m);

int main()
{
	//Khai bao bien
	int A[MAXD][MAXC];
	int n,m;
	printf("Nhap ma tran:\n");
	NhapMT(A,n,m);
	printf("\nMa tran sau khi nhap la:\n");
	XuatMT(A,n,m);
	printf("TBC cua ma tran la: %.2f", TrungBinhCong(A, n, m));
	printf("\nPhan tu lon nhat trong mang la: %d",TimPTLonNhat(A,n,m));
	printf("\nPhan tu lon nhat tren dong cua ma tran: %d", MaxDong(A,n,m,0));
	printf("\nPhan tu lon nhat tren cot cua ma tran: %d", MaxCot(A,n,m,0));
}

//Nhap ma tran
void NhapMT(int A[MAXD][MAXC],int &n, int &m)
{
	//Nhap so luong dong n
	do
	{
		printf("Hay nhap vao so luong dong cua ma tran A: ");
		scanf("%d",&n);
	}while(!(2<=n&&n<=MAXD));		
	//Nhap so luong cot m
	do
	{
		printf("Hay nhap vao so luong cot cua ma tran A: ");
		scanf("%d",&m);
	}while(!(2<=m&&m<=MAXC));
	//Nhap gia tri cho tung phan tu ma tran kt nxm
	for(int i=0; i<n ;i++)
		for(int j=0; j<m; j++)
		{
			printf("Nhap phan tu A[%d][%d]: ",i,j);
			scanf("%d",&A[i][j]);
		}		
}

//Xuat ma tran
void XuatMT(int A[MAXD][MAXC],int n, int m)
{
	for(int i=0; i<n; i++)
	{
		//In tat ca cac pt tren dong i
		for(int j=0; j<m; j++)
			printf("%5d",A[i][j]);
		printf("\n");
	}	
}
//Tinh trung binh cong ma tran 
double TrungBinhCong(int A[MAXD][MAXC], int n, int m)
{
	if(n<=0 || m<=0)
		return 0;
	int tong = 0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			tong = tong + A[i][j];
		}
	}
	double tbc = (double)tong/(m*n);
	return tbc;
}
//Tim phan tu lon nhat trong ma tran 
int TimPTLonNhat(int A[MAXD][MAXC], int n, int m)
{
    int temp = A[0][0];
    for(int i = 0; i<n; i++)
    	for(int j = 0; j<m; j++)
        	if(temp <A[i][j])
            	temp = A[i][j];
	return temp;        
}
//Tim phan tu lon nhat tren dong i cua ma tran
int MaxDong(int A[MAXD][MAXC], int n, int m, int d)
{
	int max = A[d][0];
	for(int j=0; j<n; j++)
		if(max<A[d][j])
		{
			max = A[d][j];
		}
		return max;
}
//Tim phan tu lon nhat tren cot i cua ma tran
int MaxCot(int A[MAXD][MAXC], int n, int m, int c)
{
	int max = A[0][c];
	for(int i=0; i<n; i++)
		if(max<A[i][c])
		{
			max = A[i][c];
		}
		return max;
}
//Dem cac phan tu la so nguyen to 
bool SoNguyenTo(int soA)
{
    if (soA < 2)
    {
        return 0;
    }
    else
    {
        for (int i = 2; i <= sqrt((float)soA); i ++)
        {
            if (soA%i==0)
            {
                return 0;
            }
        }
    }
    return 1;
}
 
int DemSoLuongSNT(int A[MAXD][MAXC], int n, int m)
{
   int dem = 0;
   for(int i = 0; i < n; i++)
      for(int j = 0; j < m; j++)
         if(SoNguyenTo(A[i][j]))
		 	dem = dem +1; 
   return dem;
}
 
void LietKeSNT(int A[MAXD][MAXC], int n, int m)
{
   int dem = 0;
   for(int i = 0; i < n; i++)
      for(int j = 0; j < m; j++)
         if(SoNguyenTo(A[i][j]))
		 	printf("%d\t", A[i][j]);
}

