#include <stdio.h>
#include <stdlib.h>

int main()
{
    //satir satir dosya okuma zorttt
    FILE *dosya;
    char satir[100],*karakter;
    dosya=fopen("bilgi.txt","r");
    if(dosya==NULL)
    {
        printf("Dosya olusturulamadi");

    }
    else
    {
        do
        {
             karakter=fgets(satir,100,karakter);
        if(karakter!=NULL)
        {
            printf("%s",satir);
        }

        }while(karakter!=NULL);
        fclose(dosya);
        printf("Okuma islemi tamamlandi ... ");
    }


    return 0;
}
