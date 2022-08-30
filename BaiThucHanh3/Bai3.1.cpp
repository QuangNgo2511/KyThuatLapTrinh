#include <stdio.h>
int main()
{
    FILE * fp = NULL;
    fp= fopen("D:/KyThuatLapTrinh/BaiThucHanh3/Chuongtrinh_Minhhoa/TiengThu_LuuTrongLu.txt", "r");
    char c;
    while ((c = fgetc(fp)) != EOF)
    {
        printf("%c", c);
    }
    fclose(fp);
    return 0;
}
