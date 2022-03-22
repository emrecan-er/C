#include <stdio.h>
#include <stdlib.h>
typedef struct personel{

    int sifre;
    char ad[10];
    char soyad[10];
    int yas;
    float maas;
    char cinsiyet[10];

}kisiler;
void sirala(kisiler x[])
{





}

int main()
{
    int N;
    int i;
    printf("Kac adet personel bilgisi tutulacak ? : ");
    scanf("%d",&N);
    kisiler p[N];
    for(i=0;i<N;i++)
    {
        printf("Sifre = \n");
        scanf("%d",&p[i].sifre);
        printf("Ad = \n");
        scanf("%d",&p[i].ad);
        printf("Soyad = \n");
        scanf("%d",&p[i].soyad);
        printf("Yas = \n");
        scanf("%d",&p[i].yas);
        printf("Maas = \n");
        scanf("%d",&p[i].maas);
        printf("Cinsiyet = \n");
        scanf("%d",&p[i].cinsiyet);
    }
    sirala(p,N);


    return 0;
}
