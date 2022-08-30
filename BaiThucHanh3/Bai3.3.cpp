#include <stdio.h>
#include <math.h>
FILE *fp = NULL;
int giaiPT(float a, float b, float c, float &x1, float &x2)
{
    float delta = b * b - 4 * a * c;
    if (delta < 0)
    {
        x1 = x2 = 0.0;
        return 0;
    }
    else if (delta == 0)
    {
        x1 = x2 = -b / (2 * a);
        return 1;
    }
    else
    {
        delta = sqrt(delta);
        x1 = (-b + delta) / (2 * a);
        x2 = (-b - delta) / (2 * a);
        return 2;
    }
}
int main()
{
    float a, b, c;
    float x1, x2;
    fp = fopen("D:/KyThuatLapTrinh/BaiThucHanh3/Bai3.txt", "r");
    if (fp == NULL)
    {
        printf("Khong mo duoc file");
    }
    else
    {
        fscanf(fp, "%f", &a);
        fscanf(fp, "%f", &b);
        fscanf(fp, "%f", &c);
    }

    int numNo = giaiPT(a, b, c, x1, x2);
    if (numNo == 0)
    {
        printf("Phuong trinh da cho vo nghiem");
    }
    else if (numNo == 1)
    {
        printf("Phuong trinh da cho co nghiem kep x=%.4f", x1);
    }
    else
    {
        printf("Phuong trinh da cho co hai nghiem phan biet\nx1=%.4f \nx2=%.4f", x1, x2);
    }
    return 0;
}
