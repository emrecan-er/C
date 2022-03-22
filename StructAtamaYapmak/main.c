#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    struct ogrenci_bilgi{
    int no;
    char ad[10];
    char soyad[10];
    int yas;
    };

    struct ogrenci_bilgi ogrenci_1,ogrenci_2;
    ogrenci_1.no=470;
    strcpy(ogrenci_1.ad,"Emrecan");
    strcpy(ogrenci_1.soyad,"Er");
    ogrenci_1.yas=18;
    ogrenci_1=ogrenci_2;
    return 0;
}
