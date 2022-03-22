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
     /*Bir buz pateni kar��la�mas�nda,bir yar��mac�n�n performans� 6.00 �zerinden puanlanarak 10 hakem taraf�ndan
    de�erlendirilmektedir.Yar��mac�n�n performans puan� ise hakemlerin vermi� oldu�u en d���k ve en y�ksek puan
    at�l�p,geri kalan puanlar�n aritmetik ortlamas� al�narak bulunmaktad�r.Yazaca��n�z programda yar��mac�n�n
    ad�,soyad� performans puan�n� hesaplay�p ekranda g�r�nt�leyiniz.Performans hesaplamas�n� tek parametreli
    bir fonksiyonda yap�n�z.Bu fonksiyon yar��mac�ya ait yap�y� parametre olarak almal� ve performans puan�n�
    hesaplayarak geri d�nd�rmelidir.*/
    int i;
    struct yarismaciTip patenci;
    printf("Yarismacinin Adi : ");
    scanf("%s",&patenci.isim);
    printf("Yarismacinin Soyadi : ");
    scanf("%s",&patenci.soyad);
    printf("\nHakem puanlari : \n");
    for(i=0;i<10;i++)
    {
        scanf("%f",&patenci.puan[i]);
    }
    patenci.performans=puanHesap(patenci);
    printf("Performans Puani = %.2f",patenci.performans);
    return 0;
}
