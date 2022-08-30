#include<stdio.h>
#include<math.h>

typedef int m2c[10][10];

void NhapMT(m2c a, int &m, int &n)
{
    while(m<2||m>10)
    {
        printf("Nhap lai hang: ");
        scanf("%d",&m);
    }
    while(n<2||n>10)
    {
        printf("Nhap lai cot: ");
        scanf("%d",&n);
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("Nhap phan tu a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}

void XuatMT(m2c a, int m, int n)
{
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }
}

int laSoCP(int n)
{
    if(n<1)
        return 0;
    int i=sqrt(n);
    if(i*i==n)
        return 1;
    return 0;
}

int MaxSCP(m2c a, int &m, int &n)
{
    int max=-1;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(laSoCP(a[i][j])==1)
            {
                if(max<a[i][j])
                    max=a[i][j];
            }
        }
    }
    return max;
}

double TongCot(m2c a,int m, int n, int x)
{
    double s=0;
    for(int i=0; i<n; i++)
        s=s+a[i][x];
    return s;
}

int main()
{
    // Main program
    m2c a;
    int m, n, x;
    printf("Nhap so hang: ");
    scanf("%d",&m);
    printf("Nhap so cot: ");
    scanf("%d",&n);
    printf("Nhap ma tran: \n");
    NhapMT(a,m,n);
    printf("Ma tran sau khi nhap la: \n");
    XuatMT(a,m,n);
    printf("So chinh phuong lon nhat trong ma tran la: %d\n",MaxSCP(a,m,n));
    printf("Nhap cot can tinh: \n");
    scanf("%d",&x);
    double t=TongCot(a,m,n,x);
    printf("Tong cot %d la: %8.2f",x,t);
}
