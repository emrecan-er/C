#include <stdio.h>
#include <stdlib.h>
 #define PI 3.14
 #include <math.h>

int main()
{
    FILE *dosya;
    double sinus,cosinus;
    int i;
    dosya=fopen("acilar.txt","w");
    if(dosya==NULL)
    {
        printf("Dosya Olusturulamadi !!! ");

    }
    else
    {
        fprintf(dosya,"DERECE\tSIN\tCOS\n");
        fprintf(dosya,"======\t======\t======\n");
        for(i=0;i<=360;i++)
        {
            sinus=sin(i*PI/180);
            cosinus=cos(i*PI/180);
            fprintf(dosya,"%d\t %lf\t %lf\n",i,sinus,cosinus);
        }


    }
    fclose(dosya);
    printf("Islem Basarili !!!");
    return 0;
}
