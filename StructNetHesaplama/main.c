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
    /*bir öðretmen 30 kiþilik sýnýfa 10 soruluk çoktan seçmeli sýnav vermiþtir bu sýnavda her sorunun 4 þýkký(A B C D)vardýr
    ve 4 yanlýþ bir doðruyu götürmektedir.bu programda bir öðrencinin numarasýný ve cevaplarýný içeren bir yapý tanýmlayýnýz ve bu sýnýfta
    bulunan ger öðrencinin okul no ve cevaplarýný bu yapý dizisine okutunuz.daha sonra öðretmenin hazýrladýðý cevap anahtarýný bir karakter dizisinde
    tutunuz ve her öðrencinin 10 üzerinden aldýðý notu
    ve her öðrencinin aldýðý notu hesaplayýnýz.Her öðrencinin okul numarasý ile hesaplanan sýnav sonucunu bir baþka yapý dizisinde tutunuz ve
    sonuçlarý ekranda görüntüleyiniz. */
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
