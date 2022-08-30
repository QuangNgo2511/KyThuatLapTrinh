#include <stdio.h>
void DocFileMang(char filename[], int a[], int &n)
{
    FILE *fp = fopen(filename, "rt");
    if (fp == NULL)
        printf("Khong mo duoc file!");
    else
    {
        fscanf(fp, "%d\n", &n);

        for (int i = 0; i < n; i++)
        {
            fscanf(fp, "%d", &a[i]);
        }
        fclose(fp);
    }
}
void GhiFileMang(char fileName[], int a[], int n)
{
    FILE *fp = fopen(fileName, "wt");
    if (fp == NULL)
        printf("Khong mo duoc file!");
    else
    {
        fprintf(fp, "%d\n", n);
        for (int i = 0; i < n; i++)
            fprintf(fp, "%d  ", a[i]);
        fclose(fp);
    }
}
void XuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d  ", a[i]);
}
// Ham sap xep mang tang dan
void SapXepTangDan(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
}
int main()
{
    int a[100];
    int n;
    DocFileMang("D:/KyThuatLapTrinh/BaiThucHanh3/Bai6_Input.txt", a, n);
    XuatMang(a, n);
    SapXepTangDan(a, n);
    XuatMang(a, n);
    GhiFileMang("D:/KyThuatLapTrinh/BaiThucHanh3/Bai6_Output.txt", a, n);
    return 0;
}
