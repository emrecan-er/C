#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yas,maxmin;
    int sayac=0;
    int yassayac=0;
    int yenisayac=0;
    float ort,kirpilmisort;
    int max,min,toplam=0,yenitoplam=0;
    for(;;)
    {
        printf("Yasi giriniz(durdurmak icin 0):");
        scanf("%d",&yas);

        if(0<yas && yas<=999)
        {
            yassayac++;
            sayac++;
            if(sayac==1)
            {
                min=yas;
                max=yas;
            }
            if(yas<=min)
            {
                min=yas;
            }
            if(yas>=max)
            {
                max=yas;
            }
            toplam=toplam+yas;
            ort=toplam/yassayac;

        }
        else if (yas==0)
        {

            yenitoplam=toplam-max-min;
            yenisayac=yassayac-2;
            kirpilmisort=yenitoplam/yenisayac;
            printf("---------------------------------------------\n");
            printf("Toplam %d tane izleyici giris yapti.\n",yassayac);
            printf("Ortalama = %.2f, Kirpilmis Ortalama = %.2f",ort,kirpilmisort);
            break;
        }
        else
        {
            printf("Hata !! Lutfen yas degerine dikkat ediniz\n");
        }

    }



    return 0;
}
