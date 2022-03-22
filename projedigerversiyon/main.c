#include <stdio.h>
#include <stdlib.h>
#define DEGERSAYISI 4

int main()
{
    int i,j;
    FILE *dosya,*dosya1;
    dosya=fopen("giris.txt","w");
    dosya1=fopen("casus.txt","w");
    if(dosya==NULL)
    {
        printf("Dosya Okunamadi !!! ");
        exit(1);
    }
    else
    {
        printf("Giris Yapan numaralari giriniz : \n");
        double dizi[DEGERSAYISI];

        for(i=0; i<DEGERSAYISI ; i++)
        {
            scanf("%lf",&dizi[i]);
            fprintf(dosya,"%.0lf\n",dizi[i]);

        }

        for(i=0; i<DEGERSAYISI; i++)
        {
            fscanf(dosya,"%lf",&dizi[i]);
        }

        for(i=0; i<DEGERSAYISI; i++)
        {
            for(j=i+1; j<DEGERSAYISI; j++)
            {
                if(dizi[i]==dizi[j])
                {
                    fprintf(dosya1,"%.0lf\n",dizi[i]);
                }
            }
        }


    }

    fclose(dosya);
    fclose(dosya1);
    printf("Casus Basariyla Bulundu !! ");
    return 05;
}
