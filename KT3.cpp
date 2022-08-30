//Vi?t chuong trình gi?i quy?t câu 1 c?a b?n ? dây
#include<stdio.h>

typedef struct {
    float x;
    float y;
} Point;

void NhapDiem(Point &p)
{
    printf("Nhap x: ");
    scanf("%f", &p.x);
    printf("Nhap y: ");
    scanf("%f", &p.y);
    printf("\n");
}

void InDiem(Point p)
{
    printf("Toa do vua nhap la: (%f,%f)\n",p.x,p.y);
}

void NhapDSDiem(Point p[], int &n)
{
    for(int i=0; i<n; i++)
    {
        NhapDiem(p[i]);
    }
}

void InDSDiem(Point p[], int n)
{
    for(int i=0; i<n; i++)
    {
        InDiem(p[i]);
    }
}

int XoaPhanTu(Point p[], int &n, int vt)
{
    for(int i=vt; i<n; i++)
    {
        p[i].x=p[i+1].x;
        p[i].y=p[i+1].y;
    }
    return n=n-1;
}

void XoaCacPTTrung(Point p[], int &n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(p[i].x==p[j].x && p[i].y==p[j].y)
            {
                XoaPhanTu(p,n,j);
                j=j-1;
            }
        }
    }
}

int main()
{
    // Main program
    Point p[100];
    int n;
    printf("Nhap n diem can nhap: ");
    scanf("%d",&n);
    printf("Nhap danh sach diem: \n");
    NhapDSDiem(p,n);
    printf("Danh sach cac diem vua nhap la: \n");
    InDSDiem(p,n);
    printf("Cac phan tu trung sau khi bi xoa: \n");
    XoaCacPTTrung(p,n);
    InDSDiem(p,n);
    return 0;
}
