#include <stdio.h>
#include <stdlib.h>

struct yarismaciTip{
char isim[10],soyad[10];
float puan[10],performans;
};
float puanHesap(struct yarismaciTip pat)
{
  int i;
  float max=0.0,min=6.0,sonuc=0.0;
  for(i=0;i<10;i++)
  {
      if(pat.puan[i]>max)
      {
          max=pat.puan[i];
      }
      if(pat.puan[i]<min)
      {
          min=pat.puan[i];
      }
      sonuc +=pat.puan[i];
  }
  sonuc=(sonuc-max-min)/8;
  return(sonuc);
}
int main()
{
     /*Bir buz pateni karþýlaþmasýnda,bir yarýþmacýnýn performansý 6.00 üzerinden puanlanarak 10 hakem tarafýndan
    deðerlendirilmektedir.Yarýþmacýnýn performans puaný ise hakemlerin vermiþ olduðu en düþük ve en yüksek puan
    atýlýp,geri kalan puanlarýn aritmetik ortlamasý alýnarak bulunmaktadýr.Yazacaðýnýz programda yarýþmacýnýn
    adý,soyadý performans puanýný hesaplayýp ekranda görüntüleyiniz.Performans hesaplamasýný tek parametreli
    bir fonksiyonda yapýnýz.Bu fonksiyon yarýþmacýya ait yapýyý parametre olarak almalý ve performans puanýný
    hesaplayarak geri döndürmelidir.*/
    struct yarismaciTip patenci[100];
    int n,i,j,birinci;
    float max=0.0;
    char satir;
    printf("Lutfen yarismaci sayisini giriniz.\n");
    scanf("%d",&n);
    scanf("%c",&satir);
    for(j=0;j<n;j++)
    {
        printf("Lutfen yarismacinin adini giriniz.\n");
        gets(patenci[j].isim);
         printf("Lutfen yarismacinin soyadini giriniz.\n");
          scanf("%c",&satir);
        gets(patenci[j].soyad);
        printf("Hakem Puani\n");
        for(i=0;i<10;i++)
        {
            scanf("%f\n",&patenci[j].puan[i]);
        }
         scanf("%c",&satir);
        patenci[j].performans=puanHesap(patenci[j]);
        printf("Puan=%.2f\n",patenci[j].performans);
        if(patenci[j].performans>max)
        {
            max=patenci[j].performans;
            birinci=j;
        }

    }
    printf("Yarismanin birincisi\n");
    printf("Isim : %s\n",patenci[birinci].isim);
    printf("Soyisim : %s\n",patenci[birinci].soyad);
    printf("Puani : %.2f",max);

    return 0;
}
