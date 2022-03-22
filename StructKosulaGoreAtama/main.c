#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct bilgi{
char isim[100];
char soyisim[100];
int numara;
int sinif;
}ogrencibilgi;

int main()
{
    ogrencibilgi ogrenci;
    printf("Ogrencinin ismi : ");
    gets(ogrenci.isim);
    printf("Ogrencinin soyadi : ");
    gets(ogrenci.soyisim);
    printf("Ogrencinin sinfi : ");
    gets(ogrenci.sinif);
    printf("Ogrencinin numarasi : ");
    gets(ogrenci.numara);
    if(ogrenci.numara==470)
    {
    ogrencibilgi ogrenci;
    printf("Ogrencinin ismi : %s",ogrenci.isim);
    printf("Ogrencinin soyadi : %s",ogrenci.soyisim);
    printf("Ogrencinin numarasi : %s",ogrenci.numara);
    printf("Ogrencinin sinfi : %s",ogrenci.sinif);
    }
    else
    {
        printf("Kayitli ogrenci bulunamadi!!!");
    }

    return 05;
}
