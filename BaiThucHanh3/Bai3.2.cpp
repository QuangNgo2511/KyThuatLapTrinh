#include <stdio.h>
#include <stdlib.h>
long filesize(FILE* fp); 
int main(void)
{
    FILE* fp;
    fp = fopen("D:/KyThuatLapTrinh/BaiThucHanh3/Chuongtrinh_Minhhoa/TiengThu_LuuTrongLu.txt","rb"); 
    if(!fp) {
        printf("Error: file not found!"); 
        exit(1);
    }
    printf("Kich thuoc tap tin TiengThu_LuuTrongLu.txt la: %d Bytes \n", filesize(fp)); 
    return 0;
}
long filesize(FILE* fp)
{
    fseek(fp, 0, SEEK_END); 
    return ftell(fp); 
}
