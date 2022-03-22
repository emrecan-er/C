#include <stdio.h>
#include <stdlib.h>

struct ogrenciBilgi{
    char adsoyad[30];
    char ders[30];
    int vize1,vize2,finalnot;
};

int main()
{
    FILE *dosya;
    int n;
    int i;
    float ortalama;
    printf("Lutfen ogrenci sayisini giriniz : ");
    scanf("%d",&n);
    struct ogrenciBilgi ogr[n];
    dosya=fopen("dersler.txt","w");
    if (dosya==NULL)
    {
        printf("Dosya Olusturulamadi !! ");
    }
    else
    {
        for(i=0;i<n;i++)
        {
            fflush(stdin);
            printf("Ogrencinin Adi ve Soyadi : ");
            gets(ogr[i].adsoyad);
            printf("Ders adi : ");
            gets(ogr[i].ders);
            printf("Vize 1 : ");
            scanf("%d",&ogr[i].vize1);
            printf("Vize 2 : ");
            scanf("%d",&ogr[i].vize2);
            printf("Final : ");
            scanf("%d",&ogr[i].finalnot);
            ortalama=(float)ogr[i].vize1*0.2+(float)ogr[i].vize2*0.2+(float)ogr[i].finalnot*0.6;
            fprintf(dosya,"%s\t %s\t %d\t %d\t %d\t %.2f\t\n",ogr[i].adsoyad,ogr[i].ders,ogr[i].vize1,ogr[i].vize2,ogr[i].finalnot,ortalama);
        }

    }
    fclose(dosya);
    printf("Basariyla dosyaya yazildi!!!");

    return 0;
}
