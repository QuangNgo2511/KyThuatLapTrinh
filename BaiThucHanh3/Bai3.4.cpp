#include <stdio.h>
#include <math.h>
void PTBac2(char fileName[])
{
    FILE *fp;
    FILE *fkq;
    float a, b, c;
    fp = fopen(fileName, "rt");
    fkq = fopen("D:/KyThuatLapTrinh/BaiThucHanh3/Bai4_Output.txt", "wt");
    if (fp == NULL)
    {
        printf("khong mo duoc file %s", fileName);
    }
    else
    {
        while (!feof(fp))
        {
            fscanf(fp, "%f %f %f", &a, &b, &c);
            float delta = b * b - 4 * a * c;
            float x1;
            float x2;
            if (a == 0)
            {
                if (b == 0)
                {
                    if (c == 0)
                    {
                        printf("%.2f x^2 + %.2f x + %.2f = 0\tvo so nghiem\n", a, b, c);
                        fprintf(fkq, "%.2f x^2 + %.2f x + %.2f = 0\tvo so nghiem\n", a, b, c);
                    }
                    else
                    {
                        printf("%.2f x^2 + %.2f x + %.2f = 0\tvo nghiem\n", a, b, c);
                        fprintf(fkq, "%.2f x^2 + %.2f x + %.2f = 0\tvo nghiem\n", a, b, c);
                    }
                }
                else
                {
                    printf("%.2f x^2 + %.2f x + %.2f = 0\tx = %.2f\n", a, b, c, (-c / b));
                    fprintf(fkq, "%.2f x^2 + %.2f x + %.2f = 0\tx = %2.f\n", a, b, c, (-c / b));
                }
            }
            else if (delta > 0)
            {
                x1 = (float)((-b + sqrt(delta)) / (2 * a));
                x2 = (float)((-b - sqrt(delta)) / (2 * a));
                printf("%.2f x^2 + %.2f x + %.2f = 0\tx1 = %.2f  x2= %.2f\n", a, b, c, x1, x2);
                fprintf(fkq, "%.2f x^2 + %.2f x + %.2f = 0\tx1 = %.2f  x2= %.2f\n", a, b, c, x1, x2);
            }
            else if (delta == 0)
            {
                x1 = (-b / (2 * a));
                printf("%.2f x^2 + %.2f x + %.2f = 0\tNghiem  kep x = %.2f\n", a, b, c, x1);
                fprintf(fkq, "%.2f x^2 + %.2f x + %.2f = 0\tNghiem kep x = %.2f\n", a, b, c, x1);
            }
            else
            {
                printf("%.2f x^2 + %.2f x + %.2f = 0\tvo nghiem\n", a, b, c);
                fprintf(fkq, "%.2f x^2 + %.2f x + %.2f = 0\tvo nghiem\n", a, b, c);
            }
        }
        fclose(fkq);
        fclose(fp);
    }
}
int main()
{
    char fileName[] = "D:/KyThuatLapTrinh/BaiThucHanh3/Bai4_Input.txt";
    PTBac2(fileName);
    return 0;
}
