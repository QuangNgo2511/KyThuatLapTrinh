#include<stdio.h>
#include<conio.h>
#include<string.h>

typedef struct {
    char HoTen[50];
    char MSSV[10];
    float DTB;
} SinhVien;

void NhapDSSV(int *n,SinhVien sv[100])
{
    printf("\nNhap so sinh vien: ");
    scanf("%d",n);
    for(int i=0;i<*n;i++)
    {
        printf("\nNhap thong tin sinh vien: %d",i+1);
        printf("\nNhap MSSV: ");
        fflush(stdin);
        gets(sv[i].MSSV);
        printf("\nNhap ho ten: ");
        fflush(stdin);
        gets(sv[i].HoTen);
    }
}
void InDSSV(int n,SinhVien sv[100])
{
    printf("\nDANH SACH SINH VIEN");
    printf("\nSTT     MSSV     HOTEN");
    for(int i=0;i<n;i++)
    {
        printf("\n%d\t%s\t%s",i+1,sv[i].MSSV,sv[i].HoTen);
    }
}
void TimDSSV(int n,SinhVien sv[100])
{
    int i=0;
    printf("\nTIM KIEM SINH VIEN");
    char mssv[10];
    printf("\nNhap MSSV: ");
    fflush(stdin);
    gets(mssv);
    for(i=0;i<n;i++){
        if(strcmp(sv[i].MSSV,mssv)==0){
        printf("\nSINH VIEN TIM THAY");
        printf("\nSTT     MSSV      HOTEN");
        printf("\n%d\t%s\t%s",i+1,sv[i].MSSV,sv[i].HoTen);
            break; 
        }
    }
    if(i==n){
        printf("Khong tim thay");
    }
}
int main()
{
    int c;
    SinhVien sv[100];
    int n;

    while(c!=4){
        printf("\nChon 1: Nhap danh sach sinh vien");
        printf("\nChon 2: Hien thi danh sach sinh vien");
        printf("\nChon 3: Tim kiem sinh vien theo MSSV");
        printf("\nChon 4: Ket thuc");
        printf("\nMoi ban chon: ");
        scanf("%d",&c);
        
    switch(c){
        case 1:
            NhapDSSV(&n,sv);
            break;
        case 2:
            InDSSV(n,sv);
            break;
        case 3:
            TimDSSV(n,sv);
            break;
        }
    }
}
