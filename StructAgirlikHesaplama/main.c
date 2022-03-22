#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 2

typedef struct
{
    char ad[15];
    char form[20];
    int sayi;
    float birimfiyat;
    float agirlik;
}meyve;



typedef struct
{

    meyve f[N];

}sepet;


void sepeti_olustur(sepet *emre)
{
    int i;
    for(i=0;i<N;i++)
    {
        meyveyi_olustur(&emre->f[i]);
    }
}



void meyveyi_olustur(meyve *emre)
{
    char bosluk;
    printf("Meyvenin adini giriniz : ");
    scanf("%s",emre->ad);
     printf("Meyvenin formunu giriniz : ");
    scanf("%s",emre->form);
     printf("Meyvenin sayisini giriniz : ");
     scanf("%c",&bosluk);
    scanf("%d",&emre->sayi);
    printf("Meyvenin birim fiyatini giriniz : ");
    scanf("%f",&emre->birimfiyat);
    printf("Meyvenin agirligini giriniz : ");
    scanf("%f",&emre->agirlik);
}

void agirligi_hesapla(sepet emre,float *total)
{
    int i;
    *total=0;
    for(i=0;i<N;i++)
    {
        *total+=(emre.f[i].agirlik*emre.f[i].agirlik);
    }
}
void fiyat_hesapla(sepet emre,float *total)
{
    *total=0;
    int i;
    float seklegore=0;
    for(i=0;i<N;i++)
    {
        seklegore=emre.f[i].birimfiyat;
        if(strcmp(emre.f[i].form,"yuvarlak")==0)
        {

        seklegore*=2;

        }
        if(emre.f[i].agirlik>200)
        {
            seklegore+=3;
        }
        *total+=(seklegore*emre.f[i].sayi);
    }




}

int main()
{
    float a,b;
    sepet p;
    sepeti_olustur(&p);
    agirligi_hesapla(p,&a);
    fiyat_hesapla(p,&b);
    printf("Toplam agirlik : %.2f\n",a);
    printf("Toplam fiyat : %.2f",b);

    return 0;
}
