#include <stdio.h>
#include <stdlib.h>

struct ogrenciTip{
int no;
char cevap[10];
};
struct sonucTip{
int no;
int not;
};


int main()
{
    /*bir ��retmen 30 ki�ilik s�n�fa 10 soruluk �oktan se�meli s�nav vermi�tir bu s�navda her sorunun 4 ��kk�(A B C D)vard�r
    ve 4 yanl�� bir do�ruyu g�t�rmektedir.bu programda bir ��rencinin numaras�n� ve cevaplar�n� i�eren bir yap� tan�mlay�n�z ve bu s�n�fta
    bulunan ger ��rencinin okul no ve cevaplar�n� bu yap� dizisine okutunuz.daha sonra ��retmenin haz�rlad��� cevap anahtar�n� bir karakter dizisinde
    tutunuz ve her ��rencinin 10 �zerinden ald��� notu
    ve her ��rencinin ald��� notu hesaplay�n�z.Her ��rencinin okul numaras� ile hesaplanan s�nav sonucunu bir ba�ka yap� dizisinde tutunuz ve
    sonu�lar� ekranda g�r�nt�leyiniz. */
    struct ogrenciTip ogrenci[30];
    struct sonucTip sonuc[30];
    char anahtar[10];
    int i,j,dogru=0,yanlis=0;
    printf("Lutfen cevap anahtarini giriniz:");
    for(i=0;i<10;i++)
    {
        scanf("%c",anahtar);
    }
    printf("Ogrenci bilgilerini giriniz.\n");
    for(j=0;j<30;j++)
    {
        printf("Ogrenci No:");
        scanf("%d",&ogrenci[j].no);
        dogru=0;
        yanlis=0;
        for(i=0;i<10;i++)
        {
            scanf("%c",&ogrenci[j].cevap[i]);
            if(anahtar[i]==ogrenci[j].cevap[i]);
            {
                dogru++;
            }
            else if (ogrenci[j].cevap[i]!=' ')
            {
                yanlis++;
            }
        }
        printf("Dogru sayisi : %d \n",dogru);
        printf("Yanlis sayisi : %d\n",yanlis);
        printf("Bos sayisi : %d\n",10-dogru-yanlis);
        printf("Net sayisi : %.2f",dogru-(yanlis*0.25));
    }
    return 0;
}
