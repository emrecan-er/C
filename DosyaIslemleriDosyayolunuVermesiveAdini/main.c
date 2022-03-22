#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    char dosyaismi[100],satir[100];
    char *karakter;
    printf("Dosya yolunu ve ismini giriniz : ");
    gets(dosyaismi);
    dosya=fopen(dosyaismi,"r");
    if(dosya==NULL)
    {
        printf("Dosya Bulunamadi!...");
    }
    else
    {
       karakter=fgets(satir,100,dosya);
        do
        {

          if(karakter!=NULL)
          {
              printf("%s",satir);
          }

        }while(karakter!=NULL);

        fclose(dosya);

    }

    return 0;
}
