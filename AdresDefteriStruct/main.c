#include <stdio.h>
#include <stdlib.h>
typedef struct adresDefteri{
char ad[100];
char soyad[100];
char telno[10];
char adres[200];
char postakodu[6];

}defter;

int main()
{
    /*
    Adres defteri adinda bir yapi tanimlayiniz.Tutulacak bilgiler ada soyad adres tel posta kodu þeklindedir buna göre 'N' adet kisinin
    bilgisini bir yapida tutan C programini yaziniz.
    */
    int N;
    int i;
    char satir;
    printf("Kac adet kayit tutulacak?\n");
    scanf("%d",&N);
    scanf("%c",&satir);
    defter iletisim[N];
    for(i=0;i<N;i++)
    {
        printf("Isim : ");
        gets(iletisim[i].ad);
        printf("\nSoyisim : ");
        gets(iletisim[i].soyad);
        printf("\nTelefon numarasi : ");
        gets(iletisim[i].telno);
        printf("\nAdres: ");
        gets(iletisim[i].adres);
        printf("\Posta Kodu: ");
        gets(iletisim[i].postakodu);
    }
    printf("ADI\tSOYADI\tTELEFON\tADRES\tPOSTA KODU\n");
    for(i=0;i<N;i++)
    {
        printf("%s\t%s\t%s\t%s\t%s\n",iletisim[i].ad,iletisim[i].soyad,iletisim[i].telno,iletisim[i].adres,iletisim[i].postakodu);
    }
    return 0;
}
