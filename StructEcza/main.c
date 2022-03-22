#include <stdio.h>
#include <stdlib.h>
typedef struct
    {
    char ilac_adi[20];
    int adet;
    int fiyat;
    }data;

int main()
{
    /*Bir eczane stoklarinda bulunan 100 adet farkli ilaciait bilgileri saklamak istemektedir.Bunun icin asagida verilen yapi kullanilmaktadir.
    buna gore verilen yapiyi kullanarak 100 adet ilac bilgisini tutan ve ilac adeti 20 ve altinda olan ilaclarin adlarini bulmaya yarayan c programi yaziniz
    */
    int i;
    char bosluk;
    data veriler[4];
    for(i=0;i<4;i++)
    {
        fflush(stdin);//Bellegi temizlemeye yariyor
        printf("Ilac adini giriniz : ");
        gets(veriler[i].ilac_adi);
        printf("Ilacin adetini giriniz : ");
        scanf("%d",&veriler[i].adet);
        printf("Ilacin fiyatini giriniz : ");
        scanf("%d",&veriler[i].fiyat);
        printf("\n");
    }
    printf("Ilac Adi\n");
    printf("===========\n");
    for(i=0;i<4;i++)
    {
    if(veriler[i].adet<20)
    {
        printf("%s\n",&veriler[i].ilac_adi);
    }

    }





    return 0;
}
