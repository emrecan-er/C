#include <stdio.h>
#include <stdlib.h>

int main()
{
//klavyeden bir deger al ve o kadar sayi al kullanicidan

/*int sayi,i,sayac1=0,sayac2=0,n;
printf("Kac tane sayi girmek istersiniz.\n");
scanf("%d",&sayi);
printf("Lutfen %d tane sayi giriniz.\n",sayi);
for(i=0;i<sayi;i++)
{
    scanf("%d",&n);
    if(n>0)
    {
        sayac1++;
    }
    else if (n<0)
    {
        sayac2++;
    }
}
printf("%d tane pozitif sayi girdiniz.\n",sayac1);
printf("%d tane negatif sayi girdiniz.\n",sayac2);*/
//tiyatroda yasa göre ücret hesapldýðýný varsayalým eðer yaþ biri ile 10 aralýðýndaysa bilet 1 tl 11 17 arasýndaysa 1.5tl 18 26 arasýysa 4.75 27 50 arasý bilet 7 tl 51 100 yaþ arasý 5.25tl yas 100den büyükse kabul etme
/*int ailekackisi,yaslar,i;
float ucret=0;
printf("Aile kac kisilik? : ");
scanf("%d",&ailekackisi);
printf("Sirayla birey yaslarini giriniz.\n");
for(i=0;i<ailekackisi;i++)
    {
    scanf("%d",&yaslar);
    if(1<=yaslar&& yaslar<=10)
    {
        ucret=ucret+1;
    }
    else if (11<=yaslar && yaslar<=17)
    {
        ucret=ucret+1.5;
    }
    else if (18<=yaslar && yaslar<=26)
    {
    ucret=ucret+4.75;
    }
    else if (27<=yaslar && yaslar<=50)
    {
        ucret=ucret+7;
    }
    else if (51<=yaslar && yaslar<=100)
    {
        ucret=ucret+5.25;
    }
    else
    {
        printf("Hatali yas girdiniz tekrar giriniz.\n");
        ailekackisi++;
    }
}
    printf("Toplam Ucret=%.2f",ucret);*/
    /*int n,carpim=1,i;
    printf("Lutfen Sayi Giriniz.\n");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        carpim=carpim*i;
    }
    printf("%d! = %d",n,carpim);
*/
int sayi,yenisayi;
    printf("Lutfen Sayi Giriniz.\n");
    scanf("%d",&sayi);
    while (sayi>0)
    {
        yenisayi=sayi*(sayi-1);
        sayi--;
    }
    printf("%d\n",yenisayi);


    return 0;
}
