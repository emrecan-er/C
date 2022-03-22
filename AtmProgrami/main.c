#include <stdio.h>
#include <stdlib.h>

int main()
{
 int islem;
 int bakiye=1000;
 int tutar;
 printf("Islemler\n");
 printf("1:Para Cekme\n");
 printf("2:Para Yatirma\n");
 printf("3:Havale Yapma\n");
 printf("4:Bakiye Sorgulama\n");
 printf("5:Kart Iade\n");
 printf("Islemi Seciniz:");
 scanf("%d",&islem);
 switch(islem)
 {
case 1:
    printf("Bakiyeniz %d\n",bakiye);
    printf("Cekilecek Tutari Giriniz \n");
    scanf("%d",&tutar);
    if (tutar>bakiye)
    {
        printf("Yetersiz Bakiye\n");
    }
    else
    {
        printf("Paraniz basariyla cekilmistir kalan bakiye %d\n",bakiye-tutar);
    }
    break;

case 2:
     printf("Bakiyeniz %d\n",bakiye);
    printf("Yatirilacak Tutari Giriniz \n");
    scanf("%d",&tutar);
   printf("Para basariyla bakiyenize eklenmistir,yeni bakiyeniz %d",bakiye+tutar);
   break;
case 3:
     printf("Bakiyeniz %d\n",bakiye);
    printf("Havale Edilecek Tutari Giriniz \n");
    scanf("%d",&tutar);
    if (tutar>bakiye)
    {
        printf("Yetersiz Bakiye\n");
    }
    else
    {
        printf("Paraniz basariyla havale edilmistir kalan bakiye %d\n",bakiye-tutar);
    }
    break;
case 4:
     printf("Bakiyeniz %d\n",bakiye);
     break;

case 5:
    printf("Kartiniz basariyla iade edilmistir iyi gunler dileriz CU Bankasi\n");
    break;
default:
printf("Bilinmeyen Islem");
break;

 }

    return 0;
}
