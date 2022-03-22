#include <stdio.h>
#include <stdlib.h>
int main()
{
    int kod;
    float sonfiyat,kitap,temelgida,luks;
    printf("0-Kitap\n");
    printf("1-Temel Gida\n");
    printf("2-Luks\n");
    printf("Lutfen Urun Kodunu Giriniz\n");
    scanf("%d",&kod);
    switch(kod)
    {
    case 0:
        {
            printf("Lutfen urunun fiyatini giriniz (VERGISIZ FIYAT)\n");
            scanf("%f",&kitap);
            sonfiyat=kitap+(kitap*0.04);
            printf("Son fiyat =  %.2f TL",sonfiyat);

        }
         break;
    case 1:
         {
            printf("Lutfen urunun fiyatini giriniz (VERGISIZ FIYAT)\n");
            scanf("%f",&temelgida);
            sonfiyat=temelgida+(temelgida*56/1000);
            printf("Son fiyat =  %.2f TL",sonfiyat);

        }
         break;
    case 2:
         {
            printf("Lutfen urunun fiyatini giriniz (VERGISIZ FIYAT)\n");
            scanf("%f",&luks);
            sonfiyat=luks+(luks*196/1000);
            printf("Son fiyat =  %.2f TL",sonfiyat);

        }
        break;
    default:
        {
            printf("HATA !!! Yanlis kod girdiniz\n");
        }
    }
            return 0;
}
