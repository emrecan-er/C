#include <stdio.h>
#include <stdlib.h>

int main()
{
 int dizi[4];
 int i;
 int toplam;
 i=0;
 while (i<4)
 {
     printf("Bir tamsayi giriniz \n");
     scanf("%d",&dizi[i]);
     i++;
 }
 toplam=0;
 for (i=0;i<4;i++)
 {
     toplam=toplam+dizi[i];
 }
 printf("Dizi toplam degerim %d\n",toplam);
 if (toplam==31)
 {
     printf("S J");
 }
    return 0;
}
